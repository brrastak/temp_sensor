
// user
#include "common.hpp"
#include "formatter.hpp"


namespace cmn
{

Formatter::Formatter(IOutputCharStream& output)
    : m_out{output}
    , m_lastManipulator{Manipulator::none}
    , m_fixedPointValue{0}
{

}

Formatter& Formatter::operator<<(Manipulator cmd)
{
    switch (cmd)
    {
    case endl:
        m_out.PutChar('\n');
        break;
    case ends:
        m_out.PutChar('\0');
        break;
    case Manipulator::none:
        break;
    default:
        m_lastManipulator = cmd;
        break;
    }

    return *this;
}

Formatter& Formatter::operator<<(const char* str)
{
    for (size_t i{0}; i < max_str_len; ++i)
    {
        if (str[i] == '\0')
        {
            break;
        }
        m_out.PutChar(str[i]);
    }

    return *this;
}

Formatter& Formatter::operator<<(char c)
{
    m_out.PutChar(c);
    return *this;
}

Formatter& Formatter::operator<<(int number)
{
    return this->operator<<(static_cast<int32_t>(number));
}

Formatter& Formatter::operator<<(int32_t number)
{
    if (proceedManipulator(number))
    {
        return *this;
    }

    constexpr auto max_dec_value = 1'000'000'000;

    if (number < 0)
    {
        m_out.PutChar('-');
        number = -number;
    }

    bool wasNonZero{false};

    for (uint32_t divider{max_dec_value}; divider > 0; divider /= 10)
    {
        // fixed point
        if (divider < m_fixedPointValue)
        {
            if (wasNonZero == false)
            {
                m_out.PutChar('0');
                wasNonZero = true;
            }
            m_out.PutChar('.');
            clearFixedPointValue();
        }

        if (wasNonZero || (number / divider != 0))
        {
            wasNonZero = true;
            m_out.PutChar(digitToChar(number / divider));
            number %= divider;
        }
    }
    if (!wasNonZero)
    {
        m_out.PutChar('0');
    }

    return *this;
}

char Formatter::digitToChar(uint8_t digit)
{
    return '0' + static_cast<char>(digit);
}

char Formatter::hexDigitToChar(uint8_t digit)
{
    if (digit < 10)
    {
        return digitToChar(digit);
    }

    return 'A' + static_cast<char>(digit - 10);
}

bool Formatter::proceedManipulator(int32_t number)
{
    switch (m_lastManipulator)
    {
    case spaces:
        proceedSpaces(number);
        return true;
    case fixed_point:
        initFixedPointValue(number);
        return true;
    case hex:
        proceedAsHex(number);
        return true;
    default:
        return false;
    }
}

void Formatter::clearManipulator()
{
    m_lastManipulator = Manipulator::none;
}

void Formatter::proceedSpaces(int32_t number)
{
    constexpr auto max_spaces_number{100};

    number = cmn::Crop(number, 0, max_spaces_number);

    for (auto i{0}; i < number; ++i)
    {
        m_out.PutChar(' ');
    }

    clearManipulator();
}

void Formatter::initFixedPointValue(int32_t number)
{
    constexpr auto max_fixed_point_position{12};

    number = cmn::Crop(number, 0, max_fixed_point_position);

    m_fixedPointValue = 1;
    for (auto i{0}; i < number; ++i)
    {
        m_fixedPointValue *= 10;
    }
    if (m_fixedPointValue == 1)
    {
        clearFixedPointValue();
    }

    clearManipulator();
}

void Formatter::clearFixedPointValue()
{
    m_fixedPointValue = 0;
}

void Formatter::proceedAsHex(uint32_t number)
{
    uint8_t value{static_cast<uint8_t>(number & 0xFF)};

    m_out.PutChar(hexDigitToChar(value >> 4));
    m_out.PutChar(hexDigitToChar(value & 0x0F));
}

}
