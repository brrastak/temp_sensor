
// user
#include "formatter.hpp"
#include "frequency.hpp"
#include "i_circular_buffer.hpp"
#include "i_output_char_stream.hpp"
#include "time_interval.hpp"

// std
#include <cstdint>

#pragma once


namespace clcd
{

/// @brief Number of columns and rows
enum class LcdType
{
    lcd_16x02,
    lcd_20x04
};

enum class EndLineMode
{
    do_nothing,
    /// @brief Clear the rest symbols in the end of the line
    /// after getting command to move to the next line ('\n')
    clear
};

enum class CursorMode
{
    cursor_off,
    cursor_on,
    cursor_blink
};

// Only for init
enum class LinesNumber
{
    one,
    two
};

// Only for init
enum class FontSize
{
    small,
    big
};

/// @brief Class to work with character displays based on HD44780 / SPLC780 chip.
/// Writes commands to send to the uint8_t circular buffer
/// and time interval to wait for command sending in microseconds to the other buffer.
/// Buffer size for initialization is 35. Adding 4 elements for each printed symbol
class CharacterLcd : public cmn::IOutputCharStream
{
public:
    /// @brief Constructor
    /// @param type number of screen columns (i.e. 16, 20) and rows (i.e. 2, 4)
    /// @param dataBuf store data byte to send to display
    /// @param intervalBuf store interval in us to send next data byte
    /// @param initialBacklightState turn backlight on/off
    /// @param initialScreenState turn screen on/off
    /// @param initialCursorMode turn cursor and cursor blinking on/off
    /// @param endMode if the rest of line should be cleared after end of printing the current string
    CharacterLcd(LcdType type
                , cmn::ICircularBuffer<uint8_t>& dataBuf
                , cmn::ICircularBuffer<uint16_t>& intervalBuf
                , bool initialBacklightState = false
                , bool initialScreenState = true
                , CursorMode initialCursorMode = CursorMode::cursor_off
                , EndLineMode endMode = EndLineMode::clear);

    /// @brief Produce commands to output specified char    
    void PutChar(char c) override;

    /// @brief Set position of cursor (and of the next char to print)
    /// @param xPos x position starting with 0
    /// @param yPos y position starting with 0 from the upper
    void SetPosition(uint8_t xPos, uint8_t yPos);

    /// @brief Set cursor to the beginning of the specified line
    /// @param lineNumber line number starting with 0 from the upper
    void GotoLine(uint8_t lineNumber);

    /// @brief Fill all the screen by the space symbols
    void ClearScreen();

    /// @brief Fill specified line by the space symbols and go to the beginning of the line
    /// @param lineNumber line number starting with 0 from the upper
    void ClearLine(uint8_t lineNumber);

    /// @brief Turn screen on/off
    void TurnOnOffScreen(bool state);

    /// @brief Turn backlight on/off
    void TurnOnOffBacklight(bool state);

    /// @brief Turn cursor and cursor blinking on/off
    void SetCursorMode(CursorMode mode);

    /// @brief Wait all the proper delays, turn 4-bit control mode on
    /// and clear screen hardware way
    void Reset();

    /// @brief Get dimentions of screen in chars
    uint8_t GetColumnNumber();
    uint8_t GetRowNumber();

    /// @brief Returns I2C address for PCF8574 IC based modules 
    uint8_t GetI2cAddress();

    /// @brief Returns max I2C baudrate for PCF8574 IC based modules 
    cmn::freq_t GetMaxI2cBaudrate();

    /// @brief Formatted input
    template<typename TPrint>
    cmn::Formatter& operator<<(TPrint print)
    {
        return m_formatter << print;
    }

private:
    void init8bitMode(cmn::time_interval_t delay);
    void init4bitMode();
    void initLinesNumberAndFont(LinesNumber linesNumber, FontSize fontSize);
    void setEntryMode();
    void hardwareClear();
    void writeByte(uint8_t byte, cmn::time_interval_t delay);
    void sendNibble(uint8_t nibble, cmn::time_interval_t delay);
    void sendCommand(uint8_t command, cmn::time_interval_t delay);
    void sendData(uint8_t data);
    void clearRestOfLine();
    uint8_t considerBacklightState(uint8_t byte);
    uint8_t considerPulse(uint8_t byte, bool pulseState);
    uint8_t considerDataNotCommand(uint8_t byte, bool isData);
    inline uint8_t considerMask(uint8_t byte, uint8_t mask, bool set);
    void goToStart();
    void goToNextLine();

    static constexpr uint8_t data_not_command_mask  {0b0000'0001};
    static constexpr uint8_t pulse_mask             {0b0000'0100};
    static constexpr uint8_t backlight_mask         {0b0000'1000};
    static constexpr uint8_t cursor_screen_ctrl_mask{0b0000'1000};
    static constexpr cmn::time_interval_t clear_delay       {4_ms};
    static constexpr cmn::time_interval_t command_delay     {100_us};
    static constexpr cmn::time_interval_t pulse_delay       {1_us};
    static constexpr uint8_t i2c_address{0x4e};
    static constexpr uint8_t init_4bit_mode_mask{0b0010'0000};

    const LcdType m_type;
    const EndLineMode m_endLineMode;

    cmn::ICircularBuffer<uint8_t>& m_dataBuf;
    cmn::ICircularBuffer<uint16_t>& m_intervalBuf;

    cmn::Formatter m_formatter;
    bool m_backlightState;
    uint8_t m_curXPos;
    uint8_t m_curYPos;
    uint8_t m_cursorAndScreenConfig;
};

}
