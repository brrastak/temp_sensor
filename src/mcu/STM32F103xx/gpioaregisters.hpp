/*******************************************************************************
* Filename      : gpioaregisters.hpp
*
* Details       : General purpose I/O. This header file is auto-generated for
*                 STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(GPIOAREGISTERS_HPP)
#define GPIOAREGISTERS_HPP

#include "gpioafieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOA
{
  struct GPIOACRLBase {} ;

  struct CRL : public RegisterBase<0x40010800, 32, ReadWriteMode>
  {
    using MODE0 = GPIOA_CRL_MODE0_Values<GPIOA::CRL, 0, 2, ReadWriteMode, GPIOACRLBase> ;
    using CNF0 = GPIOA_CRL_CNF0_Values<GPIOA::CRL, 2, 2, ReadWriteMode, GPIOACRLBase> ;
    using MODE1 = GPIOA_CRL_MODE1_Values<GPIOA::CRL, 4, 2, ReadWriteMode, GPIOACRLBase> ;
    using CNF1 = GPIOA_CRL_CNF1_Values<GPIOA::CRL, 6, 2, ReadWriteMode, GPIOACRLBase> ;
    using MODE2 = GPIOA_CRL_MODE2_Values<GPIOA::CRL, 8, 2, ReadWriteMode, GPIOACRLBase> ;
    using CNF2 = GPIOA_CRL_CNF2_Values<GPIOA::CRL, 10, 2, ReadWriteMode, GPIOACRLBase> ;
    using MODE3 = GPIOA_CRL_MODE3_Values<GPIOA::CRL, 12, 2, ReadWriteMode, GPIOACRLBase> ;
    using CNF3 = GPIOA_CRL_CNF3_Values<GPIOA::CRL, 14, 2, ReadWriteMode, GPIOACRLBase> ;
    using MODE4 = GPIOA_CRL_MODE4_Values<GPIOA::CRL, 16, 2, ReadWriteMode, GPIOACRLBase> ;
    using CNF4 = GPIOA_CRL_CNF4_Values<GPIOA::CRL, 18, 2, ReadWriteMode, GPIOACRLBase> ;
    using MODE5 = GPIOA_CRL_MODE5_Values<GPIOA::CRL, 20, 2, ReadWriteMode, GPIOACRLBase> ;
    using CNF5 = GPIOA_CRL_CNF5_Values<GPIOA::CRL, 22, 2, ReadWriteMode, GPIOACRLBase> ;
    using MODE6 = GPIOA_CRL_MODE6_Values<GPIOA::CRL, 24, 2, ReadWriteMode, GPIOACRLBase> ;
    using CNF6 = GPIOA_CRL_CNF6_Values<GPIOA::CRL, 26, 2, ReadWriteMode, GPIOACRLBase> ;
    using MODE7 = GPIOA_CRL_MODE7_Values<GPIOA::CRL, 28, 2, ReadWriteMode, GPIOACRLBase> ;
    using CNF7 = GPIOA_CRL_CNF7_Values<GPIOA::CRL, 30, 2, ReadWriteMode, GPIOACRLBase> ;
    using FieldValues = GPIOA_CRL_CNF7_Values<GPIOA::CRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRLPack  = Register<0x40010800, 32, ReadWriteMode, GPIOACRLBase, T...> ;

  struct GPIOACRHBase {} ;

  struct CRH : public RegisterBase<0x40010804, 32, ReadWriteMode>
  {
    using MODE8 = GPIOA_CRH_MODE8_Values<GPIOA::CRH, 0, 2, ReadWriteMode, GPIOACRHBase> ;
    using CNF8 = GPIOA_CRH_CNF8_Values<GPIOA::CRH, 2, 2, ReadWriteMode, GPIOACRHBase> ;
    using MODE9 = GPIOA_CRH_MODE9_Values<GPIOA::CRH, 4, 2, ReadWriteMode, GPIOACRHBase> ;
    using CNF9 = GPIOA_CRH_CNF9_Values<GPIOA::CRH, 6, 2, ReadWriteMode, GPIOACRHBase> ;
    using MODE10 = GPIOA_CRH_MODE10_Values<GPIOA::CRH, 8, 2, ReadWriteMode, GPIOACRHBase> ;
    using CNF10 = GPIOA_CRH_CNF10_Values<GPIOA::CRH, 10, 2, ReadWriteMode, GPIOACRHBase> ;
    using MODE11 = GPIOA_CRH_MODE11_Values<GPIOA::CRH, 12, 2, ReadWriteMode, GPIOACRHBase> ;
    using CNF11 = GPIOA_CRH_CNF11_Values<GPIOA::CRH, 14, 2, ReadWriteMode, GPIOACRHBase> ;
    using MODE12 = GPIOA_CRH_MODE12_Values<GPIOA::CRH, 16, 2, ReadWriteMode, GPIOACRHBase> ;
    using CNF12 = GPIOA_CRH_CNF12_Values<GPIOA::CRH, 18, 2, ReadWriteMode, GPIOACRHBase> ;
    using MODE13 = GPIOA_CRH_MODE13_Values<GPIOA::CRH, 20, 2, ReadWriteMode, GPIOACRHBase> ;
    using CNF13 = GPIOA_CRH_CNF13_Values<GPIOA::CRH, 22, 2, ReadWriteMode, GPIOACRHBase> ;
    using MODE14 = GPIOA_CRH_MODE14_Values<GPIOA::CRH, 24, 2, ReadWriteMode, GPIOACRHBase> ;
    using CNF14 = GPIOA_CRH_CNF14_Values<GPIOA::CRH, 26, 2, ReadWriteMode, GPIOACRHBase> ;
    using MODE15 = GPIOA_CRH_MODE15_Values<GPIOA::CRH, 28, 2, ReadWriteMode, GPIOACRHBase> ;
    using CNF15 = GPIOA_CRH_CNF15_Values<GPIOA::CRH, 30, 2, ReadWriteMode, GPIOACRHBase> ;
    using FieldValues = GPIOA_CRH_CNF15_Values<GPIOA::CRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRHPack  = Register<0x40010804, 32, ReadWriteMode, GPIOACRHBase, T...> ;

  struct GPIOAIDRBase {} ;

  struct IDR : public RegisterBase<0x40010808, 32, ReadMode>
  {
    using IDR0 = GPIOA_IDR_IDR0_Values<GPIOA::IDR, 0, 1, ReadMode, GPIOAIDRBase> ;
    using IDR1 = GPIOA_IDR_IDR1_Values<GPIOA::IDR, 1, 1, ReadMode, GPIOAIDRBase> ;
    using IDR2 = GPIOA_IDR_IDR2_Values<GPIOA::IDR, 2, 1, ReadMode, GPIOAIDRBase> ;
    using IDR3 = GPIOA_IDR_IDR3_Values<GPIOA::IDR, 3, 1, ReadMode, GPIOAIDRBase> ;
    using IDR4 = GPIOA_IDR_IDR4_Values<GPIOA::IDR, 4, 1, ReadMode, GPIOAIDRBase> ;
    using IDR5 = GPIOA_IDR_IDR5_Values<GPIOA::IDR, 5, 1, ReadMode, GPIOAIDRBase> ;
    using IDR6 = GPIOA_IDR_IDR6_Values<GPIOA::IDR, 6, 1, ReadMode, GPIOAIDRBase> ;
    using IDR7 = GPIOA_IDR_IDR7_Values<GPIOA::IDR, 7, 1, ReadMode, GPIOAIDRBase> ;
    using IDR8 = GPIOA_IDR_IDR8_Values<GPIOA::IDR, 8, 1, ReadMode, GPIOAIDRBase> ;
    using IDR9 = GPIOA_IDR_IDR9_Values<GPIOA::IDR, 9, 1, ReadMode, GPIOAIDRBase> ;
    using IDR10 = GPIOA_IDR_IDR10_Values<GPIOA::IDR, 10, 1, ReadMode, GPIOAIDRBase> ;
    using IDR11 = GPIOA_IDR_IDR11_Values<GPIOA::IDR, 11, 1, ReadMode, GPIOAIDRBase> ;
    using IDR12 = GPIOA_IDR_IDR12_Values<GPIOA::IDR, 12, 1, ReadMode, GPIOAIDRBase> ;
    using IDR13 = GPIOA_IDR_IDR13_Values<GPIOA::IDR, 13, 1, ReadMode, GPIOAIDRBase> ;
    using IDR14 = GPIOA_IDR_IDR14_Values<GPIOA::IDR, 14, 1, ReadMode, GPIOAIDRBase> ;
    using IDR15 = GPIOA_IDR_IDR15_Values<GPIOA::IDR, 15, 1, ReadMode, GPIOAIDRBase> ;
    using FieldValues = GPIOA_IDR_IDR15_Values<GPIOA::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40010808, 32, ReadMode, GPIOAIDRBase, T...> ;

  struct GPIOAODRBase {} ;

  struct ODR : public RegisterBase<0x4001080C, 32, ReadWriteMode>
  {
    using ODR0 = GPIOA_ODR_ODR0_Values<GPIOA::ODR, 0, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR1 = GPIOA_ODR_ODR1_Values<GPIOA::ODR, 1, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR2 = GPIOA_ODR_ODR2_Values<GPIOA::ODR, 2, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR3 = GPIOA_ODR_ODR3_Values<GPIOA::ODR, 3, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR4 = GPIOA_ODR_ODR4_Values<GPIOA::ODR, 4, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR5 = GPIOA_ODR_ODR5_Values<GPIOA::ODR, 5, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR6 = GPIOA_ODR_ODR6_Values<GPIOA::ODR, 6, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR7 = GPIOA_ODR_ODR7_Values<GPIOA::ODR, 7, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR8 = GPIOA_ODR_ODR8_Values<GPIOA::ODR, 8, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR9 = GPIOA_ODR_ODR9_Values<GPIOA::ODR, 9, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR10 = GPIOA_ODR_ODR10_Values<GPIOA::ODR, 10, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR11 = GPIOA_ODR_ODR11_Values<GPIOA::ODR, 11, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR12 = GPIOA_ODR_ODR12_Values<GPIOA::ODR, 12, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR13 = GPIOA_ODR_ODR13_Values<GPIOA::ODR, 13, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR14 = GPIOA_ODR_ODR14_Values<GPIOA::ODR, 14, 1, ReadWriteMode, GPIOAODRBase> ;
    using ODR15 = GPIOA_ODR_ODR15_Values<GPIOA::ODR, 15, 1, ReadWriteMode, GPIOAODRBase> ;
    using FieldValues = GPIOA_ODR_ODR15_Values<GPIOA::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x4001080C, 32, ReadWriteMode, GPIOAODRBase, T...> ;

  struct GPIOABSRRBase {} ;

  struct BSRR : public RegisterBase<0x40010810, 32, WriteMode>
  {
    using BS0 = GPIOA_BSRR_BS0_Values<GPIOA::BSRR, 0, 1, WriteMode, GPIOABSRRBase> ;
    using BS1 = GPIOA_BSRR_BS1_Values<GPIOA::BSRR, 1, 1, WriteMode, GPIOABSRRBase> ;
    using BS2 = GPIOA_BSRR_BS2_Values<GPIOA::BSRR, 2, 1, WriteMode, GPIOABSRRBase> ;
    using BS3 = GPIOA_BSRR_BS3_Values<GPIOA::BSRR, 3, 1, WriteMode, GPIOABSRRBase> ;
    using BS4 = GPIOA_BSRR_BS4_Values<GPIOA::BSRR, 4, 1, WriteMode, GPIOABSRRBase> ;
    using BS5 = GPIOA_BSRR_BS5_Values<GPIOA::BSRR, 5, 1, WriteMode, GPIOABSRRBase> ;
    using BS6 = GPIOA_BSRR_BS6_Values<GPIOA::BSRR, 6, 1, WriteMode, GPIOABSRRBase> ;
    using BS7 = GPIOA_BSRR_BS7_Values<GPIOA::BSRR, 7, 1, WriteMode, GPIOABSRRBase> ;
    using BS8 = GPIOA_BSRR_BS8_Values<GPIOA::BSRR, 8, 1, WriteMode, GPIOABSRRBase> ;
    using BS9 = GPIOA_BSRR_BS9_Values<GPIOA::BSRR, 9, 1, WriteMode, GPIOABSRRBase> ;
    using BS10 = GPIOA_BSRR_BS10_Values<GPIOA::BSRR, 10, 1, WriteMode, GPIOABSRRBase> ;
    using BS11 = GPIOA_BSRR_BS11_Values<GPIOA::BSRR, 11, 1, WriteMode, GPIOABSRRBase> ;
    using BS12 = GPIOA_BSRR_BS12_Values<GPIOA::BSRR, 12, 1, WriteMode, GPIOABSRRBase> ;
    using BS13 = GPIOA_BSRR_BS13_Values<GPIOA::BSRR, 13, 1, WriteMode, GPIOABSRRBase> ;
    using BS14 = GPIOA_BSRR_BS14_Values<GPIOA::BSRR, 14, 1, WriteMode, GPIOABSRRBase> ;
    using BS15 = GPIOA_BSRR_BS15_Values<GPIOA::BSRR, 15, 1, WriteMode, GPIOABSRRBase> ;
    using BR0 = GPIOA_BSRR_BR0_Values<GPIOA::BSRR, 16, 1, WriteMode, GPIOABSRRBase> ;
    using BR1 = GPIOA_BSRR_BR1_Values<GPIOA::BSRR, 17, 1, WriteMode, GPIOABSRRBase> ;
    using BR2 = GPIOA_BSRR_BR2_Values<GPIOA::BSRR, 18, 1, WriteMode, GPIOABSRRBase> ;
    using BR3 = GPIOA_BSRR_BR3_Values<GPIOA::BSRR, 19, 1, WriteMode, GPIOABSRRBase> ;
    using BR4 = GPIOA_BSRR_BR4_Values<GPIOA::BSRR, 20, 1, WriteMode, GPIOABSRRBase> ;
    using BR5 = GPIOA_BSRR_BR5_Values<GPIOA::BSRR, 21, 1, WriteMode, GPIOABSRRBase> ;
    using BR6 = GPIOA_BSRR_BR6_Values<GPIOA::BSRR, 22, 1, WriteMode, GPIOABSRRBase> ;
    using BR7 = GPIOA_BSRR_BR7_Values<GPIOA::BSRR, 23, 1, WriteMode, GPIOABSRRBase> ;
    using BR8 = GPIOA_BSRR_BR8_Values<GPIOA::BSRR, 24, 1, WriteMode, GPIOABSRRBase> ;
    using BR9 = GPIOA_BSRR_BR9_Values<GPIOA::BSRR, 25, 1, WriteMode, GPIOABSRRBase> ;
    using BR10 = GPIOA_BSRR_BR10_Values<GPIOA::BSRR, 26, 1, WriteMode, GPIOABSRRBase> ;
    using BR11 = GPIOA_BSRR_BR11_Values<GPIOA::BSRR, 27, 1, WriteMode, GPIOABSRRBase> ;
    using BR12 = GPIOA_BSRR_BR12_Values<GPIOA::BSRR, 28, 1, WriteMode, GPIOABSRRBase> ;
    using BR13 = GPIOA_BSRR_BR13_Values<GPIOA::BSRR, 29, 1, WriteMode, GPIOABSRRBase> ;
    using BR14 = GPIOA_BSRR_BR14_Values<GPIOA::BSRR, 30, 1, WriteMode, GPIOABSRRBase> ;
    using BR15 = GPIOA_BSRR_BR15_Values<GPIOA::BSRR, 31, 1, WriteMode, GPIOABSRRBase> ;
    using FieldValues = GPIOA_BSRR_BR15_Values<GPIOA::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40010810, 32, WriteMode, GPIOABSRRBase, T...> ;

  struct GPIOABRRBase {} ;

  struct BRR : public RegisterBase<0x40010814, 32, WriteMode>
  {
    using BR0 = GPIOA_BRR_BR0_Values<GPIOA::BRR, 0, 1, WriteMode, GPIOABRRBase> ;
    using BR1 = GPIOA_BRR_BR1_Values<GPIOA::BRR, 1, 1, WriteMode, GPIOABRRBase> ;
    using BR2 = GPIOA_BRR_BR2_Values<GPIOA::BRR, 2, 1, WriteMode, GPIOABRRBase> ;
    using BR3 = GPIOA_BRR_BR3_Values<GPIOA::BRR, 3, 1, WriteMode, GPIOABRRBase> ;
    using BR4 = GPIOA_BRR_BR4_Values<GPIOA::BRR, 4, 1, WriteMode, GPIOABRRBase> ;
    using BR5 = GPIOA_BRR_BR5_Values<GPIOA::BRR, 5, 1, WriteMode, GPIOABRRBase> ;
    using BR6 = GPIOA_BRR_BR6_Values<GPIOA::BRR, 6, 1, WriteMode, GPIOABRRBase> ;
    using BR7 = GPIOA_BRR_BR7_Values<GPIOA::BRR, 7, 1, WriteMode, GPIOABRRBase> ;
    using BR8 = GPIOA_BRR_BR8_Values<GPIOA::BRR, 8, 1, WriteMode, GPIOABRRBase> ;
    using BR9 = GPIOA_BRR_BR9_Values<GPIOA::BRR, 9, 1, WriteMode, GPIOABRRBase> ;
    using BR10 = GPIOA_BRR_BR10_Values<GPIOA::BRR, 10, 1, WriteMode, GPIOABRRBase> ;
    using BR11 = GPIOA_BRR_BR11_Values<GPIOA::BRR, 11, 1, WriteMode, GPIOABRRBase> ;
    using BR12 = GPIOA_BRR_BR12_Values<GPIOA::BRR, 12, 1, WriteMode, GPIOABRRBase> ;
    using BR13 = GPIOA_BRR_BR13_Values<GPIOA::BRR, 13, 1, WriteMode, GPIOABRRBase> ;
    using BR14 = GPIOA_BRR_BR14_Values<GPIOA::BRR, 14, 1, WriteMode, GPIOABRRBase> ;
    using BR15 = GPIOA_BRR_BR15_Values<GPIOA::BRR, 15, 1, WriteMode, GPIOABRRBase> ;
    using FieldValues = GPIOA_BRR_BR15_Values<GPIOA::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40010814, 32, WriteMode, GPIOABRRBase, T...> ;

  struct GPIOALCKRBase {} ;

  struct LCKR : public RegisterBase<0x40010818, 32, ReadWriteMode>
  {
    using LCK0 = GPIOA_LCKR_LCK0_Values<GPIOA::LCKR, 0, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK1 = GPIOA_LCKR_LCK1_Values<GPIOA::LCKR, 1, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK2 = GPIOA_LCKR_LCK2_Values<GPIOA::LCKR, 2, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK3 = GPIOA_LCKR_LCK3_Values<GPIOA::LCKR, 3, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK4 = GPIOA_LCKR_LCK4_Values<GPIOA::LCKR, 4, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK5 = GPIOA_LCKR_LCK5_Values<GPIOA::LCKR, 5, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK6 = GPIOA_LCKR_LCK6_Values<GPIOA::LCKR, 6, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK7 = GPIOA_LCKR_LCK7_Values<GPIOA::LCKR, 7, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK8 = GPIOA_LCKR_LCK8_Values<GPIOA::LCKR, 8, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK9 = GPIOA_LCKR_LCK9_Values<GPIOA::LCKR, 9, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK10 = GPIOA_LCKR_LCK10_Values<GPIOA::LCKR, 10, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK11 = GPIOA_LCKR_LCK11_Values<GPIOA::LCKR, 11, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK12 = GPIOA_LCKR_LCK12_Values<GPIOA::LCKR, 12, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK13 = GPIOA_LCKR_LCK13_Values<GPIOA::LCKR, 13, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK14 = GPIOA_LCKR_LCK14_Values<GPIOA::LCKR, 14, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK15 = GPIOA_LCKR_LCK15_Values<GPIOA::LCKR, 15, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCKK = GPIOA_LCKR_LCKK_Values<GPIOA::LCKR, 16, 1, ReadWriteMode, GPIOALCKRBase> ;
    using FieldValues = GPIOA_LCKR_LCKK_Values<GPIOA::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x40010818, 32, ReadWriteMode, GPIOALCKRBase, T...> ;

} ;

#endif //#if !defined(GPIOAREGISTERS_HPP)
