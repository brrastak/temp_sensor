
// user
#include "cmn_circular_buffer.hpp"
#include "crc.hpp"
#include "i_gpio.hpp"
#include "i_tick.hpp"
#include "one_wire.hpp"
#include "tick_counter.hpp"

#pragma once


namespace driver
{

/// @brief Class to use one-wire temperature sensor DS18B20
class TempSensorDS18B20
{
public:
    /// @brief Constructor
    /// @param oneWirePin pin of one-wire interface
    /// @param usTickSource source of ticks for one-wire timings (in microseconds)
    TempSensorDS18B20(hal::IGpio& oneWirePin, hal::ITick& usTickSource);

    enum class Error
    {
        no_error,
        no_data,
        no_connection,
        crc_error
    };

    enum class State : uint32_t;

    /// @return temperature in degree Celsius
    ///  represented as fixed-point value with one fractional decimal digit
    /// (accuracy is 0.5 C)
    int16_t GetTemperature();

    /// @brief Read temperature from physical sensor
    void UpdateTemperature();

    /// @return True if there is no error with one-wire connection or CRC value
    bool IsTemperatureValid();

    Error GetError();

    /// @brief Should be called periodically
    void Proceed();

    /// @return True while data interaction throught one-wire interface is going
    bool IsBusy();

private:
    // X^8 + X^5 + X^4 + 1
    static constexpr uint8_t crc_polynom{0b0011'0001};
    static constexpr uint8_t crc_init_value{0x00};
    static constexpr uint8_t bytes_to_receive{9};

    using crc = cmn::Crc<uint8_t, crc_polynom, crc_init_value, bytes_to_receive - 1, true>;

    TempSensorDS18B20(const TempSensorDS18B20&) = delete;

    void triggerUpdate();
    bool isUpdated();
    void prepareRead();
    void triggerRead();
    void proceedRead();
    int16_t decodeRawData(uint8_t hiByte, uint8_t loByte);

    cmn::CircularBuffer<uint8_t, 2> m_transmitBuffer;
    cmn::CircularBuffer<uint8_t, bytes_to_receive> m_receiveBuffer;
    cmn::OneWire m_oneWire;
    hal::TickCounter m_usCounter;
    int16_t m_temperature;
    // bool m_isValid;
    Error m_error;
    State m_state;
};


}
