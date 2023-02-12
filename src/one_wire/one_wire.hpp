
// user
#include "i_gpio.hpp"
#include "i_serial.hpp"
#include "time_interval.hpp"

#pragma once


namespace cmn
{

enum class OneWireError
{
    no_error,
    no_connection
};

/// @brief Class of software one-wire bus
class OneWire : public hal::ISerial
{
public:
    OneWire(hal::IGpio& pin
            , cmn::ICircularBuffer<uint8_t>* transmitBuffer = nullptr
            , cmn::ICircularBuffer<uint8_t>* receiveBuffer = nullptr);

    /// @brief Assign circular buffer for the data to be transmitted
    void AssignTransmitBuffer(cmn::ICircularBuffer<uint8_t>* buffer) override;

    /// @brief Assign circular buffer for the received data
    void AssignReceiveBuffer(cmn::ICircularBuffer<uint8_t>* buffer) override;

    void EnableTransmitter() override;
    void DisableTranstitter() override;
    void EnableReceiver() override;
    void DisableReceiver() override;

    /// @brief Trigger transmission of all data in the transmission buffer
    void TriggerTransmission() override;

    /// @brief Trigger transmission of specified number of bytes from the transmission buffer
    void TriggerTransmission(size_t number) override;

    /// @brief Start receiving of unspecified number of bytes
    void Receive() override;

    /// @brief Start receiving of specified number of bytes
    void Receive(size_t number);

    /// @return True after transmitting of specified number of bytes
    /// or if transmit buffer is empty in case of not specified number
    bool IsTransmitted() override;

    /// @return True after receiving of specified number of bytes
    /// or if receive buffer is empty in case of not specified number
    bool IsReceived() override;

    bool IsBusy();

    void Proceed();

    OneWireError GetError();

    cmn::time_interval_t GetProceedInterval();

    void Reset();

    bool IsConnected();

    // void triggerBitWrite(bool value);

    // void triggerBitRead();

    // void triggerResetSend();

private:
    bool getPinStateToSet();

    void goToNextStage();

    void finalizeOperation();

    void finalizeWrite();

    void finalizeRead();

    bool isStageToRead();

    bool isStageToCheckConnection();

    void readBit();

    void checkConnection();

    bool isFinalStage();

    void triggerNextByteWrite();

    void triggerNextByteRead();

private:
    OneWire(const OneWire&) = delete;

    enum BitOperation : uint8_t;

    hal::IGpio& m_pin;
    cmn::ICircularBuffer<uint8_t>* m_transmitBuffer;
    cmn::ICircularBuffer<uint8_t>* m_receiveBuffer;
    BitOperation m_bitOperation;
    uint8_t m_bitStageIndex;
    uint8_t m_bitIndex;
    uint8_t m_byte;
    OneWireError m_error;
    size_t m_bytesToReceive;
};

}
