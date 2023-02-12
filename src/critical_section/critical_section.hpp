#define DO_TEST
#ifdef DO_TEST
    #include "interrupt_control_dummy.hpp"
#else
    #include "interrupt_control_arm.hpp"
#endif

#pragma once


namespace hal
{

/// @brief Create critical section: disable interrupts after entering
/// and restore interrupts state after exiting
class CriticalSection
{
public:
    /// @brief Constructor: enter critical section
    CriticalSection()
    {
        enterCriticalSection();
    }

    /// @brief Destructor: exit critical section
    ~CriticalSection()
    {
        exitCriticalSection();
    }

private:

    /// @brief Save current interrupt state and disable interrupts
    void enterCriticalSection()
    {
        m_wasEnabled = areIrqEnabled();
        disableIrq();
    }

    /// @brief Restore interrupt state
    void exitCriticalSection()
    {
        if (m_wasEnabled)
        {
            enableIrq();
        }
    }

    /// @brief Disable copying 
    CriticalSection(const CriticalSection&) = delete;
    CriticalSection operator=(CriticalSection&) = delete;

    /// @brief Initial state of interrupts
    bool m_wasEnabled{};
};

}
