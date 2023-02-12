
// user
#include "cmn_assert.hpp"
#include "i_array.hpp"

// std
#include <cstddef>  // size_t
#include <initializer_list>

#pragma once


namespace cmn
{

/// @brief Class of array with boundaries control with ASSERT()
/// @tparam TElement type of array elements
/// @tparam length number of array elements
template<typename TElement, size_t length>
class Array : public IArray<TElement>
{
public:
    /// @brief Constructor - empty array
    Array();
    /// @brief Copy constructor
    /// @param arr source array with the same element type and size
    Array(const Array& arr);
    /// @brief Constructor
    /// @param init list of elements
    Array(std::initializer_list<TElement> init);

    /// @brief Get number of array elements
    size_t Size() const override;

    /// @brief Get array item with given index
    TElement& operator[](size_t index) override;
    const TElement& operator[](size_t index) const override;

    /// @brief Compare all the elements with the elements of an other array
    /// with the same element type and size;
    /// mostly for testing purpose
    bool operator==(const Array& arr) const;
    bool operator!=(const Array& arr) const;

private:
    /// @brief Array base
    TElement m_array[length];
};

}

namespace cmn
{
    template<typename TElement, size_t length>
    Array<TElement, length>::Array() : m_array{static_cast<TElement>(0)}
    {
        static_assert(length > 0);
    }

    template<typename TElement, size_t length>
    Array<TElement, length>::Array(const Array& arr)
    {
        for (size_t i = 0; i < length; i++)
        {
            m_array[i] = arr[i];
        }
    }

    template<typename TElement, size_t length>
    Array<TElement, length>::Array(std::initializer_list<TElement> init)
    {
        ASSERT(length == init.size());

        for (size_t i = 0; i < init.size(); ++i)
        {
            m_array[i] = *(init.begin() + i);
        }
    }

    template<typename TElement, size_t length>
    size_t Array<TElement, length>::Size() const
    {
        return length;
    }

    template<typename TElement, size_t length>
    TElement& Array<TElement, length>::operator[](size_t index)
    {
        ASSERT(index < length);

        return m_array[index];
    }

    template<typename TElement, size_t length>
    const TElement& Array<TElement, length>::operator[](size_t index) const
    {
        ASSERT(index < length);

        return m_array[index];
    }

    template<typename TElement, size_t length>
    bool Array<TElement, length>::operator==(const Array& arr) const
    {
        bool res{true};

        for (size_t i = 0; i < length; i++)
        {
            if (m_array[i] != arr[i])
            {
                res = false;
                break;
            }
        }

        return res;
    }

    template<typename TElement, size_t length>
    bool Array<TElement, length>::operator!=(const Array& arr) const
    {
        return !(*this == arr);
    }
}
