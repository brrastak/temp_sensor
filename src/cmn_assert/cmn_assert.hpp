
#include <cassert>

#pragma once


#ifdef DO_TEST

#define ASSERT(condition)   assert(condition)


#else

// #include "interrupt_stm32.hpp"

namespace cmn
{

inline void Assert(bool condition)
{
    if (condition)
    {
        return;
    }

    // disableIrq();

    while (true)
    {

    }
}

}

#define ASSERT(condition)   cmn::Assert(condition)

#endif


