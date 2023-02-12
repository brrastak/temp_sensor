
// user
#include "interrupt_vector.hpp"
#include "startup.hpp"

// std
#include <cstdint>

namespace
{

// interrupt vector pointer
using vector_t = void(void);
using vectorptr_t = vector_t*;

}

// start stack address
extern volatile uintptr_t _stacktop;

namespace
{

using hal::InterruptVector;
using hal::IRQList;

// vector table in specific flash section
//#pragma location = ".isr_vector"
//#pragma LOCATION(".isr_vector")
__attribute__((section(".isr_vector"), used)) const volatile vectorptr_t vectorTable[] =
{
    reinterpret_cast<vectorptr_t>(&_stacktop),  // stack pointer
    sys::startup,                               // entry point
    
    InterruptVector<IRQList::NMI>::Handle,
    InterruptVector<IRQList::HardFault>::Handle,
    InterruptVector<IRQList::MemManage>::Handle,
    InterruptVector<IRQList::BusFault>::Handle,
    InterruptVector<IRQList::UsageFault>::Handle,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    InterruptVector<IRQList::SVC>::Handle,
    InterruptVector<IRQList::DebugMon>::Handle,
    nullptr,
    InterruptVector<IRQList::PendSV>::Handle,
    InterruptVector<IRQList::SysTick>::Handle,

    InterruptVector<IRQList::WWDG>::Handle,
    InterruptVector<IRQList::PVD>::Handle,
    InterruptVector<IRQList::TAMPER>::Handle,
    InterruptVector<IRQList::RTC>::Handle,
    InterruptVector<IRQList::FLASH>::Handle,
    InterruptVector<IRQList::RCC>::Handle,
    InterruptVector<IRQList::EXTI0>::Handle,
    InterruptVector<IRQList::EXTI1>::Handle,
    InterruptVector<IRQList::EXTI2>::Handle,
    InterruptVector<IRQList::EXTI3>::Handle,
    InterruptVector<IRQList::EXTI4>::Handle,
    InterruptVector<IRQList::DMA1_Channel1>::Handle,
    InterruptVector<IRQList::DMA1_Channel2>::Handle,
    InterruptVector<IRQList::DMA1_Channel3>::Handle,
    InterruptVector<IRQList::DMA1_Channel4>::Handle,
    InterruptVector<IRQList::DMA1_Channel5>::Handle,
    InterruptVector<IRQList::DMA1_Channel6>::Handle,
    InterruptVector<IRQList::DMA1_Channel7>::Handle,
    InterruptVector<IRQList::ADC1_2>::Handle,
    InterruptVector<IRQList::USB_HP_CAN1_TX>::Handle,
    InterruptVector<IRQList::USB_LP_CAN1_RX0>::Handle,
    InterruptVector<IRQList::CAN1_RX1>::Handle,
    InterruptVector<IRQList::CAN1_SCE>::Handle,
    InterruptVector<IRQList::EXTI9_5>::Handle,
    InterruptVector<IRQList::TIM1_BRK>::Handle,
    InterruptVector<IRQList::TIM1_UP>::Handle,
    InterruptVector<IRQList::TIM1_TRG_COM>::Handle,
    InterruptVector<IRQList::TIM1_CC>::Handle,
    InterruptVector<IRQList::TIM2>::Handle,
    InterruptVector<IRQList::TIM3>::Handle,
    InterruptVector<IRQList::TIM4>::Handle,
    InterruptVector<IRQList::I2C1_EV>::Handle,
    InterruptVector<IRQList::I2C1_ER>::Handle,
    InterruptVector<IRQList::I2C2_EV>::Handle,
    InterruptVector<IRQList::I2C2_ER>::Handle,
    InterruptVector<IRQList::SPI1>::Handle,
    InterruptVector<IRQList::SPI2>::Handle,
    InterruptVector<IRQList::USART1>::Handle,
    InterruptVector<IRQList::USART2>::Handle,
    InterruptVector<IRQList::USART3>::Handle,
    InterruptVector<IRQList::EXTI15_10>::Handle,
    InterruptVector<IRQList::RTC_Alarm>::Handle,
    InterruptVector<IRQList::USBWakeUp>::Handle,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    InterruptVector<IRQList::BootRAM>::Handle,
};

}
