
// user
#include "time_interval.hpp"

// std
#include <cstdint>

#pragma once


namespace hal
{

class ITick
{
public:
    /// @brief Get number of microseconds passed by now
    virtual cmn::time_interval_t GetTime() = 0;
};

}
