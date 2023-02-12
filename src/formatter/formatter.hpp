
// user
#include "i_output_char_stream.hpp"

// std
#include <cstddef>      // size_t
#include <cstdint>
#include <type_traits>  // make_unsigned

#pragma once


namespace cmn
{

enum class Manipulator
{
    none,
    endl,
    ends,
    /// @brief The next number sets the number of decimal digits after fixed point
    /// and the next integer number is formatted as fixed point number
    fixed_point,
    /// @brief After receivung the next number
    /// sends space symbol sequence of specified number length
    spaces,
    /// @brief Next number is formatted as hexadecimal
    hex
};

constexpr auto endl{Manipulator::endl};
constexpr auto ends{Manipulator::ends};
constexpr auto fixed_point{Manipulator::fixed_point};
constexpr auto spaces{Manipulator::spaces};
constexpr auto hex{Manipulator::hex};


/// @brief Convert different type variables into char string
/// and send to specified object of IOutputCharStream type
class Formatter
{
public:
    Formatter(IOutputCharStream& output);

    Formatter& operator<<(Manipulator cmd);
    Formatter& operator<<(const char* str);
    Formatter& operator<<(char c);
    Formatter& operator<<(int number);
    Formatter& operator<<(int32_t number);

private:
    static constexpr size_t max_str_len{1000};

    char digitToChar(uint8_t digit);
    char hexDigitToChar(uint8_t digit);
    bool proceedManipulator(int32_t number);
    void clearManipulator();
    void proceedSpaces(int32_t number);
    void initFixedPointValue(int32_t number);
    void clearFixedPointValue();
    void proceedAsHex(uint32_t number);

    IOutputCharStream& m_out;
    Manipulator m_lastManipulator;
    uint32_t m_fixedPointValue;
};

}
