
// user
#include "temp_sensor_ds18b20.hpp"

// std
#include <cstddef>
#include <limits>


namespace driver
{


enum class TempSensorDS18B20::State : uint32_t
{
    idle,
    reset_before_update,
    update,
    wait_for_updating,
    reset_before_read,
    prepare_read,
    trigger_read,
    proceed_read
};

TempSensorDS18B20::TempSensorDS18B20(hal::IGpio& oneWirePin, hal::ITick& usTickSource)
    : m_oneWire{oneWirePin, &m_transmitBuffer, &m_receiveBuffer}
    , m_usCounter{usTickSource}
    , m_temperature{0}
    , m_error{Error::no_data}
    , m_state{State::idle}
{

}

int16_t TempSensorDS18B20::GetTemperature()
{
    return m_temperature;
}

void TempSensorDS18B20::UpdateTemperature()
{
    m_state = State::reset_before_update;
    m_error = Error::no_data;
}

bool TempSensorDS18B20::IsTemperatureValid()
{
    return GetError() == Error::no_error;
}

TempSensorDS18B20::Error TempSensorDS18B20::GetError()
{
    return m_error;
}

void TempSensorDS18B20::Proceed()
{
    if (m_oneWire.IsBusy())
    {
        if (m_usCounter.IsTimeoutPassed(m_oneWire.GetProceedInterval()))
        {
            m_oneWire.Proceed();
        }
        return;
    }

    switch (m_state)
    {
    case State::idle:
        break;

    case State::reset_before_update:
        m_oneWire.Reset();
        m_state = State::update;
        break;

    case State::update:
        if (m_oneWire.IsConnected())
        {
            m_state = State::wait_for_updating;
            m_error = Error::no_data;
            triggerUpdate();
        }
        else
        {
            m_state = State::idle;
            m_error = Error::no_connection;
        }
        break;

    case State::wait_for_updating:
        if (isUpdated())
        {
            m_state = State::reset_before_read;
        }
        break;

    case State::reset_before_read:
        m_oneWire.Reset();
        m_state = State::prepare_read;
        break;

    case State::prepare_read:
        prepareRead();
        m_state = State::trigger_read;
        break;

    case State::trigger_read:
        triggerRead();
        m_state = State::proceed_read;
        break;

    case State::proceed_read:
        proceedRead();
        m_state = State::idle;
        break;
    }
}

bool TempSensorDS18B20::IsBusy()
{
    return m_oneWire.IsBusy();
}

void TempSensorDS18B20::triggerUpdate()
{
    static constexpr uint8_t skip_rom_command{0xCC};
    static constexpr uint8_t convert_temp_command{0x44};

    m_transmitBuffer.Put(skip_rom_command);
    m_transmitBuffer.Put(convert_temp_command);

    m_oneWire.TriggerTransmission();
}

bool TempSensorDS18B20::isUpdated()
{
    bool res{false};

    if (!m_receiveBuffer.IsEmpty())
    {
        res = m_receiveBuffer.Get() != 0;
    }

    if (res == false)
    {
        m_oneWire.Receive(1);
    }

    return res;
}

void TempSensorDS18B20::prepareRead()
{
    static constexpr uint8_t skip_rom_command{0xCC};
    static constexpr uint8_t read_command{0xBE};

    m_transmitBuffer.Put(skip_rom_command);
    m_transmitBuffer.Put(read_command);

    m_oneWire.TriggerTransmission();
}

void TempSensorDS18B20::triggerRead()
{
    m_oneWire.Receive(bytes_to_receive);
}

void TempSensorDS18B20::proceedRead()
{
    cmn::Array<uint8_t, bytes_to_receive - 1> array;
    m_receiveBuffer.Get(array, array.Size());

    uint8_t crcValue = m_receiveBuffer.Get();

    if (crcValue != crc::Calculate(array))
    {
        m_error = Error::crc_error;
        return;
    }

    m_temperature = decodeRawData(array[1], array[0]);
    m_error = Error::no_error;
}

int16_t TempSensorDS18B20::decodeRawData(uint8_t hiByte, uint8_t loByte)
{
    int16_t value{0};
    value |= hiByte << 8;
    value |= loByte;
    value /= 8;
    value *= 5;

    return value;
}


}
