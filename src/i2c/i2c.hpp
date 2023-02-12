
// user
#include "frequency.hpp"
#include "i_gpio.hpp"
#include "i_interrupt_handler.hpp"
#include "i_interrupt_vector.hpp"
#include "i_serial.hpp"
#include "time_interval.hpp"

// std
#include <cstdint>

#pragma once


namespace hal
{

enum class I2cNumber
{
    i2c1,
    i2c2
};

enum class I2cErrorCode
{
    no_error,
    error
};

enum class I2cTransmitMode
{
    /// @brief Transmit until buffer is empty
    discontinuous,
    /// @brief Transmit specified number of data or until buffer is empty
    continuous
};


/// @brief Class to operate with I2C bus in master mode
class I2c : public ISerial, public IInterruptHandler
{
public:
    /// @brief Constructor
    /// @param number particular I2C module number
    /// @param baudrate in Hz
    /// @param sckPin placeholder to be sure that serial clock pin is configured
    /// (as output alternate function open-drain)
    /// @param sdaPin placeholder to be sure that serial data pin is configured
    /// (as output alternate function open-drain)
    /// @param deviceAddress address of an external I2C device
    /// @param subscribeToEventInterrupt function to subscribe to I2C event interrupt vector
    /// @param subscribeToErrorInterrupt function to subscribe to I2C error interrupt vector
    /// @param transmitBuffer circular buffer for data to transmit
    /// @param receiveBuffer circular buffer for received data
    I2c(I2cNumber number
        , cmn::freq_t baudrate
        , [[maybe_unused]] IGpio& sckPin
        , [[maybe_unused]] IGpio& sdaPin
        , uint8_t deviceAddress
        , SubscribeFunction subscribeToEventInterrupt
        , SubscribeFunction subscribeToErrorInterrupt
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
    // void Receive(size_t number) override;

    /// @return True after transmitting of specified number of bytes
    /// or if transmit buffer is empty in case of not specified number
    bool IsTransmitted() override;

    /// @return True after receiving of specified number of bytes
    /// or if receive buffer is empty in case of not specified number
    bool IsReceived() override;

    /// @brief Handler of hardware interrupt which is subscribed to
    void HandleInterrupt() override;

    /// @brief Set address of an external I2C device
    void SetDeviceAddress(uint8_t newAddress);

    /// @brief Get code of tranciever hardware error
    I2cErrorCode GetError();

private:
    // No copy constructor
    I2c(const hal::I2c&) = delete;

    /// @brief Subscribe to interrupt vector as handler
    /// @param subscribe pointer to subscribe function
    void subscribeToInterrupt(SubscribeFunction subscribe);

    void enableClock();

    /// @brief Write to special register frequency of I2C clock (APB1 clock)
    void writeClockFrequency(cmn::freq_t clock);

    void setBaudrate(cmn::freq_t baudrate, cmn::freq_t clock);
    void setRiseTime(cmn::freq_t clock);
    void enableEventInterrupt();
    void enableErrorInterrupt();
    void enableBufferInterrupt();
    void disableBufferInterrupt();
    void enablePeripheral();
    void generateStartCondition();
    void sendAddress();
    void sendNextByte();
    void generateStopCondition();
    bool isBusy();

    void handleEventInterrupt();
    void handleErrorInterrupt();
    void handleStartConditionGenerated();
    void handleAddressSent();
    void handleTransmitRegisterEmpty();
    void handleTransmissionCompleted();

    uint8_t getReadAddress();
    uint8_t getWriteAddress();

    /// @brief Returns true if buffer is empty or specified number of data was transmitted
    bool shouldStopTransmission();

    const I2cNumber m_number;
    cmn::ICircularBuffer<uint8_t>* m_transmitBuffer;
    cmn::ICircularBuffer<uint8_t>* m_receiveBuffer;
    uint8_t m_address;
    I2cErrorCode m_error;
    I2cTransmitMode m_transmitMode;
    size_t m_numberToTransmit;
};

}
