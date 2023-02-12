
// user
#include "character_lcd.hpp"


namespace clcd
{

CharacterLcd::CharacterLcd(LcdType type
            , cmn::ICircularBuffer<uint8_t>& dataBuf
            , cmn::ICircularBuffer<uint16_t>& intervalBuf
            , bool initialBacklightState
            , bool initialScreenState
            , CursorMode initialCursorMode
            , EndLineMode endMode)
    : m_type{type}
    , m_endLineMode{endMode}
    , m_dataBuf{dataBuf}
    , m_intervalBuf{intervalBuf}
    , m_formatter{*this}
    , m_backlightState{false}
    , m_curXPos{0}
    , m_curYPos{0}
    , m_cursorAndScreenConfig{0}
{
    TurnOnOffBacklight(false);
    Reset();

    TurnOnOffBacklight(initialBacklightState);
    SetCursorMode(initialCursorMode);
    TurnOnOffScreen(initialScreenState);
}

void CharacterLcd::PutChar(char c)
{
    switch (c)
    {
    case '\n':
        goToNextLine();
        return;
    case '\0':
        goToStart();
        return;
    }

    if (m_curXPos < GetColumnNumber())
    {
        sendData(c);
        ++m_curXPos;
    }
}

void CharacterLcd::SetPosition(uint8_t xPos, uint8_t yPos)
{
    if (yPos >= GetRowNumber())
    {
        yPos = GetRowNumber() - 1;
    }
    if (xPos >= GetColumnNumber())
    {
        xPos = GetColumnNumber() - 1;
    }

    constexpr uint8_t line2_offset{0x40};
    uint8_t address{};

    switch (yPos)
    {
    case 0:
        address = 0;
        break;
    case 1:
        address = line2_offset;
        break;
    case 2:
        address = 0 + GetColumnNumber();
        break;
    case 3:
        address = line2_offset + GetColumnNumber();
        break;
    }

    address += xPos;

    m_curXPos = xPos;
    m_curYPos = yPos;

    constexpr uint8_t position_command_mask{0b1000'0000};
    sendCommand(address | position_command_mask, command_delay);
}

void CharacterLcd::GotoLine(uint8_t lineNumber)
{
    SetPosition(0, lineNumber);
}

void CharacterLcd::ClearScreen()
{
    GotoLine(0);
    for (auto lineIndex{0}; lineIndex < GetRowNumber(); ++lineIndex)
    {
        ClearLine(lineIndex);
    }
    GotoLine(0);
}

void CharacterLcd::ClearLine(uint8_t lineNumber)
{
    GotoLine(lineNumber);
    *this << cmn::Manipulator::spaces << GetColumnNumber();
    GotoLine(lineNumber);
}

void CharacterLcd::TurnOnOffScreen(bool state)
{
    constexpr uint8_t screen_on_mask{0b0000'0100};

    m_cursorAndScreenConfig |= cursor_screen_ctrl_mask;
    m_cursorAndScreenConfig = considerMask(m_cursorAndScreenConfig, screen_on_mask, state);

    sendCommand(m_cursorAndScreenConfig, command_delay);
}

void CharacterLcd::TurnOnOffBacklight(bool state)
{
    m_backlightState = state;
    writeByte(0, 0_us);
}

void CharacterLcd::SetCursorMode(CursorMode mode)
{
    constexpr uint8_t cursor_on_mask{0b0000'0010};
    constexpr uint8_t cursor_blink_mask{0b0000'0001};

    bool on{mode != CursorMode::cursor_off};
    bool blink{mode == CursorMode::cursor_blink};

    m_cursorAndScreenConfig |= cursor_screen_ctrl_mask;
    m_cursorAndScreenConfig = considerMask(m_cursorAndScreenConfig, cursor_on_mask, on);
    m_cursorAndScreenConfig = considerMask(m_cursorAndScreenConfig, cursor_blink_mask, blink);

    sendCommand(m_cursorAndScreenConfig, command_delay);
}

void CharacterLcd::Reset()
{
    writeByte(0, 20_ms);
    init8bitMode(5_ms);
    init8bitMode(200_us);
    init8bitMode(command_delay);

    init4bitMode();
    initLinesNumberAndFont(LinesNumber::two, FontSize::small);

    // clear cursor and screen state config
    m_cursorAndScreenConfig = 0;

    TurnOnOffScreen(false);
    hardwareClear();
    setEntryMode();
}

uint8_t CharacterLcd::GetColumnNumber()
{
    switch (m_type)
    {
    case LcdType::lcd_16x02:
        return 16;
    case LcdType::lcd_20x04:
        return 20;
    default:
        return 0;
    }
}

uint8_t CharacterLcd::GetRowNumber()
{
    switch (m_type)
    {
    case LcdType::lcd_16x02:
        return 2;
    case LcdType::lcd_20x04:
        return 4;
    default:
        return 0;
    }
}

uint8_t CharacterLcd::GetI2cAddress()
{
    return i2c_address;
}

cmn::freq_t CharacterLcd::GetMaxI2cBaudrate()
{
    return 100_kHz;
}

void CharacterLcd::init8bitMode(cmn::time_interval_t delay)
{
    constexpr uint8_t init_8bit_mode_mask{0b0011'0000};

    sendNibble(init_8bit_mode_mask, delay);
}

void CharacterLcd::init4bitMode()
{
    sendNibble(init_4bit_mode_mask, command_delay);
}

void CharacterLcd::initLinesNumberAndFont(LinesNumber linesNumber, FontSize fontSize)
{
    constexpr uint8_t lines_2_mask{0b1000};
    constexpr uint8_t big_font_mask{0b0100};

    uint8_t command{init_4bit_mode_mask};

    if (linesNumber == LinesNumber::two)
    {
        command |= lines_2_mask;
    }

    if (fontSize == FontSize::big)
    {
        command |= big_font_mask;
    }

    sendCommand(command, command_delay);
}

void CharacterLcd::setEntryMode()
{
    constexpr uint8_t entry_mode_command_mask{0b0110};

    sendCommand(entry_mode_command_mask, command_delay);
}

void CharacterLcd::hardwareClear()
{
    constexpr uint8_t clear_command_mask{0b0000'0001};

    sendCommand(clear_command_mask, clear_delay);
}

void CharacterLcd::writeByte(uint8_t byte, cmn::time_interval_t delay)
{
    byte = considerBacklightState(byte);

    m_dataBuf.Put(byte);
    m_intervalBuf.Put(static_cast<uint16_t>(delay));
}

void CharacterLcd::sendNibble(uint8_t nibble, cmn::time_interval_t delay)
{
    nibble = considerPulse(nibble, true);
    writeByte(nibble, pulse_delay);

    nibble = considerPulse(nibble, false);
    writeByte(nibble, delay);
}

void CharacterLcd::sendCommand(uint8_t command, cmn::time_interval_t delay)
{
    uint8_t highNibble{command & 0xF0};
    uint8_t lowNibble{(command & 0x0F) << 4};

    sendNibble(highNibble, pulse_delay);
    sendNibble(lowNibble, delay);
}

void CharacterLcd::sendData(uint8_t data)
{
    uint8_t highNibble{data & 0xF0};
    uint8_t lowNibble{(data & 0x0F) << 4};

    highNibble = considerDataNotCommand(highNibble, true);
    lowNibble = considerDataNotCommand(lowNibble, true);

    sendNibble(highNibble, pulse_delay);
    sendNibble(lowNibble, command_delay);
}

void CharacterLcd::clearRestOfLine()
{
    while (m_curXPos < GetColumnNumber())
    {
        PutChar(' ');
    }
}

uint8_t CharacterLcd::considerBacklightState(uint8_t byte)
{
    return considerMask(byte, backlight_mask, m_backlightState);
}

uint8_t CharacterLcd::considerPulse(uint8_t byte, bool pulseState)
{
    return considerMask(byte, pulse_mask, pulseState);
}

uint8_t CharacterLcd::considerDataNotCommand(uint8_t byte, bool isData)
{
    return considerMask(byte, data_not_command_mask, isData);
}

uint8_t CharacterLcd::considerMask(uint8_t byte, uint8_t mask, bool set)
{
    return set ? (byte |= mask) : (byte &= ~mask);
}

void CharacterLcd::goToStart()
{
    SetPosition(0, 0);
}

void CharacterLcd::goToNextLine()
{
    if (m_endLineMode == EndLineMode::clear)
    {
        clearRestOfLine();
    }

    if (m_curYPos < GetRowNumber() - 1)
    {
        SetPosition(0, m_curYPos + 1);
    }
    else
    {
        goToStart();
    }
}

}
