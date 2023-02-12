
#include "button.hpp"


namespace cmn
{

void Button::Proceed()
{
    bool prevState = m_isPressed;
    
    if (isActive())
    {
        m_debounceCounter = m_debounceCounter + 1_ms;
    }
    else
    {
        m_debounceCounter = m_debounceCounter - 1_ms;
    }

    if (m_debounceCounter >= m_debounceInterval)
    {
        m_debounceCounter = m_debounceInterval;
        m_isPressed = true;
        m_pressDuration = m_pressDuration + 1_ms;
    }
    if (m_debounceCounter <= 1_ms)
    {
        m_debounceCounter = 1_ms;
        m_isPressed = false;
    }
    
    if ( (m_isPressed == true) && (prevState == false) )
    {
        m_wasPressed = true;
        m_pressDuration = 0_ms;
    }
    if ( (m_isPressed == false) && (prevState == true) )
    {
        m_wasUnpressed = true;
    }
    
}

}

