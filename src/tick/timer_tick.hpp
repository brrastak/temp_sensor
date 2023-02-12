
// user
#include "clock.hpp"
#include "frequency.hpp"
#include "i_tick.hpp"
#include "time_interval.hpp"


#pragma once


namespace hal
{

/// Count ticks using peripheral timer (TIM4)
/// min frequency is 1100 Hz; max ticks number is 65535
class TimerTick : public ITick
{
public:
    /// @brief Constructor
    /// @param desiredFrequency frequency in Hz to count ticks
    TimerTick(cmn::freq_t desiredFrequency);

    /// @brief Constructor
    /// @param desiredPeriod period in us to count ticks
    TimerTick(cmn::time_interval_t desiredPeriod);

    /// @brief Get number of microseconds passed by now
    cmn::time_interval_t GetTime() override;

private:
    /// @brief Forbidden copy constructors
    TimerTick(const hal::TimerTick &) = delete;

    /// @brief Init hardware timer
    /// @param prescalerValue clock frequency / desired frequency
    void init(uint32_t prescalerValue);

    uint64_t m_tickValue;
};

}
