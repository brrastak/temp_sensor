
#include "time_interval.hpp"


cmn::time_interval_t operator+(cmn::time_interval_t left, cmn::time_interval_t right)
{
    return static_cast<cmn::time_interval_t>(
        static_cast<uint64_t>(left) + static_cast<uint64_t>(right));
}

cmn::time_interval_t operator-(cmn::time_interval_t left, cmn::time_interval_t right)
{
    return static_cast<cmn::time_interval_t>(
        static_cast<uint64_t>(left) - static_cast<uint64_t>(right));
}
