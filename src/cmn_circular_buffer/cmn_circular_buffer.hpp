
// user
#include "cmn_assert.hpp"
#include "cmn_array.hpp"
#include "critical_section.hpp"
#include "i_array.hpp"
#include "i_circular_buffer.hpp"

// std
#include <cstddef>  // size_t

#pragma once


namespace cmn
{

template <typename TElement, size_t capacity>
class CircularBuffer : public ICircularBuffer<TElement>
{
public:
    /// @brief Constructor
    CircularBuffer();

    /// @brief Put element to the buffer
    /// @return True in case of success
    bool Put(const TElement value) override;

    /// @brief Get element from the buffer
    TElement Get() override;

    /// @brief Put a few elements of Array to the buffer
    /// @param data array with new values
    /// @param number number of element to put to the buffer
    /// @return number of elements actually put to the buffer
    size_t Put(const cmn::IArray<TElement>& data, size_t number) override;

    /// @brief Get a few elements from the buffer and store it to the Array
    /// @param data Array to store data
    /// @param number number of element to get from the buffer
    /// @return number of elements actually got from the buffer
    size_t Get(cmn::IArray<TElement>& data, size_t number) override;

    /// @brief Erase all data in the buffer
    void Clear() override;

    /// @brief Check if buffer is empty
    /// @return True if buffer is empty
    bool IsEmpty() const override;

    /// @brief Check if buffer is full
    /// @return True if buffer is full
    bool IsFull() const override;

    /// @brief Get the max number of elements that can be stored in the buffer
    size_t GetCapacity() const override;

    /// @brief Get the number of elements that are currently stored in the buffer
    size_t GetSize() const override;

    /// @brief Get the number of free space in buffer
    size_t GetFree() const override;

    /// @brief Compare all the elements with the elements of an other buffer
    /// with the same element type and capacity;
    /// mostly for testing purpose
    bool operator==(const CircularBuffer& buf) const;
    bool operator!=(CircularBuffer& buf);

private:
    /// @brief Increase some index (tail or head) cyclic within the given boundaries
    void incIndex(size_t& index) const;

    /// @brief Get all the buffer data without erasing it (for compare operators)
    cmn::Array<TElement, capacity> getData() const;

    /// @brief CircularBuffer head index
    size_t m_head;
    /// @brief CircularBuffer tail index
    size_t m_tail;
    /// @brief Number of stored elements
    size_t m_size;
    /// @brief Array to store data
    cmn::Array<TElement, capacity> m_buf{};
};

}


namespace cmn
{

template <typename TElement, size_t capacity>
CircularBuffer<TElement, capacity>::CircularBuffer() : m_head{0}, m_tail{0}, m_size{0}
{
    static_assert(capacity > 0);
}

template <typename TElement, size_t capacity>
bool CircularBuffer<TElement, capacity>::Put(const TElement value)
{
    // to exchange data between interrupt handler and main program
    hal::CriticalSection critical;

    if (IsFull())
    {
        return false;
    }

    m_buf[m_head] = value;
    incIndex(m_head);
    ++m_size;

    return true;
}

template <typename TElement, size_t capacity>
TElement CircularBuffer<TElement, capacity>::Get()
{
    // to exchange data between interrupt handler and main program
    hal::CriticalSection critical;

    ASSERT(! IsEmpty());

    TElement value = m_buf[m_tail];
    incIndex(m_tail);
    --m_size;

    return value;
}

template <typename TElement, size_t capacity>
size_t CircularBuffer<TElement, capacity>::Put(const cmn::IArray<TElement>& data, size_t number)
{
    // to exchange data between interrupt handler and main program
    hal::CriticalSection critical;

    size_t indexCounter{};

    for (indexCounter = 0; indexCounter < number; ++indexCounter)
    {
        Put(data[indexCounter]);
        if (IsFull())
        {
            break;
        }
    }

    return indexCounter;
}

template <typename TElement, size_t capacity>
size_t CircularBuffer<TElement, capacity>::Get(cmn::IArray<TElement>& data, size_t number)
{
    // to exchange data between interrupt handler and main program
    hal::CriticalSection critical;

    size_t indexCounter{};

    for (indexCounter = 0; indexCounter < number; ++indexCounter)
    {
        if (IsEmpty())
        {
            break;
        }
        data[indexCounter] = Get();
    }

    return indexCounter;
}

template <typename TElement, size_t capacity>
void CircularBuffer<TElement, capacity>::Clear()
{
    m_size = 0;
    m_head = 0;
    m_tail = 0;
}

template <typename TElement, size_t capacity>
bool CircularBuffer<TElement, capacity>::IsEmpty() const
{
    return (GetSize() == 0);
}

template <typename TElement, size_t capacity>
bool CircularBuffer<TElement, capacity>::IsFull() const
{
    return (GetSize() == GetCapacity());
}

template <typename TElement, size_t capacity>
size_t CircularBuffer<TElement, capacity>::GetCapacity() const
{
    return capacity;
}

template <typename TElement, size_t capacity>
size_t CircularBuffer<TElement, capacity>::GetSize() const
{
    return m_size;
}

template <typename TElement, size_t capacity>
size_t CircularBuffer<TElement, capacity>::GetFree() const
{
    return (GetCapacity() - GetSize());
}

template <typename TElement, size_t capacity>
bool CircularBuffer<TElement, capacity>::operator==(const CircularBuffer& buf) const
{
    if(this->GetSize() != buf.GetSize())
    {
        return false;
    }

    cmn::Array<TElement, capacity> arr1{};
    cmn::Array<TElement, capacity> arr2{};

    arr1 = this->getData();
    arr2 = buf.getData();

    return (arr1 == arr2);
}

template <typename TElement, size_t capacity>
bool CircularBuffer<TElement, capacity>::operator!=(CircularBuffer& buf)
{
    return !((*this) == buf);
}

// private

template <typename TElement, size_t capacity>
void CircularBuffer<TElement, capacity>::incIndex(size_t& index) const
{
    ++index;
    index %= capacity;
}

template <typename TElement, size_t capacity>
cmn::Array<TElement, capacity> CircularBuffer<TElement, capacity>::getData() const
{
    cmn::Array<TElement, capacity> res;

    for(size_t circularCounter = m_tail, indexCounter = 0
        ; indexCounter < m_size; incIndex(circularCounter), ++indexCounter)
    {
        res[indexCounter] = m_buf[circularCounter];
    }

    return res;
}

}
