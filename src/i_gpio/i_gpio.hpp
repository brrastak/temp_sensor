
#pragma once


namespace hal
{

class IGpio
{
public:
    virtual void Set() = 0;
    virtual void Reset() = 0;
    virtual void Toggle() = 0;
    virtual void Write(bool newState) = 0;
    virtual bool Get() = 0;
};

}

