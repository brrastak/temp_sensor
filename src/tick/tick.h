
#pragma once

#include <cstdint>

#include "rcc/rcc.h"


namespace tick
{
    
    class Tick
    {
    public:
        Tick(uint32_t freq):
            cnt(0)
        {
            init(freq);
        }
        
        void init(uint32_t freq);
        
        uint32_t millis()
        {
            return cnt;
        }
        void interruptHandler()
        {
            cnt++;
        }
            
    private:
        volatile uint32_t cnt;
    };
    
    class TimeCounter
    {
    public:
        TimeCounter(Tick & tick):
            tickSource(tick)
        {
            reset();
        }
        
        void reset()
        {
            cnt = tickSource.millis();
        }
        bool isTimeoutPassed(uint32_t timeoutMs)
        {
            if (tickSource.millis() - cnt > timeoutMs)
            {
                reset();
                return true;
            }
            else
            {
                return false;
            }
        }
        
    private:
        Tick & tickSource;
        uint32_t cnt;
    };
}

