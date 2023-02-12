
// user
#include "cmn_assert.hpp"
#include "timer_tick.hpp"

// registers
#include "rccregisters.hpp"
#include "tim4registers.hpp"


namespace hal
{

TimerTick::TimerTick(cmn::freq_t desiredFrequency)
    : m_tickValue{static_cast<uint64_t>(cmn::convertToPeriod(desiredFrequency))}
{
    init(hal::GetTim234Freq() / desiredFrequency);
}

TimerTick::TimerTick(cmn::time_interval_t desiredPeriod)
    : m_tickValue{static_cast<uint64_t>(desiredPeriod)}
{
    init(hal::GetTim234Freq() / cmn::convertToFrequency(desiredPeriod));
}

cmn::time_interval_t TimerTick::GetTime()
{
    return static_cast<cmn::time_interval_t>(m_tickValue * TIM4::CNT::Get());
}

void TimerTick::init(uint32_t prescalerValue)
{
    constexpr auto max_reload_value = 0xFFFF;   // 16 bit

    RCC::APB1ENR::TIM4EN::EnableTim4Clock::Set();
    // N times division corresponds to prescaler value N-1
    TIM4::PSC::Set(prescalerValue - 1);
    TIM4::ARR::Set(max_reload_value);
    TIM4::CNT::Set(0);

    TIM4::CR1::CEN::EnableCounting::Set();
}

}
