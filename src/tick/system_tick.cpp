
// user
#include "cmn_assert.hpp"
#include "system_tick.hpp"

// ARM Cortex-M3 core
#include "systickregisters.hpp"


namespace hal
{

SystemTick::SystemTick(cmn::freq_t desiredFrequency, SubscribeFunction subscribe)
    : SystemTick{convertToPeriod(desiredFrequency)} 
{
    // The interrupt is enabled inside of init function hense first subscribe
    subscribeToInterrupt(subscribe);
    init(hal::GetSysClkFreq() / desiredFrequency);
}

SystemTick::SystemTick(cmn::time_interval_t desiredPeriod, SubscribeFunction subscribe)
    : SystemTick{desiredPeriod}
{
    subscribeToInterrupt(subscribe);
    init(hal::GetSysClkFreq() / cmn::convertToFrequency(desiredPeriod));
}

SystemTick::SystemTick(cmn::time_interval_t desiredPeriod)
    : m_timeCounter{0}, m_tickValue{desiredPeriod}
{
}

cmn::time_interval_t SystemTick::GetTime()
{
    return m_timeCounter;
}

void SystemTick::HandleInterrupt()
{
    m_timeCounter = m_timeCounter + m_tickValue;
}

void SystemTick::init(uint32_t prescalerValue)
{
    // Last counter value == 0 consequently N steps correspond to reload value N-1
    SysTick::RVR::RELOAD::Set(prescalerValue - 1);
    SysTick::CVR::CURRENT::Set(0);
    
    SysTick::CSR::CLKSOURCE::ProcessorClock::Set();
    SysTick::CSR::TICKINT::EnableInterrupt::Set();
    SysTick::CSR::ENABLE::Enable::Set();
}

void SystemTick::subscribeToInterrupt(SubscribeFunction subscribe)
{
    ASSERT(subscribe != nullptr);
    subscribe(this);
}

}
