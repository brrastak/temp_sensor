/*******************************************************************************
* Filename      : gpioeregisters.hpp
*
* Details       : General purpose I/O. This header file is auto-generated for
*                 STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(GPIOEREGISTERS_HPP)
#define GPIOEREGISTERS_HPP

#include "gpioefieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOE
{
  struct GPIOECRLBase {} ;

  struct CRL : public RegisterBase<0x40011800, 32, ReadWriteMode>
  {
    using MODE0 = GPIOE_CRL_MODE0_Values<GPIOE::CRL, 0, 2, ReadWriteMode, GPIOECRLBase> ;
    using CNF0 = GPIOE_CRL_CNF0_Values<GPIOE::CRL, 2, 2, ReadWriteMode, GPIOECRLBase> ;
    using MODE1 = GPIOE_CRL_MODE1_Values<GPIOE::CRL, 4, 2, ReadWriteMode, GPIOECRLBase> ;
    using CNF1 = GPIOE_CRL_CNF1_Values<GPIOE::CRL, 6, 2, ReadWriteMode, GPIOECRLBase> ;
    using MODE2 = GPIOE_CRL_MODE2_Values<GPIOE::CRL, 8, 2, ReadWriteMode, GPIOECRLBase> ;
    using CNF2 = GPIOE_CRL_CNF2_Values<GPIOE::CRL, 10, 2, ReadWriteMode, GPIOECRLBase> ;
    using MODE3 = GPIOE_CRL_MODE3_Values<GPIOE::CRL, 12, 2, ReadWriteMode, GPIOECRLBase> ;
    using CNF3 = GPIOE_CRL_CNF3_Values<GPIOE::CRL, 14, 2, ReadWriteMode, GPIOECRLBase> ;
    using MODE4 = GPIOE_CRL_MODE4_Values<GPIOE::CRL, 16, 2, ReadWriteMode, GPIOECRLBase> ;
    using CNF4 = GPIOE_CRL_CNF4_Values<GPIOE::CRL, 18, 2, ReadWriteMode, GPIOECRLBase> ;
    using MODE5 = GPIOE_CRL_MODE5_Values<GPIOE::CRL, 20, 2, ReadWriteMode, GPIOECRLBase> ;
    using CNF5 = GPIOE_CRL_CNF5_Values<GPIOE::CRL, 22, 2, ReadWriteMode, GPIOECRLBase> ;
    using MODE6 = GPIOE_CRL_MODE6_Values<GPIOE::CRL, 24, 2, ReadWriteMode, GPIOECRLBase> ;
    using CNF6 = GPIOE_CRL_CNF6_Values<GPIOE::CRL, 26, 2, ReadWriteMode, GPIOECRLBase> ;
    using MODE7 = GPIOE_CRL_MODE7_Values<GPIOE::CRL, 28, 2, ReadWriteMode, GPIOECRLBase> ;
    using CNF7 = GPIOE_CRL_CNF7_Values<GPIOE::CRL, 30, 2, ReadWriteMode, GPIOECRLBase> ;
    using FieldValues = GPIOE_CRL_CNF7_Values<GPIOE::CRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRLPack  = Register<0x40011800, 32, ReadWriteMode, GPIOECRLBase, T...> ;

  struct GPIOECRHBase {} ;

  struct CRH : public RegisterBase<0x40011804, 32, ReadWriteMode>
  {
    using MODE8 = GPIOE_CRH_MODE8_Values<GPIOE::CRH, 0, 2, ReadWriteMode, GPIOECRHBase> ;
    using CNF8 = GPIOE_CRH_CNF8_Values<GPIOE::CRH, 2, 2, ReadWriteMode, GPIOECRHBase> ;
    using MODE9 = GPIOE_CRH_MODE9_Values<GPIOE::CRH, 4, 2, ReadWriteMode, GPIOECRHBase> ;
    using CNF9 = GPIOE_CRH_CNF9_Values<GPIOE::CRH, 6, 2, ReadWriteMode, GPIOECRHBase> ;
    using MODE10 = GPIOE_CRH_MODE10_Values<GPIOE::CRH, 8, 2, ReadWriteMode, GPIOECRHBase> ;
    using CNF10 = GPIOE_CRH_CNF10_Values<GPIOE::CRH, 10, 2, ReadWriteMode, GPIOECRHBase> ;
    using MODE11 = GPIOE_CRH_MODE11_Values<GPIOE::CRH, 12, 2, ReadWriteMode, GPIOECRHBase> ;
    using CNF11 = GPIOE_CRH_CNF11_Values<GPIOE::CRH, 14, 2, ReadWriteMode, GPIOECRHBase> ;
    using MODE12 = GPIOE_CRH_MODE12_Values<GPIOE::CRH, 16, 2, ReadWriteMode, GPIOECRHBase> ;
    using CNF12 = GPIOE_CRH_CNF12_Values<GPIOE::CRH, 18, 2, ReadWriteMode, GPIOECRHBase> ;
    using MODE13 = GPIOE_CRH_MODE13_Values<GPIOE::CRH, 20, 2, ReadWriteMode, GPIOECRHBase> ;
    using CNF13 = GPIOE_CRH_CNF13_Values<GPIOE::CRH, 22, 2, ReadWriteMode, GPIOECRHBase> ;
    using MODE14 = GPIOE_CRH_MODE14_Values<GPIOE::CRH, 24, 2, ReadWriteMode, GPIOECRHBase> ;
    using CNF14 = GPIOE_CRH_CNF14_Values<GPIOE::CRH, 26, 2, ReadWriteMode, GPIOECRHBase> ;
    using MODE15 = GPIOE_CRH_MODE15_Values<GPIOE::CRH, 28, 2, ReadWriteMode, GPIOECRHBase> ;
    using CNF15 = GPIOE_CRH_CNF15_Values<GPIOE::CRH, 30, 2, ReadWriteMode, GPIOECRHBase> ;
    using FieldValues = GPIOE_CRH_CNF15_Values<GPIOE::CRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRHPack  = Register<0x40011804, 32, ReadWriteMode, GPIOECRHBase, T...> ;

  struct GPIOEIDRBase {} ;

  struct IDR : public RegisterBase<0x40011808, 32, ReadMode>
  {
    using IDR0 = GPIOE_IDR_IDR0_Values<GPIOE::IDR, 0, 1, ReadMode, GPIOEIDRBase> ;
    using IDR1 = GPIOE_IDR_IDR1_Values<GPIOE::IDR, 1, 1, ReadMode, GPIOEIDRBase> ;
    using IDR2 = GPIOE_IDR_IDR2_Values<GPIOE::IDR, 2, 1, ReadMode, GPIOEIDRBase> ;
    using IDR3 = GPIOE_IDR_IDR3_Values<GPIOE::IDR, 3, 1, ReadMode, GPIOEIDRBase> ;
    using IDR4 = GPIOE_IDR_IDR4_Values<GPIOE::IDR, 4, 1, ReadMode, GPIOEIDRBase> ;
    using IDR5 = GPIOE_IDR_IDR5_Values<GPIOE::IDR, 5, 1, ReadMode, GPIOEIDRBase> ;
    using IDR6 = GPIOE_IDR_IDR6_Values<GPIOE::IDR, 6, 1, ReadMode, GPIOEIDRBase> ;
    using IDR7 = GPIOE_IDR_IDR7_Values<GPIOE::IDR, 7, 1, ReadMode, GPIOEIDRBase> ;
    using IDR8 = GPIOE_IDR_IDR8_Values<GPIOE::IDR, 8, 1, ReadMode, GPIOEIDRBase> ;
    using IDR9 = GPIOE_IDR_IDR9_Values<GPIOE::IDR, 9, 1, ReadMode, GPIOEIDRBase> ;
    using IDR10 = GPIOE_IDR_IDR10_Values<GPIOE::IDR, 10, 1, ReadMode, GPIOEIDRBase> ;
    using IDR11 = GPIOE_IDR_IDR11_Values<GPIOE::IDR, 11, 1, ReadMode, GPIOEIDRBase> ;
    using IDR12 = GPIOE_IDR_IDR12_Values<GPIOE::IDR, 12, 1, ReadMode, GPIOEIDRBase> ;
    using IDR13 = GPIOE_IDR_IDR13_Values<GPIOE::IDR, 13, 1, ReadMode, GPIOEIDRBase> ;
    using IDR14 = GPIOE_IDR_IDR14_Values<GPIOE::IDR, 14, 1, ReadMode, GPIOEIDRBase> ;
    using IDR15 = GPIOE_IDR_IDR15_Values<GPIOE::IDR, 15, 1, ReadMode, GPIOEIDRBase> ;
    using FieldValues = GPIOE_IDR_IDR15_Values<GPIOE::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40011808, 32, ReadMode, GPIOEIDRBase, T...> ;

  struct GPIOEODRBase {} ;

  struct ODR : public RegisterBase<0x4001180C, 32, ReadWriteMode>
  {
    using ODR0 = GPIOE_ODR_ODR0_Values<GPIOE::ODR, 0, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR1 = GPIOE_ODR_ODR1_Values<GPIOE::ODR, 1, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR2 = GPIOE_ODR_ODR2_Values<GPIOE::ODR, 2, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR3 = GPIOE_ODR_ODR3_Values<GPIOE::ODR, 3, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR4 = GPIOE_ODR_ODR4_Values<GPIOE::ODR, 4, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR5 = GPIOE_ODR_ODR5_Values<GPIOE::ODR, 5, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR6 = GPIOE_ODR_ODR6_Values<GPIOE::ODR, 6, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR7 = GPIOE_ODR_ODR7_Values<GPIOE::ODR, 7, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR8 = GPIOE_ODR_ODR8_Values<GPIOE::ODR, 8, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR9 = GPIOE_ODR_ODR9_Values<GPIOE::ODR, 9, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR10 = GPIOE_ODR_ODR10_Values<GPIOE::ODR, 10, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR11 = GPIOE_ODR_ODR11_Values<GPIOE::ODR, 11, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR12 = GPIOE_ODR_ODR12_Values<GPIOE::ODR, 12, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR13 = GPIOE_ODR_ODR13_Values<GPIOE::ODR, 13, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR14 = GPIOE_ODR_ODR14_Values<GPIOE::ODR, 14, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR15 = GPIOE_ODR_ODR15_Values<GPIOE::ODR, 15, 1, ReadWriteMode, GPIOEODRBase> ;
    using FieldValues = GPIOE_ODR_ODR15_Values<GPIOE::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x4001180C, 32, ReadWriteMode, GPIOEODRBase, T...> ;

  struct GPIOEBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40011810, 32, WriteMode>
  {
    using BS0 = GPIOE_BSRR_BS0_Values<GPIOE::BSRR, 0, 1, WriteMode, GPIOEBSRRBase> ;
    using BS1 = GPIOE_BSRR_BS1_Values<GPIOE::BSRR, 1, 1, WriteMode, GPIOEBSRRBase> ;
    using BS2 = GPIOE_BSRR_BS2_Values<GPIOE::BSRR, 2, 1, WriteMode, GPIOEBSRRBase> ;
    using BS3 = GPIOE_BSRR_BS3_Values<GPIOE::BSRR, 3, 1, WriteMode, GPIOEBSRRBase> ;
    using BS4 = GPIOE_BSRR_BS4_Values<GPIOE::BSRR, 4, 1, WriteMode, GPIOEBSRRBase> ;
    using BS5 = GPIOE_BSRR_BS5_Values<GPIOE::BSRR, 5, 1, WriteMode, GPIOEBSRRBase> ;
    using BS6 = GPIOE_BSRR_BS6_Values<GPIOE::BSRR, 6, 1, WriteMode, GPIOEBSRRBase> ;
    using BS7 = GPIOE_BSRR_BS7_Values<GPIOE::BSRR, 7, 1, WriteMode, GPIOEBSRRBase> ;
    using BS8 = GPIOE_BSRR_BS8_Values<GPIOE::BSRR, 8, 1, WriteMode, GPIOEBSRRBase> ;
    using BS9 = GPIOE_BSRR_BS9_Values<GPIOE::BSRR, 9, 1, WriteMode, GPIOEBSRRBase> ;
    using BS10 = GPIOE_BSRR_BS10_Values<GPIOE::BSRR, 10, 1, WriteMode, GPIOEBSRRBase> ;
    using BS11 = GPIOE_BSRR_BS11_Values<GPIOE::BSRR, 11, 1, WriteMode, GPIOEBSRRBase> ;
    using BS12 = GPIOE_BSRR_BS12_Values<GPIOE::BSRR, 12, 1, WriteMode, GPIOEBSRRBase> ;
    using BS13 = GPIOE_BSRR_BS13_Values<GPIOE::BSRR, 13, 1, WriteMode, GPIOEBSRRBase> ;
    using BS14 = GPIOE_BSRR_BS14_Values<GPIOE::BSRR, 14, 1, WriteMode, GPIOEBSRRBase> ;
    using BS15 = GPIOE_BSRR_BS15_Values<GPIOE::BSRR, 15, 1, WriteMode, GPIOEBSRRBase> ;
    using BR0 = GPIOE_BSRR_BR0_Values<GPIOE::BSRR, 16, 1, WriteMode, GPIOEBSRRBase> ;
    using BR1 = GPIOE_BSRR_BR1_Values<GPIOE::BSRR, 17, 1, WriteMode, GPIOEBSRRBase> ;
    using BR2 = GPIOE_BSRR_BR2_Values<GPIOE::BSRR, 18, 1, WriteMode, GPIOEBSRRBase> ;
    using BR3 = GPIOE_BSRR_BR3_Values<GPIOE::BSRR, 19, 1, WriteMode, GPIOEBSRRBase> ;
    using BR4 = GPIOE_BSRR_BR4_Values<GPIOE::BSRR, 20, 1, WriteMode, GPIOEBSRRBase> ;
    using BR5 = GPIOE_BSRR_BR5_Values<GPIOE::BSRR, 21, 1, WriteMode, GPIOEBSRRBase> ;
    using BR6 = GPIOE_BSRR_BR6_Values<GPIOE::BSRR, 22, 1, WriteMode, GPIOEBSRRBase> ;
    using BR7 = GPIOE_BSRR_BR7_Values<GPIOE::BSRR, 23, 1, WriteMode, GPIOEBSRRBase> ;
    using BR8 = GPIOE_BSRR_BR8_Values<GPIOE::BSRR, 24, 1, WriteMode, GPIOEBSRRBase> ;
    using BR9 = GPIOE_BSRR_BR9_Values<GPIOE::BSRR, 25, 1, WriteMode, GPIOEBSRRBase> ;
    using BR10 = GPIOE_BSRR_BR10_Values<GPIOE::BSRR, 26, 1, WriteMode, GPIOEBSRRBase> ;
    using BR11 = GPIOE_BSRR_BR11_Values<GPIOE::BSRR, 27, 1, WriteMode, GPIOEBSRRBase> ;
    using BR12 = GPIOE_BSRR_BR12_Values<GPIOE::BSRR, 28, 1, WriteMode, GPIOEBSRRBase> ;
    using BR13 = GPIOE_BSRR_BR13_Values<GPIOE::BSRR, 29, 1, WriteMode, GPIOEBSRRBase> ;
    using BR14 = GPIOE_BSRR_BR14_Values<GPIOE::BSRR, 30, 1, WriteMode, GPIOEBSRRBase> ;
    using BR15 = GPIOE_BSRR_BR15_Values<GPIOE::BSRR, 31, 1, WriteMode, GPIOEBSRRBase> ;
    using FieldValues = GPIOE_BSRR_BR15_Values<GPIOE::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40011810, 32, WriteMode, GPIOEBSRRBase, T...> ;

  struct GPIOEBRRBase {} ;

  struct BRR : public RegisterBase<0x40011814, 32, WriteMode>
  {
    using BR0 = GPIOE_BRR_BR0_Values<GPIOE::BRR, 0, 1, WriteMode, GPIOEBRRBase> ;
    using BR1 = GPIOE_BRR_BR1_Values<GPIOE::BRR, 1, 1, WriteMode, GPIOEBRRBase> ;
    using BR2 = GPIOE_BRR_BR2_Values<GPIOE::BRR, 2, 1, WriteMode, GPIOEBRRBase> ;
    using BR3 = GPIOE_BRR_BR3_Values<GPIOE::BRR, 3, 1, WriteMode, GPIOEBRRBase> ;
    using BR4 = GPIOE_BRR_BR4_Values<GPIOE::BRR, 4, 1, WriteMode, GPIOEBRRBase> ;
    using BR5 = GPIOE_BRR_BR5_Values<GPIOE::BRR, 5, 1, WriteMode, GPIOEBRRBase> ;
    using BR6 = GPIOE_BRR_BR6_Values<GPIOE::BRR, 6, 1, WriteMode, GPIOEBRRBase> ;
    using BR7 = GPIOE_BRR_BR7_Values<GPIOE::BRR, 7, 1, WriteMode, GPIOEBRRBase> ;
    using BR8 = GPIOE_BRR_BR8_Values<GPIOE::BRR, 8, 1, WriteMode, GPIOEBRRBase> ;
    using BR9 = GPIOE_BRR_BR9_Values<GPIOE::BRR, 9, 1, WriteMode, GPIOEBRRBase> ;
    using BR10 = GPIOE_BRR_BR10_Values<GPIOE::BRR, 10, 1, WriteMode, GPIOEBRRBase> ;
    using BR11 = GPIOE_BRR_BR11_Values<GPIOE::BRR, 11, 1, WriteMode, GPIOEBRRBase> ;
    using BR12 = GPIOE_BRR_BR12_Values<GPIOE::BRR, 12, 1, WriteMode, GPIOEBRRBase> ;
    using BR13 = GPIOE_BRR_BR13_Values<GPIOE::BRR, 13, 1, WriteMode, GPIOEBRRBase> ;
    using BR14 = GPIOE_BRR_BR14_Values<GPIOE::BRR, 14, 1, WriteMode, GPIOEBRRBase> ;
    using BR15 = GPIOE_BRR_BR15_Values<GPIOE::BRR, 15, 1, WriteMode, GPIOEBRRBase> ;
    using FieldValues = GPIOE_BRR_BR15_Values<GPIOE::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40011814, 32, WriteMode, GPIOEBRRBase, T...> ;

  struct GPIOELCKRBase {} ;

  struct LCKR : public RegisterBase<0x40011818, 32, ReadWriteMode>
  {
    using LCK0 = GPIOE_LCKR_LCK0_Values<GPIOE::LCKR, 0, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK1 = GPIOE_LCKR_LCK1_Values<GPIOE::LCKR, 1, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK2 = GPIOE_LCKR_LCK2_Values<GPIOE::LCKR, 2, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK3 = GPIOE_LCKR_LCK3_Values<GPIOE::LCKR, 3, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK4 = GPIOE_LCKR_LCK4_Values<GPIOE::LCKR, 4, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK5 = GPIOE_LCKR_LCK5_Values<GPIOE::LCKR, 5, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK6 = GPIOE_LCKR_LCK6_Values<GPIOE::LCKR, 6, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK7 = GPIOE_LCKR_LCK7_Values<GPIOE::LCKR, 7, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK8 = GPIOE_LCKR_LCK8_Values<GPIOE::LCKR, 8, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK9 = GPIOE_LCKR_LCK9_Values<GPIOE::LCKR, 9, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK10 = GPIOE_LCKR_LCK10_Values<GPIOE::LCKR, 10, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK11 = GPIOE_LCKR_LCK11_Values<GPIOE::LCKR, 11, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK12 = GPIOE_LCKR_LCK12_Values<GPIOE::LCKR, 12, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK13 = GPIOE_LCKR_LCK13_Values<GPIOE::LCKR, 13, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK14 = GPIOE_LCKR_LCK14_Values<GPIOE::LCKR, 14, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK15 = GPIOE_LCKR_LCK15_Values<GPIOE::LCKR, 15, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCKK = GPIOE_LCKR_LCKK_Values<GPIOE::LCKR, 16, 1, ReadWriteMode, GPIOELCKRBase> ;
    using FieldValues = GPIOE_LCKR_LCKK_Values<GPIOE::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x40011818, 32, ReadWriteMode, GPIOELCKRBase, T...> ;

} ;

#endif //#if !defined(GPIOEREGISTERS_HPP)
