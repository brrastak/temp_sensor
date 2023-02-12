
// user
#include "clock.hpp"
#include "frequency.hpp"


namespace hal
{

cmn::freq_t GetSysClkFreq()
{
    return 72_MHz;
}

cmn::freq_t GetApb1Freq()
{
    return 36_MHz;
}

cmn::freq_t GetApb2Freq()
{
    return 72_MHz;
}

cmn::freq_t GetTim234Freq()
{
    return GetApb1Freq() * 2;
}

}
