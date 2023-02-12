
// #include "tick.h"

// #include "stm32f30x.h"



// static tick::Tick * ptrForInterrupt;

// // SysTick timer interrupt
// extern "C" void SysTick_Handler()
// {
//     ptrForInterrupt->interruptHandler();
// }

// namespace tick
// {
//     void Tick::init(uint32_t freq)
//     {
//         // to interchange information with interrupt
//         ptrForInterrupt = this;
        
//         SysTick->LOAD = rcc::getCpuFreqHz() / (freq - 1);
//         SysTick->VAL = 0;
//         SysTick->CTRL =	SysTick_CTRL_CLKSOURCE_Msk |
//                         SysTick_CTRL_TICKINT_Msk   |    // interrupt enable
//                         SysTick_CTRL_ENABLE_Msk;
//     }
// }

