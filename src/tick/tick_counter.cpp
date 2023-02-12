
#include "tick_counter.hpp"


namespace hal
{

TickCounter::TickCounter(ITick& tickSource)
    : m_tick{tickSource}
{
    Enable();
}

bool TickCounter::IsTimeoutPassed(cmn::time_interval_t timeout)
{
    if (m_disabled)
    {
        return false;
    }

    if (m_tick.GetTime() - m_startTime >= timeout)
    {
        Reset();
        return true;
    }
    else
    {
        return false;
    }
}

void TickCounter::Delay(cmn::time_interval_t delay)
{
    while (!IsTimeoutPassed(delay))
    {
    }
}

void TickCounter::Disable()
{
    m_disabled = true;
}

void TickCounter::Enable()
{
    m_disabled = false;
    Reset();
}

void TickCounter::Reset()
{
    m_startTime = m_tick.GetTime();
}

}
