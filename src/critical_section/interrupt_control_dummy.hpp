
#include <cstdbool>

#pragma once


/// @brief Dummy interrupt control functions
/// to make possible test compilation under pc

namespace
{

inline bool areIrqEnabled()
{
    return false;
}

inline void enableIrq()
{
}

inline void disableIrq()
{
}

}
