
// user
#include "startup.hpp"
#include "sys_init.hpp"

// std
#include <algorithm>
#include <cstdint>


namespace
{

/// @brief Initialize zero-filled data
void InitBss();
/// @brief Initialize static data
void InitData();
/// @brief Call static constructors
void CallCtors();

}

extern int main();

namespace sys
{

/// @brief Entry point
void startup()
{
    InitBss();
    InitData();
    CallCtors();

    sys::Init();

    // start program execution
    main();
}

}


// static constructor pointer
using ctor_t = void(void);
using ctorptr_t = ctor_t*;

// values from linker script
// start and end address of zero-initialized RAM
extern volatile uintptr_t _sbss;
extern volatile uintptr_t _ebss;
// start and end address of static data
extern volatile uintptr_t _sdata;
extern volatile uintptr_t _edata;
// read-only data start address
extern volatile uintptr_t _srodata;
// start and end address of static constructors
extern volatile ctorptr_t __init_array_start;
extern volatile ctorptr_t __init_array_end;


namespace
{

using std::copy;
using std::fill;
using std::for_each;

void InitBss()
{
    fill(&_sbss, &_ebss, 0);
}

void InitData()
{
    size_t AmountOfData = (reinterpret_cast<size_t>(&_edata) - reinterpret_cast<size_t>(&_sdata));

    copy(&_srodata, &_srodata + AmountOfData, &_sdata);
}

void CallCtors()
{
    for_each(&__init_array_start, &__init_array_end
            , [](const ctorptr_t ctor)
                {
                    ctor();
                });
}

}

