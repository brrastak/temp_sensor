
#pragma once


namespace hal
{

/// @brief Interface for any hardware peripheral which should handle interrupts
class IInterruptHandler
{
public:
    /// @brief Handler of hardware interrupt which is subscribed to
    virtual void HandleInterrupt() = 0;
};

}
