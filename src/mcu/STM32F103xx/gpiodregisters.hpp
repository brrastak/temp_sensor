/*******************************************************************************
* Filename      : gpiodregisters.hpp
*
* Details       : General purpose I/O. This header file is auto-generated for
*                 STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(GPIODREGISTERS_HPP)
#define GPIODREGISTERS_HPP

#include "gpiodfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOD
{
  struct GPIODCRLBase {} ;

  struct CRL : public RegisterBase<0x40011400, 32, ReadWriteMode>
  {
    using MODE0 = GPIOD_CRL_MODE0_Values<GPIOD::CRL, 0, 2, ReadWriteMode, GPIODCRLBase> ;
    using CNF0 = GPIOD_CRL_CNF0_Values<GPIOD::CRL, 2, 2, ReadWriteMode, GPIODCRLBase> ;
    using MODE1 = GPIOD_CRL_MODE1_Values<GPIOD::CRL, 4, 2, ReadWriteMode, GPIODCRLBase> ;
    using CNF1 = GPIOD_CRL_CNF1_Values<GPIOD::CRL, 6, 2, ReadWriteMode, GPIODCRLBase> ;
    using MODE2 = GPIOD_CRL_MODE2_Values<GPIOD::CRL, 8, 2, ReadWriteMode, GPIODCRLBase> ;
    using CNF2 = GPIOD_CRL_CNF2_Values<GPIOD::CRL, 10, 2, ReadWriteMode, GPIODCRLBase> ;
    using MODE3 = GPIOD_CRL_MODE3_Values<GPIOD::CRL, 12, 2, ReadWriteMode, GPIODCRLBase> ;
    using CNF3 = GPIOD_CRL_CNF3_Values<GPIOD::CRL, 14, 2, ReadWriteMode, GPIODCRLBase> ;
    using MODE4 = GPIOD_CRL_MODE4_Values<GPIOD::CRL, 16, 2, ReadWriteMode, GPIODCRLBase> ;
    using CNF4 = GPIOD_CRL_CNF4_Values<GPIOD::CRL, 18, 2, ReadWriteMode, GPIODCRLBase> ;
    using MODE5 = GPIOD_CRL_MODE5_Values<GPIOD::CRL, 20, 2, ReadWriteMode, GPIODCRLBase> ;
    using CNF5 = GPIOD_CRL_CNF5_Values<GPIOD::CRL, 22, 2, ReadWriteMode, GPIODCRLBase> ;
    using MODE6 = GPIOD_CRL_MODE6_Values<GPIOD::CRL, 24, 2, ReadWriteMode, GPIODCRLBase> ;
    using CNF6 = GPIOD_CRL_CNF6_Values<GPIOD::CRL, 26, 2, ReadWriteMode, GPIODCRLBase> ;
    using MODE7 = GPIOD_CRL_MODE7_Values<GPIOD::CRL, 28, 2, ReadWriteMode, GPIODCRLBase> ;
    using CNF7 = GPIOD_CRL_CNF7_Values<GPIOD::CRL, 30, 2, ReadWriteMode, GPIODCRLBase> ;
    using FieldValues = GPIOD_CRL_CNF7_Values<GPIOD::CRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRLPack  = Register<0x40011400, 32, ReadWriteMode, GPIODCRLBase, T...> ;

  struct GPIODCRHBase {} ;

  struct CRH : public RegisterBase<0x40011404, 32, ReadWriteMode>
  {
    using MODE8 = GPIOD_CRH_MODE8_Values<GPIOD::CRH, 0, 2, ReadWriteMode, GPIODCRHBase> ;
    using CNF8 = GPIOD_CRH_CNF8_Values<GPIOD::CRH, 2, 2, ReadWriteMode, GPIODCRHBase> ;
    using MODE9 = GPIOD_CRH_MODE9_Values<GPIOD::CRH, 4, 2, ReadWriteMode, GPIODCRHBase> ;
    using CNF9 = GPIOD_CRH_CNF9_Values<GPIOD::CRH, 6, 2, ReadWriteMode, GPIODCRHBase> ;
    using MODE10 = GPIOD_CRH_MODE10_Values<GPIOD::CRH, 8, 2, ReadWriteMode, GPIODCRHBase> ;
    using CNF10 = GPIOD_CRH_CNF10_Values<GPIOD::CRH, 10, 2, ReadWriteMode, GPIODCRHBase> ;
    using MODE11 = GPIOD_CRH_MODE11_Values<GPIOD::CRH, 12, 2, ReadWriteMode, GPIODCRHBase> ;
    using CNF11 = GPIOD_CRH_CNF11_Values<GPIOD::CRH, 14, 2, ReadWriteMode, GPIODCRHBase> ;
    using MODE12 = GPIOD_CRH_MODE12_Values<GPIOD::CRH, 16, 2, ReadWriteMode, GPIODCRHBase> ;
    using CNF12 = GPIOD_CRH_CNF12_Values<GPIOD::CRH, 18, 2, ReadWriteMode, GPIODCRHBase> ;
    using MODE13 = GPIOD_CRH_MODE13_Values<GPIOD::CRH, 20, 2, ReadWriteMode, GPIODCRHBase> ;
    using CNF13 = GPIOD_CRH_CNF13_Values<GPIOD::CRH, 22, 2, ReadWriteMode, GPIODCRHBase> ;
    using MODE14 = GPIOD_CRH_MODE14_Values<GPIOD::CRH, 24, 2, ReadWriteMode, GPIODCRHBase> ;
    using CNF14 = GPIOD_CRH_CNF14_Values<GPIOD::CRH, 26, 2, ReadWriteMode, GPIODCRHBase> ;
    using MODE15 = GPIOD_CRH_MODE15_Values<GPIOD::CRH, 28, 2, ReadWriteMode, GPIODCRHBase> ;
    using CNF15 = GPIOD_CRH_CNF15_Values<GPIOD::CRH, 30, 2, ReadWriteMode, GPIODCRHBase> ;
    using FieldValues = GPIOD_CRH_CNF15_Values<GPIOD::CRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRHPack  = Register<0x40011404, 32, ReadWriteMode, GPIODCRHBase, T...> ;

  struct GPIODIDRBase {} ;

  struct IDR : public RegisterBase<0x40011408, 32, ReadMode>
  {
    using IDR0 = GPIOD_IDR_IDR0_Values<GPIOD::IDR, 0, 1, ReadMode, GPIODIDRBase> ;
    using IDR1 = GPIOD_IDR_IDR1_Values<GPIOD::IDR, 1, 1, ReadMode, GPIODIDRBase> ;
    using IDR2 = GPIOD_IDR_IDR2_Values<GPIOD::IDR, 2, 1, ReadMode, GPIODIDRBase> ;
    using IDR3 = GPIOD_IDR_IDR3_Values<GPIOD::IDR, 3, 1, ReadMode, GPIODIDRBase> ;
    using IDR4 = GPIOD_IDR_IDR4_Values<GPIOD::IDR, 4, 1, ReadMode, GPIODIDRBase> ;
    using IDR5 = GPIOD_IDR_IDR5_Values<GPIOD::IDR, 5, 1, ReadMode, GPIODIDRBase> ;
    using IDR6 = GPIOD_IDR_IDR6_Values<GPIOD::IDR, 6, 1, ReadMode, GPIODIDRBase> ;
    using IDR7 = GPIOD_IDR_IDR7_Values<GPIOD::IDR, 7, 1, ReadMode, GPIODIDRBase> ;
    using IDR8 = GPIOD_IDR_IDR8_Values<GPIOD::IDR, 8, 1, ReadMode, GPIODIDRBase> ;
    using IDR9 = GPIOD_IDR_IDR9_Values<GPIOD::IDR, 9, 1, ReadMode, GPIODIDRBase> ;
    using IDR10 = GPIOD_IDR_IDR10_Values<GPIOD::IDR, 10, 1, ReadMode, GPIODIDRBase> ;
    using IDR11 = GPIOD_IDR_IDR11_Values<GPIOD::IDR, 11, 1, ReadMode, GPIODIDRBase> ;
    using IDR12 = GPIOD_IDR_IDR12_Values<GPIOD::IDR, 12, 1, ReadMode, GPIODIDRBase> ;
    using IDR13 = GPIOD_IDR_IDR13_Values<GPIOD::IDR, 13, 1, ReadMode, GPIODIDRBase> ;
    using IDR14 = GPIOD_IDR_IDR14_Values<GPIOD::IDR, 14, 1, ReadMode, GPIODIDRBase> ;
    using IDR15 = GPIOD_IDR_IDR15_Values<GPIOD::IDR, 15, 1, ReadMode, GPIODIDRBase> ;
    using FieldValues = GPIOD_IDR_IDR15_Values<GPIOD::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40011408, 32, ReadMode, GPIODIDRBase, T...> ;

  struct GPIODODRBase {} ;

  struct ODR : public RegisterBase<0x4001140C, 32, ReadWriteMode>
  {
    using ODR0 = GPIOD_ODR_ODR0_Values<GPIOD::ODR, 0, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR1 = GPIOD_ODR_ODR1_Values<GPIOD::ODR, 1, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR2 = GPIOD_ODR_ODR2_Values<GPIOD::ODR, 2, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR3 = GPIOD_ODR_ODR3_Values<GPIOD::ODR, 3, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR4 = GPIOD_ODR_ODR4_Values<GPIOD::ODR, 4, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR5 = GPIOD_ODR_ODR5_Values<GPIOD::ODR, 5, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR6 = GPIOD_ODR_ODR6_Values<GPIOD::ODR, 6, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR7 = GPIOD_ODR_ODR7_Values<GPIOD::ODR, 7, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR8 = GPIOD_ODR_ODR8_Values<GPIOD::ODR, 8, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR9 = GPIOD_ODR_ODR9_Values<GPIOD::ODR, 9, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR10 = GPIOD_ODR_ODR10_Values<GPIOD::ODR, 10, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR11 = GPIOD_ODR_ODR11_Values<GPIOD::ODR, 11, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR12 = GPIOD_ODR_ODR12_Values<GPIOD::ODR, 12, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR13 = GPIOD_ODR_ODR13_Values<GPIOD::ODR, 13, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR14 = GPIOD_ODR_ODR14_Values<GPIOD::ODR, 14, 1, ReadWriteMode, GPIODODRBase> ;
    using ODR15 = GPIOD_ODR_ODR15_Values<GPIOD::ODR, 15, 1, ReadWriteMode, GPIODODRBase> ;
    using FieldValues = GPIOD_ODR_ODR15_Values<GPIOD::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x4001140C, 32, ReadWriteMode, GPIODODRBase, T...> ;

  struct GPIODBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40011410, 32, WriteMode>
  {
    using BS0 = GPIOD_BSRR_BS0_Values<GPIOD::BSRR, 0, 1, WriteMode, GPIODBSRRBase> ;
    using BS1 = GPIOD_BSRR_BS1_Values<GPIOD::BSRR, 1, 1, WriteMode, GPIODBSRRBase> ;
    using BS2 = GPIOD_BSRR_BS2_Values<GPIOD::BSRR, 2, 1, WriteMode, GPIODBSRRBase> ;
    using BS3 = GPIOD_BSRR_BS3_Values<GPIOD::BSRR, 3, 1, WriteMode, GPIODBSRRBase> ;
    using BS4 = GPIOD_BSRR_BS4_Values<GPIOD::BSRR, 4, 1, WriteMode, GPIODBSRRBase> ;
    using BS5 = GPIOD_BSRR_BS5_Values<GPIOD::BSRR, 5, 1, WriteMode, GPIODBSRRBase> ;
    using BS6 = GPIOD_BSRR_BS6_Values<GPIOD::BSRR, 6, 1, WriteMode, GPIODBSRRBase> ;
    using BS7 = GPIOD_BSRR_BS7_Values<GPIOD::BSRR, 7, 1, WriteMode, GPIODBSRRBase> ;
    using BS8 = GPIOD_BSRR_BS8_Values<GPIOD::BSRR, 8, 1, WriteMode, GPIODBSRRBase> ;
    using BS9 = GPIOD_BSRR_BS9_Values<GPIOD::BSRR, 9, 1, WriteMode, GPIODBSRRBase> ;
    using BS10 = GPIOD_BSRR_BS10_Values<GPIOD::BSRR, 10, 1, WriteMode, GPIODBSRRBase> ;
    using BS11 = GPIOD_BSRR_BS11_Values<GPIOD::BSRR, 11, 1, WriteMode, GPIODBSRRBase> ;
    using BS12 = GPIOD_BSRR_BS12_Values<GPIOD::BSRR, 12, 1, WriteMode, GPIODBSRRBase> ;
    using BS13 = GPIOD_BSRR_BS13_Values<GPIOD::BSRR, 13, 1, WriteMode, GPIODBSRRBase> ;
    using BS14 = GPIOD_BSRR_BS14_Values<GPIOD::BSRR, 14, 1, WriteMode, GPIODBSRRBase> ;
    using BS15 = GPIOD_BSRR_BS15_Values<GPIOD::BSRR, 15, 1, WriteMode, GPIODBSRRBase> ;
    using BR0 = GPIOD_BSRR_BR0_Values<GPIOD::BSRR, 16, 1, WriteMode, GPIODBSRRBase> ;
    using BR1 = GPIOD_BSRR_BR1_Values<GPIOD::BSRR, 17, 1, WriteMode, GPIODBSRRBase> ;
    using BR2 = GPIOD_BSRR_BR2_Values<GPIOD::BSRR, 18, 1, WriteMode, GPIODBSRRBase> ;
    using BR3 = GPIOD_BSRR_BR3_Values<GPIOD::BSRR, 19, 1, WriteMode, GPIODBSRRBase> ;
    using BR4 = GPIOD_BSRR_BR4_Values<GPIOD::BSRR, 20, 1, WriteMode, GPIODBSRRBase> ;
    using BR5 = GPIOD_BSRR_BR5_Values<GPIOD::BSRR, 21, 1, WriteMode, GPIODBSRRBase> ;
    using BR6 = GPIOD_BSRR_BR6_Values<GPIOD::BSRR, 22, 1, WriteMode, GPIODBSRRBase> ;
    using BR7 = GPIOD_BSRR_BR7_Values<GPIOD::BSRR, 23, 1, WriteMode, GPIODBSRRBase> ;
    using BR8 = GPIOD_BSRR_BR8_Values<GPIOD::BSRR, 24, 1, WriteMode, GPIODBSRRBase> ;
    using BR9 = GPIOD_BSRR_BR9_Values<GPIOD::BSRR, 25, 1, WriteMode, GPIODBSRRBase> ;
    using BR10 = GPIOD_BSRR_BR10_Values<GPIOD::BSRR, 26, 1, WriteMode, GPIODBSRRBase> ;
    using BR11 = GPIOD_BSRR_BR11_Values<GPIOD::BSRR, 27, 1, WriteMode, GPIODBSRRBase> ;
    using BR12 = GPIOD_BSRR_BR12_Values<GPIOD::BSRR, 28, 1, WriteMode, GPIODBSRRBase> ;
    using BR13 = GPIOD_BSRR_BR13_Values<GPIOD::BSRR, 29, 1, WriteMode, GPIODBSRRBase> ;
    using BR14 = GPIOD_BSRR_BR14_Values<GPIOD::BSRR, 30, 1, WriteMode, GPIODBSRRBase> ;
    using BR15 = GPIOD_BSRR_BR15_Values<GPIOD::BSRR, 31, 1, WriteMode, GPIODBSRRBase> ;
    using FieldValues = GPIOD_BSRR_BR15_Values<GPIOD::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40011410, 32, WriteMode, GPIODBSRRBase, T...> ;

  struct GPIODBRRBase {} ;

  struct BRR : public RegisterBase<0x40011414, 32, WriteMode>
  {
    using BR0 = GPIOD_BRR_BR0_Values<GPIOD::BRR, 0, 1, WriteMode, GPIODBRRBase> ;
    using BR1 = GPIOD_BRR_BR1_Values<GPIOD::BRR, 1, 1, WriteMode, GPIODBRRBase> ;
    using BR2 = GPIOD_BRR_BR2_Values<GPIOD::BRR, 2, 1, WriteMode, GPIODBRRBase> ;
    using BR3 = GPIOD_BRR_BR3_Values<GPIOD::BRR, 3, 1, WriteMode, GPIODBRRBase> ;
    using BR4 = GPIOD_BRR_BR4_Values<GPIOD::BRR, 4, 1, WriteMode, GPIODBRRBase> ;
    using BR5 = GPIOD_BRR_BR5_Values<GPIOD::BRR, 5, 1, WriteMode, GPIODBRRBase> ;
    using BR6 = GPIOD_BRR_BR6_Values<GPIOD::BRR, 6, 1, WriteMode, GPIODBRRBase> ;
    using BR7 = GPIOD_BRR_BR7_Values<GPIOD::BRR, 7, 1, WriteMode, GPIODBRRBase> ;
    using BR8 = GPIOD_BRR_BR8_Values<GPIOD::BRR, 8, 1, WriteMode, GPIODBRRBase> ;
    using BR9 = GPIOD_BRR_BR9_Values<GPIOD::BRR, 9, 1, WriteMode, GPIODBRRBase> ;
    using BR10 = GPIOD_BRR_BR10_Values<GPIOD::BRR, 10, 1, WriteMode, GPIODBRRBase> ;
    using BR11 = GPIOD_BRR_BR11_Values<GPIOD::BRR, 11, 1, WriteMode, GPIODBRRBase> ;
    using BR12 = GPIOD_BRR_BR12_Values<GPIOD::BRR, 12, 1, WriteMode, GPIODBRRBase> ;
    using BR13 = GPIOD_BRR_BR13_Values<GPIOD::BRR, 13, 1, WriteMode, GPIODBRRBase> ;
    using BR14 = GPIOD_BRR_BR14_Values<GPIOD::BRR, 14, 1, WriteMode, GPIODBRRBase> ;
    using BR15 = GPIOD_BRR_BR15_Values<GPIOD::BRR, 15, 1, WriteMode, GPIODBRRBase> ;
    using FieldValues = GPIOD_BRR_BR15_Values<GPIOD::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40011414, 32, WriteMode, GPIODBRRBase, T...> ;

  struct GPIODLCKRBase {} ;

  struct LCKR : public RegisterBase<0x40011418, 32, ReadWriteMode>
  {
    using LCK0 = GPIOD_LCKR_LCK0_Values<GPIOD::LCKR, 0, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK1 = GPIOD_LCKR_LCK1_Values<GPIOD::LCKR, 1, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK2 = GPIOD_LCKR_LCK2_Values<GPIOD::LCKR, 2, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK3 = GPIOD_LCKR_LCK3_Values<GPIOD::LCKR, 3, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK4 = GPIOD_LCKR_LCK4_Values<GPIOD::LCKR, 4, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK5 = GPIOD_LCKR_LCK5_Values<GPIOD::LCKR, 5, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK6 = GPIOD_LCKR_LCK6_Values<GPIOD::LCKR, 6, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK7 = GPIOD_LCKR_LCK7_Values<GPIOD::LCKR, 7, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK8 = GPIOD_LCKR_LCK8_Values<GPIOD::LCKR, 8, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK9 = GPIOD_LCKR_LCK9_Values<GPIOD::LCKR, 9, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK10 = GPIOD_LCKR_LCK10_Values<GPIOD::LCKR, 10, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK11 = GPIOD_LCKR_LCK11_Values<GPIOD::LCKR, 11, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK12 = GPIOD_LCKR_LCK12_Values<GPIOD::LCKR, 12, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK13 = GPIOD_LCKR_LCK13_Values<GPIOD::LCKR, 13, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK14 = GPIOD_LCKR_LCK14_Values<GPIOD::LCKR, 14, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK15 = GPIOD_LCKR_LCK15_Values<GPIOD::LCKR, 15, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCKK = GPIOD_LCKR_LCKK_Values<GPIOD::LCKR, 16, 1, ReadWriteMode, GPIODLCKRBase> ;
    using FieldValues = GPIOD_LCKR_LCKK_Values<GPIOD::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x40011418, 32, ReadWriteMode, GPIODLCKRBase, T...> ;

} ;

#endif //#if !defined(GPIODREGISTERS_HPP)
