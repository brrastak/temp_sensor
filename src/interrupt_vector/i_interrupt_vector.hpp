
#include "i_interrupt_handler.hpp"

#pragma once


namespace hal
{
    
/// @brief Pointer to handler subscribe function
using SubscribeFunction = void(IInterruptHandler *handler);

}
