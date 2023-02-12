
// std
#include <cstddef>  // size_t

#pragma once


namespace cmn
{

template<typename TElement>
class IArray
{
public:
    /// @brief Get number of array elements
    virtual size_t Size() const = 0;

    /// @brief Get array item with given index
    virtual TElement& operator[](size_t index) = 0;
    virtual const TElement& operator[](size_t index) const = 0;
};

}
