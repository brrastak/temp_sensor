
#pragma once


namespace cmn
{

class IOutputCharStream
{
public:
    /// @brief Output char
    virtual void PutChar(char c) = 0;
};

}
