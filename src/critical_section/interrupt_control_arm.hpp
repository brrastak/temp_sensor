
#include <cstdbool>
#include <cstdint>

#pragma once


namespace
{

/// @brief Check if interrupts are enabled by PRIMASK value
/// @return True if inerrupts are enabled
inline bool areIrqEnabled()
{
    uint32_t primaskValue{};

    __asm volatile ("MRS %0, primask" : "=r" (primaskValue));

    return (primaskValue != 0);
}

/// @brief Enable interrupts
inline void enableIrq()
{
    __asm volatile ("cpsie i" : : : "memory");
}

/// @brief Disable interrupts
inline void disableIrq()
{
    __asm volatile ("cpsid i" : : : "memory");
}

}
