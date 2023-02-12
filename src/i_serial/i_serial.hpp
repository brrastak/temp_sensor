
// user
#include "i_circular_buffer.hpp"

// std
#include <cstddef>  // size_t
#include <cstdint>

#pragma once


namespace hal
{

class ISerial
{
public:
    /// @brief Assign circular buffer for the data to be transmitted
    virtual void AssignTransmitBuffer(cmn::ICircularBuffer<uint8_t>* buffer) = 0;

    /// @brief Assign circular buffer for the received data
    virtual void AssignReceiveBuffer(cmn::ICircularBuffer<uint8_t>* buffer) = 0;

    virtual void EnableTransmitter() = 0;
    virtual void DisableTranstitter() = 0;
    virtual void EnableReceiver() = 0;
    virtual void DisableReceiver() = 0;

    /// @brief Trigger transmission of all data in the transmission buffer
    virtual void TriggerTransmission() = 0;

    /// @brief Trigger transmission of specified number of bytes from the transmission buffer
    virtual void TriggerTransmission(size_t number) = 0;

    /// @brief Start receiving of unspecified number of bytes
    virtual void Receive() = 0;

    /// @brief Start receiving of specified number of bytes
    // virtual void Receive(size_t number) = 0;

    /// @return True after transmitting of specified number of bytes
    /// or if transmit buffer is empty in case of not specified number
    virtual bool IsTransmitted() = 0;

    /// @return True after receiving of specified number of bytes
    /// or if receive buffer is empty in case of not specified number
    virtual bool IsReceived() = 0;
};

}
