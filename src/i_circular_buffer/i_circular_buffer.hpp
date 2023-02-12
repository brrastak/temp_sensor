
// user
#include "i_array.hpp"

// std
#include <cstddef>  // size_t

#pragma once


namespace cmn
{

template <typename TElement>
class ICircularBuffer
{
public:
    /// @brief Put element to the buffer
    /// @return True in case of success
    virtual bool Put(const TElement value) = 0;

    /// @brief Get element from the buffer
    virtual TElement Get() = 0;

    /// @brief Put a few elements of Array to the buffer
    /// @param data array with new values
    /// @param number number of element to put to the buffer
    /// @return number of elements actually put to the buffer
    virtual size_t Put(const cmn::IArray<TElement>& data, size_t number) = 0;

    /// @brief Get a few elements from the buffer and store it to the Array
    /// @param data Array to store data
    /// @param number number of element to get from the buffer
    /// @return number of elements actually got from the buffer
    virtual size_t Get(cmn::IArray<TElement>& data, size_t number) = 0;

    /// @brief Erase all data in the buffer
    virtual void Clear() = 0;

    /// @brief Check if buffer is empty
    /// @return True if buffer is empty
    virtual bool IsEmpty() const = 0;

    /// @brief Check if buffer is full
    /// @return True if buffer is full
    virtual bool IsFull() const = 0;

    /// @brief Get the max number of elements that can be stored in the buffer
    virtual size_t GetCapacity() const = 0;

    /// @brief Get the number of elements that are currently stored in the buffer
    virtual size_t GetSize() const = 0;

    /// @brief Get the number of free space in buffer
    virtual size_t GetFree() const = 0;
};

}
