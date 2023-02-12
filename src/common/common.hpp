
#pragma once


namespace cmn
{

template<typename TInteger>
TInteger IntDiv(TInteger divident, TInteger divisor)
{
    return ((divident + (divisor >> 2)) / divisor);
}

template<typename TCrop, typename TBounds>
TCrop Crop(TCrop number, const TBounds min, const TBounds max)
{
    if (number < min)
    {
        number = min;
    }
    if (number > max)
    {
        number = max;
    }
    return number;
}

}
