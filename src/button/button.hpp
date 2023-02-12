
// user
#include "i_gpio.hpp"
#include "time_interval.hpp"
// std
#include <cstdint>

#pragma once


namespace cmn
{

enum class BtnType
{
    active_low,
    active_high
};

class Button
{
public:
    Button(hal::IGpio& gpio, BtnType btnType, cmn::time_interval_t debounceInterval = 20_ms)
        : m_gpio{gpio}
        , m_btnType{btnType}
        , m_debounceInterval{debounceInterval}
        , m_debounceCounter{1_ms}
        , m_pressDuration{0_ms}
        , m_isPressed{false}
        , m_wasPressed{false}
        , m_wasUnpressed{false}
    {} 

    // should be called every 1ms
    void Proceed();
    
    bool IsPressed()
    {
        return m_isPressed;
    }
    bool WasPressed()
    {
        return returnAndReset(m_wasPressed);
    }
    bool WasUnpressed()
    {
        return returnAndReset(m_wasUnpressed);
    }
    cmn::time_interval_t GetPressDuration()
    {
        return m_pressDuration;
    }

private:
    bool returnAndReset(bool& flag)
    {
        if (flag)
        {
            flag = false;
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isActive()
    {
        bool activeState;

        switch (m_btnType)
        {
        case BtnType::active_high:
            activeState = true;
            break;
        case BtnType::active_low:
            activeState = false;
            break;
        }
        
        return (m_gpio.Get() == activeState);   
    }

    hal::IGpio& m_gpio;
    const BtnType m_btnType;

    const cmn::time_interval_t m_debounceInterval;
    cmn::time_interval_t m_debounceCounter;
    cmn::time_interval_t m_pressDuration;
    
    bool m_isPressed;
    bool m_wasPressed;
    bool m_wasUnpressed;
};


}
