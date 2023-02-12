
// user
#include "cmn_assert.hpp"
#include "common.hpp"
#include "frequency.hpp"


namespace cmn
{

time_interval_t convertToPeriod(freq_t frequency)
{
    ASSERT(frequency != 0);
    ASSERT(frequency < 1'000'000);

    return static_cast<time_interval_t>(
        cmn::IntDiv<uint32_t>(1'000'000, static_cast<uint32_t>(frequency)));
}

freq_t convertToFrequency(time_interval_t period)
{
    ASSERT(static_cast<uint32_t>(period) != 0);

    return static_cast<freq_t>(
        cmn::IntDiv<uint32_t>(1'000'000, static_cast<uint32_t>(period)));
}

}

bool operator!=(cmn::freq_t frequency, uint32_t value)
{
    return static_cast<uint32_t>(frequency) != value;
}

bool operator<(cmn::freq_t frequency, uint32_t value)
{
    return static_cast<uint32_t>(frequency) < value;
}

uint32_t operator/(cmn::freq_t divident, cmn::freq_t divisor)
{
    return cmn::IntDiv<uint32_t>(static_cast<uint32_t>(divident), static_cast<uint32_t>(divisor));
}

cmn::freq_t operator*(cmn::freq_t multiplicant, uint32_t multiplier)
{
    return static_cast<cmn::freq_t>(static_cast<uint32_t>(multiplicant) * multiplier);
}
