
// user
#include "cmn_array.hpp"

// std
#include <cstdint>
#include <cstddef>      // size_t
#include <limits>
#include <type_traits>  // is_same

#pragma once


namespace cmn
{

using std::numeric_limits;


template<typename TCrcType
        , TCrcType polynom
        , TCrcType initValue
        , size_t length
        , bool refInOut = false>
class Crc
{
public:
    using DataArray = cmn::Array<uint8_t, length>;

    static TCrcType Calculate(DataArray& data)
    {
        static_assert(std::is_same<TCrcType, uint8_t>::value
                    || std::is_same<TCrcType, uint16_t>::value);
        static_assert(length > 0);

        static constexpr auto shift_value{numeric_limits<TCrcType>::digits - 8};
        
        TCrcType res{initValue};

        for (size_t i{0}; i < length; ++i)
        {
            res ^= static_cast<TCrcType>(refInOut ? reverse(data[i]) : data[i]) << shift_value;
            for (size_t j{0}; j < numeric_limits<TCrcType>::digits; ++j)
            {
                if ((res & high_bit_mask) != 0)
                {
                    res = (res << 1) ^ polynom;
                }
                else
                {
                    res <<= 1;
                }
            }
        }

        return (refInOut ? reverse(res) : res);
    }

private:
    static constexpr TCrcType high_bit_mask{1 << (numeric_limits<TCrcType>::digits - 1)};

    static TCrcType reverse(TCrcType value)
    {
        TCrcType res{0};

        for (size_t bitIndex{0}; bitIndex < numeric_limits<TCrcType>::digits; ++bitIndex)
        {
            if ((value & high_bit_mask) != 0)
            {
                res |= (1 << bitIndex);
            }
            value <<= 1;
        }

        return res;
    }
};


}
