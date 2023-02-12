
// user
#include "clock.hpp"
#include "frequency.hpp"
#include "i_interrupt_handler.hpp"
#include "i_interrupt_vector.hpp"
#include "i_tick.hpp"
#include "time_interval.hpp"

#pragma once


namespace hal
{

/// Count ticks using ARM core system timer (SystemTick)
class SystemTick : public ITick, public IInterruptHandler
{
public:
    /// @brief Constructor
    /// @param desiredFrequency frequency in Hz to count ticks
    /// @param subscribe function to subscribe to interrupt vector
    SystemTick(cmn::freq_t desiredFrequency, SubscribeFunction subscribe);

    /// @brief Constructor
    /// @param desiredPeriod period in us to count ticks
    /// @param subscribe function to subscribe to interrupt vector
    SystemTick(cmn::time_interval_t desiredPeriod, SubscribeFunction subscribe);

    /// @brief Get number of microseconds passed by now
    cmn::time_interval_t GetTime() override;

    /// @brief Increase tick counter value when interrupt occures
    void HandleInterrupt() override;

private:
    /// @brief Common intermediate constructor to init members
    /// @param desiredPeriod period in us to count ticks
    SystemTick(cmn::time_interval_t desiredPeriod);

    /// @brief Forbidden copy constructors
    SystemTick(const hal::SystemTick&) = delete;

    /// @brief Init hardware timer
    /// @param prescalerValue clock frequency / desired frequency
    void init(uint32_t prescalerValue);

    /// @brief Subscribe to interrupt vector as handler
    /// @param subscribe pointer to subscribe function
    void subscribeToInterrupt(SubscribeFunction subscribe);

    /// @brief Passed microseconds counter
    cmn::time_interval_t m_timeCounter;

    /// @brief Tick value in microseconds
    cmn::time_interval_t m_tickValue;
};

}
