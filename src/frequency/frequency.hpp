
// user
#include "time_interval.hpp"

// std
#include <cstdint>

#pragma once


namespace cmn
{

/// @brief Stores frequency in Hz
enum class freq_t : uint32_t;

/// @brief Convert frequency to period
/// @param frequency frequency in Hz
/// @return period value in us
time_interval_t convertToPeriod(freq_t frequency);

/// @brief Convert period to frequency
/// @param period period in microseconds
/// @return frequency value in Hz
freq_t convertToFrequency(time_interval_t period);

}

/// @brief Build literal constant of freq_t type
/// @param frequency in Hz
/// @return freq_t value
constexpr cmn::freq_t operator""_Hz(unsigned long long frequency)
{
    return static_cast<cmn::freq_t>(frequency);
}

/// @brief Build literal constant of freq_t type
/// @param frequency in kHz
/// @return freq_t value
constexpr cmn::freq_t operator""_kHz(unsigned long long frequency)
{
    return static_cast<cmn::freq_t>(frequency * 1000);
}

/// @brief Build literal constant of freq_t type
/// @param frequency in MHz
/// @return freq_t value
constexpr cmn::freq_t operator""_MHz(unsigned long long frequency)
{
    return static_cast<cmn::freq_t>(frequency * 1'000'000);
}

/// @brief Mostly for assertion != 0
bool operator!=(cmn::freq_t frequency, uint32_t value);

/// @brief Mostly for assertion < 1'000'000
bool operator<(cmn::freq_t frequency, uint32_t value);

/// @brief Get frequency ratio
uint32_t operator/(cmn::freq_t divident, cmn::freq_t divisor);

/// @brief Multiply frequency
cmn::freq_t operator*(cmn::freq_t multiplicant, uint32_t multiplier);
