
// user
#include "clock.hpp"
#include "cmn_assert.hpp"
#include "i2c.hpp"

// hardware
#include "i2c1registers.hpp"
#include "i2c2registers.hpp"
#include "rccregisters.hpp"


namespace hal
{

I2c::I2c(I2cNumber number
    , cmn::freq_t baudrate
    , [[maybe_unused]] IGpio& sckPin
    , [[maybe_unused]] IGpio& sdaPin
    , uint8_t deviceAddress
    , SubscribeFunction subscribeToEventInterrupt
    , SubscribeFunction subscribeToErrorInterrupt
    , cmn::ICircularBuffer<uint8_t>* transmitBuffer
    , cmn::ICircularBuffer<uint8_t>* receiveBuffer)
    : m_number{number}
    , m_transmitBuffer{transmitBuffer}
    , m_receiveBuffer{receiveBuffer}
    , m_address{deviceAddress}
    , m_error{I2cErrorCode::no_error}
    , m_transmitMode{I2cTransmitMode::discontinuous}
    , m_numberToTransmit{0}
{
    cmn::freq_t clockFrequency = hal::GetApb1Freq();

    enableClock();
    writeClockFrequency(clockFrequency);
    setBaudrate(baudrate, clockFrequency);
    setRiseTime(clockFrequency);
    enableEventInterrupt();
    enableErrorInterrupt();

    subscribeToInterrupt(subscribeToEventInterrupt);
    subscribeToInterrupt(subscribeToErrorInterrupt);

    enablePeripheral();
}

void I2c::AssignTransmitBuffer(cmn::ICircularBuffer<uint8_t>* buffer)
{
    m_transmitBuffer = buffer;
}

void I2c::AssignReceiveBuffer(cmn::ICircularBuffer<uint8_t>* buffer)
{
    m_receiveBuffer = buffer;
}

void I2c::EnableTransmitter()
{

}

void I2c::DisableTranstitter()
{

}

void I2c::EnableReceiver()
{

}

void I2c::DisableReceiver()
{

}

void I2c::TriggerTransmission()
{
    m_transmitMode = I2cTransmitMode::discontinuous;

    if (! isBusy())
    {
        generateStartCondition();
    }
}

void I2c::TriggerTransmission(size_t number)
{
    m_transmitMode = I2cTransmitMode::continuous;
    m_numberToTransmit += number;

    if (! isBusy())
    {
        generateStartCondition();
    }
}

void I2c::Receive()
{

}

// void I2c::Receive(size_t number)
// {

// }

bool I2c::IsTransmitted()
{
    return !isBusy();
}

bool I2c::IsReceived()
{

}

void I2c::HandleInterrupt()
{
    handleEventInterrupt();
    handleErrorInterrupt();
}

void I2c::SetDeviceAddress(uint8_t newAddress)
{
    m_address = newAddress;
}

I2cErrorCode I2c::GetError()
{
    return m_error;
}

void I2c::subscribeToInterrupt(SubscribeFunction subscribe)
{
    ASSERT(subscribe != nullptr);
    subscribe(this);
}

void I2c::enableClock()
{
    RCC::APB1ENR::I2C2EN::EnableI2C2Clock::Set();
}

void I2c::writeClockFrequency(cmn::freq_t clock)
{
    I2C2::CR2::FREQ::Set(static_cast<uint32_t>(clock) / 1'000'000);
}

void I2c::setBaudrate(cmn::freq_t baudrate, cmn::freq_t clock)
{
    // Valid only for Sm mode I2C (<= 100kHz)
    I2C2::CCR::CCRField::Set(static_cast<uint32_t>(clock / baudrate) / 2);
}

void I2c::setRiseTime(cmn::freq_t clock)
{
    // 1 ms for Sm mode I2C
    uint8_t value = static_cast<uint8_t>(clock / cmn::convertToFrequency(1_ms) + 1);
    I2C2::TRISE::TRISEField::Set(value);
}

void I2c::enableEventInterrupt()
{
    I2C2::CR2::ITEVTEN::EnableEventInterrupt::Set();
}

void I2c::enableErrorInterrupt()
{
    I2C2::CR2::ITERREN::EnableErrorInterrupt::Set();
}

void I2c::enableBufferInterrupt()
{
    I2C2::CR2::ITBUFEN::EnableBufferInterrupt::Set();
}

void I2c::disableBufferInterrupt()
{
    I2C2::CR2::ITBUFEN::DisableBufferInterrupt::Set();
}

void I2c::enablePeripheral()
{
    I2C2::CR1::PE::EnablePeripheral::Set();
}

void I2c::generateStartCondition()
{
    I2C2::CR1::START::StartGeneration::Set();
}

void I2c::sendAddress()
{
    I2C2::DR::Write(getWriteAddress());
}

void I2c::sendNextByte()
{
    if (m_transmitBuffer == nullptr)
    {
        m_numberToTransmit = 0;
        generateStopCondition();
        return;
    }

    if (!shouldStopTransmission())
    {
        if (m_numberToTransmit > 0)
        {
            --m_numberToTransmit;
        }
        I2C2::DR::Write(m_transmitBuffer->Get());
    }
    else
    {
        disableBufferInterrupt();
    }
}

void I2c::generateStopCondition()
{
    I2C2::CR1::STOP::StopGeneration::Set();
}

bool I2c::isBusy()
{
    return I2C2::SR2::BUSY::CommunicationOngoing::IsSet();
}

void I2c::handleEventInterrupt()
{
    if (I2C2::SR1::SB::StartConditionGenerated::IsSet())
    {
        handleStartConditionGenerated();
        return;
    }

    if (I2C2::SR1::ADDR::AddressSentReceived::IsSet())
    {
        handleAddressSent();
        return;
    }

    if (I2C2::SR1::TxE::DataRegisterEmpty::IsSet())
    {
        if (I2C2::SR1::BTF::DataByteTransferSucceeded::IsSet())
        {
            handleTransmissionCompleted();
        }

        handleTransmitRegisterEmpty();
        return;
    }
}

void I2c::handleErrorInterrupt()
{
    if ((I2C2::SR1::Get() & 0xFF00) != 0)
    {
        I2C2::SR1::Write(0);
        generateStopCondition();
        m_error = hal::I2cErrorCode::error;
    }
    else
    {
        m_error = hal::I2cErrorCode::no_error;
    }
}

void I2c::handleStartConditionGenerated()
{
    sendAddress();
}

void I2c::handleAddressSent()
{
    I2C2::SR1::Get();
    I2C2::SR2::Get();
    sendNextByte();
    enableBufferInterrupt();
}

void I2c::handleTransmitRegisterEmpty()
{
    sendNextByte();
}

void I2c::handleTransmissionCompleted()
{
    if (shouldStopTransmission())
    {
        generateStopCondition();
    }
}

uint8_t I2c::getReadAddress()
{
    // Set LSB
    return (m_address | 0b1);
}

uint8_t I2c::getWriteAddress()
{
    // Reset LSB
    return (m_address & ~0b1);
}

bool I2c::shouldStopTransmission()
{
    if (m_transmitBuffer->IsEmpty())
    {
        m_numberToTransmit = 0;
        return true;
    }

    if (m_transmitMode == I2cTransmitMode::continuous)
    {
        return (m_numberToTransmit == 0);
    }
    else
    {
        return false;
    }
}

}
