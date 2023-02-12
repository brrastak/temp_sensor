
// user
#include "i_tick.hpp"
#include "time_interval.hpp"

#pragma once

namespace hal
{

/// @brief Gets current time from a tick source and compares it to the specified time interval
class TickCounter
{
public:
    /// @brief Constructor
    /// @param tickSource source of ticks to count
    TickCounter(ITick& tickSource);

    /// @brief Check if specified timeout has passed; in that case reset counting
    /// @param timeout in microseconds
    /// @return True if timeout passed; False otherwise
    bool IsTimeoutPassed(cmn::time_interval_t timeout);

    /// @brief Wait for specified delay blocking
    /// @param delay in microseconds
    void Delay(cmn::time_interval_t delay);

    /// @brief Checking for timeout passed always returns False
    void Disable();

    /// @brief Reset counter and start counting
    void Enable();

    /// @brief Start counting ticks from the current tick number
    void Reset();

private:
    TickCounter(const TickCounter&) = delete;

    /// @brief Tick source
    ITick& m_tick;
    /// @brief Time from which counting started
    cmn::time_interval_t m_startTime;
    /// @brief Is inactiv and always returns False
    bool m_disabled{false};
};

}
