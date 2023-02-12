#include <cstdint>

#pragma once


namespace
{

template<typename TPort, uint8_t pin>
struct PinBit
{

};

template<typename TPort>
struct PinBit<TPort, 0>
{
    using MODE  = typename TPort::CRL::MODE0;
    using CNF   = typename TPort::CRL::CNF0;
    using BSR   = typename TPort::BSRR::BS0;
    using BRR   = typename TPort::BSRR::BR0;
    using IDR   = typename TPort::IDR::IDR0;
};

template<typename TPort>
struct PinBit<TPort, 1>
{
    using MODE  = typename TPort::CRL::MODE1;
    using CNF   = typename TPort::CRL::CNF1;
    using BSR   = typename TPort::BSRR::BS1;
    using BRR   = typename TPort::BSRR::BR1;
    using IDR   = typename TPort::IDR::IDR1;
};

template<typename TPort>
struct PinBit<TPort, 2>
{
    using MODE  = typename TPort::CRL::MODE2;
    using CNF   = typename TPort::CRL::CNF2;
    using BSR   = typename TPort::BSRR::BS2;
    using BRR   = typename TPort::BSRR::BR2;
    using IDR   = typename TPort::IDR::IDR2;
};

template<typename TPort>
struct PinBit<TPort, 3>
{
    using MODE  = typename TPort::CRL::MODE3;
    using CNF   = typename TPort::CRL::CNF3;
    using BSR   = typename TPort::BSRR::BS3;
    using BRR   = typename TPort::BSRR::BR3;
    using IDR   = typename TPort::IDR::IDR3;
};

template<typename TPort>
struct PinBit<TPort, 4>
{
    using MODE  = typename TPort::CRL::MODE4;
    using CNF   = typename TPort::CRL::CNF4;
    using BSR   = typename TPort::BSRR::BS4;
    using BRR   = typename TPort::BSRR::BR4;
    using IDR   = typename TPort::IDR::IDR4;
};

template<typename TPort>
struct PinBit<TPort, 5>
{
    using MODE  = typename TPort::CRL::MODE5;
    using CNF   = typename TPort::CRL::CNF5;
    using BSR   = typename TPort::BSRR::BS5;
    using BRR   = typename TPort::BSRR::BR5;
    using IDR   = typename TPort::IDR::IDR5;
};

template<typename TPort>
struct PinBit<TPort, 6>
{
    using MODE  = typename TPort::CRL::MODE6;
    using CNF   = typename TPort::CRL::CNF6;
    using BSR   = typename TPort::BSRR::BS6;
    using BRR   = typename TPort::BSRR::BR6;
    using IDR   = typename TPort::IDR::IDR6;
};

template<typename TPort>
struct PinBit<TPort, 7>
{
    using MODE  = typename TPort::CRL::MODE7;
    using CNF   = typename TPort::CRL::CNF7;
    using BSR   = typename TPort::BSRR::BS7;
    using BRR   = typename TPort::BSRR::BR7;
    using IDR   = typename TPort::IDR::IDR7;
};

template<typename TPort>
struct PinBit<TPort, 8>
{
    using MODE  = typename TPort::CRH::MODE8;
    using CNF   = typename TPort::CRH::CNF8;
    using BSR   = typename TPort::BSRR::BS8;
    using BRR   = typename TPort::BSRR::BR8;
    using IDR   = typename TPort::IDR::IDR8;
};

template<typename TPort>
struct PinBit<TPort, 9>
{
    using MODE  = typename TPort::CRH::MODE9;
    using CNF   = typename TPort::CRH::CNF9;
    using BSR   = typename TPort::BSRR::BS9;
    using BRR   = typename TPort::BSRR::BR9;
    using IDR   = typename TPort::IDR::IDR9;
};

template<typename TPort>
struct PinBit<TPort, 10>
{
    using MODE  = typename TPort::CRH::MODE10;
    using CNF   = typename TPort::CRH::CNF10;
    using BSR   = typename TPort::BSRR::BS10;
    using BRR   = typename TPort::BSRR::BR10;
    using IDR   = typename TPort::IDR::IDR10;
};

template<typename TPort>
struct PinBit<TPort, 11>
{
    using MODE  = typename TPort::CRH::MODE11;
    using CNF   = typename TPort::CRH::CNF11;
    using BSR   = typename TPort::BSRR::BS11;
    using BRR   = typename TPort::BSRR::BR11;
    using IDR   = typename TPort::IDR::IDR11;
};

template<typename TPort>
struct PinBit<TPort, 12>
{
    using MODE  = typename TPort::CRH::MODE12;
    using CNF   = typename TPort::CRH::CNF12;
    using BSR   = typename TPort::BSRR::BS12;
    using BRR   = typename TPort::BSRR::BR12;
    using IDR   = typename TPort::IDR::IDR12;
};

template<typename TPort>
struct PinBit<TPort, 13>
{
    using MODE  = typename TPort::CRH::MODE13;
    using CNF   = typename TPort::CRH::CNF13;
    using BSR   = typename TPort::BSRR::BS13;
    using BRR   = typename TPort::BSRR::BR13;
    using IDR   = typename TPort::IDR::IDR13;
};

template<typename TPort>
struct PinBit<TPort, 14>
{
    using MODE  = typename TPort::CRH::MODE14;
    using CNF   = typename TPort::CRH::CNF14;
    using BSR   = typename TPort::BSRR::BS14;
    using BRR   = typename TPort::BSRR::BR14;
    using IDR   = typename TPort::IDR::IDR14;
};

template<typename TPort>
struct PinBit<TPort, 15>
{
    using MODE  = typename TPort::CRH::MODE15;
    using CNF   = typename TPort::CRH::CNF15;
    using BSR   = typename TPort::BSRR::BS15;
    using BRR   = typename TPort::BSRR::BR15;
    using IDR   = typename TPort::IDR::IDR15;
};

}
