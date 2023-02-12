
#include "frequency.hpp"

#pragma once


namespace hal
{

/// @brief Get system clock frequency
/// @return frequency in Hz
cmn::freq_t GetSysClkFreq();

/// @brief Get APB1 clock frequency
/// @return frequency in Hz
cmn::freq_t GetApb1Freq();

/// @brief Get APB2 clock frequency
/// @return frequency in Hz
cmn::freq_t GetApb2Freq();

/// @brief Get timers TIM2, TIM3, TIM4 clock frequency
/// @return frequency in Hz
cmn::freq_t GetTim234Freq();

}
