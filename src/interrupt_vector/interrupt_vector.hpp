
// user
#include "cmn_assert.hpp"
#include "i_interrupt_handler.hpp"
#include "i_interrupt_vector.hpp"

// hardware
#include "nvicregisters.hpp"

#pragma once


namespace hal
{

enum class IRQList
{
    NMI             = -9, 
    HardFault       = -8,
    MemManage       = -7,
    BusFault        = -6,
    UsageFault      = -5,
    SVC             = -4,
    DebugMon        = -3,
    PendSV          = -2,
    SysTick         = -1,
    WWDG            = 0,
    PVD,
    TAMPER,
    RTC,
    FLASH,
    RCC,
    EXTI0,
    EXTI1,
    EXTI2,
    EXTI3,
    EXTI4,
    DMA1_Channel1,
    DMA1_Channel2,
    DMA1_Channel3,
    DMA1_Channel4,
    DMA1_Channel5,
    DMA1_Channel6,
    DMA1_Channel7,
    ADC1_2,
    USB_HP_CAN1_TX,
    USB_LP_CAN1_RX0,
    CAN1_RX1,
    CAN1_SCE,
    EXTI9_5,
    TIM1_BRK,
    TIM1_UP,
    TIM1_TRG_COM,
    TIM1_CC,
    TIM2,
    TIM3,
    TIM4,
    I2C1_EV,
    I2C1_ER,
    I2C2_EV,
    I2C2_ER,
    SPI1,
    SPI2,
    USART1,
    USART2,
    USART3,
    EXTI15_10,
    RTC_Alarm,
    USBWakeUp,
    BootRAM         = 50,
    NumberOfIRQVectors
};

/// @brief Stores address of an interrupt handler and calls it when an interrupt occurs
/// @tparam IRQ - number of an interrupt vector
template<IRQList IRQ>
class InterruptVector
{
public:
    /// @brief Set address of an interrupt handler to be invoked
    /// @param handler class of hardware peripheral to proceed interrupt
    static void Subscribe(IInterruptHandler* handler);
    /// @brief Invoke interrupt handler.
    /// The function address should be placed to a vector table
    static void Handle();

private:

    static inline IInterruptHandler* volatile m_handler{nullptr};
};

}

namespace
{

/// @brief Enable interrupt in the NVIC
void EnableInterrupt(hal::IRQList irqNumber);

}



namespace hal
{

template<IRQList IRQ>
void InterruptVector<IRQ>::Subscribe(IInterruptHandler* handler)
{
    m_handler = handler;

    EnableInterrupt(IRQ);
}

template<IRQList IRQ>
void InterruptVector<IRQ>::Handle()
{
    if (m_handler != nullptr)
    {
        m_handler->HandleInterrupt();
    }
}

}

namespace
{

void EnableInterrupt(hal::IRQList irqNumber)
{
    // Cortex-M3 exceptions are not controlled by NVIC
    if (irqNumber < hal::IRQList::WWDG || irqNumber >= hal::IRQList::NumberOfIRQVectors)
    {
        return;
    }

    static constexpr uint32_t number_of_bits = NVIC::ISER0::SETENA::Size;
    uint32_t bitMask = 1 << (static_cast<uint32_t>(irqNumber) % number_of_bits);

    switch (static_cast<uint32_t>(irqNumber) / number_of_bits)
    {
    case 0:
        NVIC::ISER0::SETENA::Set(bitMask);
        break;
    case 1:
        NVIC::ISER1::SETENA::Set(bitMask);
        break;

    default:
        ASSERT(false);
        break;
    }
}

}
