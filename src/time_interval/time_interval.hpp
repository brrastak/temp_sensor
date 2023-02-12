
// std
#include <cstdint>

#pragma once


namespace cmn
{

/// @brief Stores time interval in microseconds
enum class time_interval_t : uint64_t;

}


/// @brief Build literal constant of time_interval_t type
/// @param interval time interval in seconds
/// @return time interval value in microseconds
constexpr cmn::time_interval_t operator""_s(uint64_t interval)
{
    return static_cast<cmn::time_interval_t>(interval * 1'000'000);
}

/// @brief Build literal constant of time_interval_t type
/// @param interval time interval in milliseconds
/// @return time interval value in microseconds
constexpr cmn::time_interval_t operator""_ms(uint64_t interval)
{
    return static_cast<cmn::time_interval_t>(interval * 1000);
}

/// @brief Build literal constant of time_interval_t type
/// @param interval time interval in microseconds
/// @return time interval value in microseconds
constexpr cmn::time_interval_t operator""_us(uint64_t interval)
{
    return static_cast<cmn::time_interval_t>(interval);
}

/// @brief Sum two time_interval_t values
cmn::time_interval_t operator+(cmn::time_interval_t left, cmn::time_interval_t right);

/// @brief Substruct two time_interval_t values
cmn::time_interval_t operator-(cmn::time_interval_t left, cmn::time_interval_t right);
