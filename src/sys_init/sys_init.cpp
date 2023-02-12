
#include "flashregisters.hpp"
#include "rccregisters.hpp"
#include "sys_init.hpp"

namespace
{

/// @brief Set HSE as clock source and frequency = 72MHz
/// @return True if succeeded, False otherwise
bool SetSysClock72MHz();
void ConfigFlashFor72MHz();

}

namespace sys
{

void Init()
{
    SetSysClock72MHz();
}

}


namespace
{

bool SetSysClock72MHz()
{
    // Set HSE as a clock source
    RCC::CR::HSEON::Enable::Set();
    constexpr uint16_t HseStartupTimeout = 0x500;
    for (uint16_t timeout{0}; timeout < HseStartupTimeout; ++timeout)
    {
        if (RCC::CR::HSERDY::Locked::IsSet())
        {
            break;
        }
    }

    // Try to use HSE failed
    if (RCC::CR::HSERDY::Unlocked::IsSet())
    {
        return false;
    }

    ConfigFlashFor72MHz();

    // HCLK = SYSCLK
    RCC::CFGR::HPRE::Div1::Set();
    // PCLK2 = HCLK
    RCC::CFGR::PPRE2::Div1::Set();
    // PCLK1 = HCLK / 2 (max value = 36MHz)
    RCC::CFGR::PPRE1::Div2::Set();
    // PLL configuration: PLLCLK = HSE * 9 = 72 MHz
    RCC::CFGR::PLLSRC::HSE::Set();
    RCC::CFGR::PLLXTPRE::Div1::Set();
    RCC::CFGR::PLLMUL::Mul9::Set();

    // Enable PLL
    RCC::CR::PLLON::On::Set();
    while (RCC::CR::PLLRDY::Unlocked::IsSet())
    {
        
    } 
    
    // Select PLL as system clock source
    RCC::CFGR::SW::PLL::Set();
    while (!RCC::CFGR::SWS::PLL::IsSet())
    {

    }

    return true;
}

void ConfigFlashFor72MHz()
{
    // Enable prefetch buffer
    FLASH::ACR::PRFTBE::Enable::Set();
    // Set latency
    FLASH::ACR::LATENCY::Two::Set();
}

}
