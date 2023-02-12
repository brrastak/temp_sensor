/*******************************************************************************
* Filename      : gpiocregisters.hpp
*
* Details       : General purpose I/O. This header file is auto-generated for
*                 STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(GPIOCREGISTERS_HPP)
#define GPIOCREGISTERS_HPP

#include "gpiocfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOC
{
  struct GPIOCCRLBase {} ;

  struct CRL : public RegisterBase<0x40011000, 32, ReadWriteMode>
  {
    using MODE0 = GPIOC_CRL_MODE0_Values<GPIOC::CRL, 0, 2, ReadWriteMode, GPIOCCRLBase> ;
    using CNF0 = GPIOC_CRL_CNF0_Values<GPIOC::CRL, 2, 2, ReadWriteMode, GPIOCCRLBase> ;
    using MODE1 = GPIOC_CRL_MODE1_Values<GPIOC::CRL, 4, 2, ReadWriteMode, GPIOCCRLBase> ;
    using CNF1 = GPIOC_CRL_CNF1_Values<GPIOC::CRL, 6, 2, ReadWriteMode, GPIOCCRLBase> ;
    using MODE2 = GPIOC_CRL_MODE2_Values<GPIOC::CRL, 8, 2, ReadWriteMode, GPIOCCRLBase> ;
    using CNF2 = GPIOC_CRL_CNF2_Values<GPIOC::CRL, 10, 2, ReadWriteMode, GPIOCCRLBase> ;
    using MODE3 = GPIOC_CRL_MODE3_Values<GPIOC::CRL, 12, 2, ReadWriteMode, GPIOCCRLBase> ;
    using CNF3 = GPIOC_CRL_CNF3_Values<GPIOC::CRL, 14, 2, ReadWriteMode, GPIOCCRLBase> ;
    using MODE4 = GPIOC_CRL_MODE4_Values<GPIOC::CRL, 16, 2, ReadWriteMode, GPIOCCRLBase> ;
    using CNF4 = GPIOC_CRL_CNF4_Values<GPIOC::CRL, 18, 2, ReadWriteMode, GPIOCCRLBase> ;
    using MODE5 = GPIOC_CRL_MODE5_Values<GPIOC::CRL, 20, 2, ReadWriteMode, GPIOCCRLBase> ;
    using CNF5 = GPIOC_CRL_CNF5_Values<GPIOC::CRL, 22, 2, ReadWriteMode, GPIOCCRLBase> ;
    using MODE6 = GPIOC_CRL_MODE6_Values<GPIOC::CRL, 24, 2, ReadWriteMode, GPIOCCRLBase> ;
    using CNF6 = GPIOC_CRL_CNF6_Values<GPIOC::CRL, 26, 2, ReadWriteMode, GPIOCCRLBase> ;
    using MODE7 = GPIOC_CRL_MODE7_Values<GPIOC::CRL, 28, 2, ReadWriteMode, GPIOCCRLBase> ;
    using CNF7 = GPIOC_CRL_CNF7_Values<GPIOC::CRL, 30, 2, ReadWriteMode, GPIOCCRLBase> ;
    using FieldValues = GPIOC_CRL_CNF7_Values<GPIOC::CRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRLPack  = Register<0x40011000, 32, ReadWriteMode, GPIOCCRLBase, T...> ;

  struct GPIOCCRHBase {} ;

  struct CRH : public RegisterBase<0x40011004, 32, ReadWriteMode>
  {
    using MODE8 = GPIOC_CRH_MODE8_Values<GPIOC::CRH, 0, 2, ReadWriteMode, GPIOCCRHBase> ;
    using CNF8 = GPIOC_CRH_CNF8_Values<GPIOC::CRH, 2, 2, ReadWriteMode, GPIOCCRHBase> ;
    using MODE9 = GPIOC_CRH_MODE9_Values<GPIOC::CRH, 4, 2, ReadWriteMode, GPIOCCRHBase> ;
    using CNF9 = GPIOC_CRH_CNF9_Values<GPIOC::CRH, 6, 2, ReadWriteMode, GPIOCCRHBase> ;
    using MODE10 = GPIOC_CRH_MODE10_Values<GPIOC::CRH, 8, 2, ReadWriteMode, GPIOCCRHBase> ;
    using CNF10 = GPIOC_CRH_CNF10_Values<GPIOC::CRH, 10, 2, ReadWriteMode, GPIOCCRHBase> ;
    using MODE11 = GPIOC_CRH_MODE11_Values<GPIOC::CRH, 12, 2, ReadWriteMode, GPIOCCRHBase> ;
    using CNF11 = GPIOC_CRH_CNF11_Values<GPIOC::CRH, 14, 2, ReadWriteMode, GPIOCCRHBase> ;
    using MODE12 = GPIOC_CRH_MODE12_Values<GPIOC::CRH, 16, 2, ReadWriteMode, GPIOCCRHBase> ;
    using CNF12 = GPIOC_CRH_CNF12_Values<GPIOC::CRH, 18, 2, ReadWriteMode, GPIOCCRHBase> ;
    using MODE13 = GPIOC_CRH_MODE13_Values<GPIOC::CRH, 20, 2, ReadWriteMode, GPIOCCRHBase> ;
    using CNF13 = GPIOC_CRH_CNF13_Values<GPIOC::CRH, 22, 2, ReadWriteMode, GPIOCCRHBase> ;
    using MODE14 = GPIOC_CRH_MODE14_Values<GPIOC::CRH, 24, 2, ReadWriteMode, GPIOCCRHBase> ;
    using CNF14 = GPIOC_CRH_CNF14_Values<GPIOC::CRH, 26, 2, ReadWriteMode, GPIOCCRHBase> ;
    using MODE15 = GPIOC_CRH_MODE15_Values<GPIOC::CRH, 28, 2, ReadWriteMode, GPIOCCRHBase> ;
    using CNF15 = GPIOC_CRH_CNF15_Values<GPIOC::CRH, 30, 2, ReadWriteMode, GPIOCCRHBase> ;
    using FieldValues = GPIOC_CRH_CNF15_Values<GPIOC::CRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRHPack  = Register<0x40011004, 32, ReadWriteMode, GPIOCCRHBase, T...> ;

  struct GPIOCIDRBase {} ;

  struct IDR : public RegisterBase<0x40011008, 32, ReadMode>
  {
    using IDR0 = GPIOC_IDR_IDR0_Values<GPIOC::IDR, 0, 1, ReadMode, GPIOCIDRBase> ;
    using IDR1 = GPIOC_IDR_IDR1_Values<GPIOC::IDR, 1, 1, ReadMode, GPIOCIDRBase> ;
    using IDR2 = GPIOC_IDR_IDR2_Values<GPIOC::IDR, 2, 1, ReadMode, GPIOCIDRBase> ;
    using IDR3 = GPIOC_IDR_IDR3_Values<GPIOC::IDR, 3, 1, ReadMode, GPIOCIDRBase> ;
    using IDR4 = GPIOC_IDR_IDR4_Values<GPIOC::IDR, 4, 1, ReadMode, GPIOCIDRBase> ;
    using IDR5 = GPIOC_IDR_IDR5_Values<GPIOC::IDR, 5, 1, ReadMode, GPIOCIDRBase> ;
    using IDR6 = GPIOC_IDR_IDR6_Values<GPIOC::IDR, 6, 1, ReadMode, GPIOCIDRBase> ;
    using IDR7 = GPIOC_IDR_IDR7_Values<GPIOC::IDR, 7, 1, ReadMode, GPIOCIDRBase> ;
    using IDR8 = GPIOC_IDR_IDR8_Values<GPIOC::IDR, 8, 1, ReadMode, GPIOCIDRBase> ;
    using IDR9 = GPIOC_IDR_IDR9_Values<GPIOC::IDR, 9, 1, ReadMode, GPIOCIDRBase> ;
    using IDR10 = GPIOC_IDR_IDR10_Values<GPIOC::IDR, 10, 1, ReadMode, GPIOCIDRBase> ;
    using IDR11 = GPIOC_IDR_IDR11_Values<GPIOC::IDR, 11, 1, ReadMode, GPIOCIDRBase> ;
    using IDR12 = GPIOC_IDR_IDR12_Values<GPIOC::IDR, 12, 1, ReadMode, GPIOCIDRBase> ;
    using IDR13 = GPIOC_IDR_IDR13_Values<GPIOC::IDR, 13, 1, ReadMode, GPIOCIDRBase> ;
    using IDR14 = GPIOC_IDR_IDR14_Values<GPIOC::IDR, 14, 1, ReadMode, GPIOCIDRBase> ;
    using IDR15 = GPIOC_IDR_IDR15_Values<GPIOC::IDR, 15, 1, ReadMode, GPIOCIDRBase> ;
    using FieldValues = GPIOC_IDR_IDR15_Values<GPIOC::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40011008, 32, ReadMode, GPIOCIDRBase, T...> ;

  struct GPIOCODRBase {} ;

  struct ODR : public RegisterBase<0x4001100C, 32, ReadWriteMode>
  {
    using ODR0 = GPIOC_ODR_ODR0_Values<GPIOC::ODR, 0, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR1 = GPIOC_ODR_ODR1_Values<GPIOC::ODR, 1, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR2 = GPIOC_ODR_ODR2_Values<GPIOC::ODR, 2, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR3 = GPIOC_ODR_ODR3_Values<GPIOC::ODR, 3, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR4 = GPIOC_ODR_ODR4_Values<GPIOC::ODR, 4, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR5 = GPIOC_ODR_ODR5_Values<GPIOC::ODR, 5, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR6 = GPIOC_ODR_ODR6_Values<GPIOC::ODR, 6, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR7 = GPIOC_ODR_ODR7_Values<GPIOC::ODR, 7, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR8 = GPIOC_ODR_ODR8_Values<GPIOC::ODR, 8, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR9 = GPIOC_ODR_ODR9_Values<GPIOC::ODR, 9, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR10 = GPIOC_ODR_ODR10_Values<GPIOC::ODR, 10, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR11 = GPIOC_ODR_ODR11_Values<GPIOC::ODR, 11, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR12 = GPIOC_ODR_ODR12_Values<GPIOC::ODR, 12, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR13 = GPIOC_ODR_ODR13_Values<GPIOC::ODR, 13, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR14 = GPIOC_ODR_ODR14_Values<GPIOC::ODR, 14, 1, ReadWriteMode, GPIOCODRBase> ;
    using ODR15 = GPIOC_ODR_ODR15_Values<GPIOC::ODR, 15, 1, ReadWriteMode, GPIOCODRBase> ;
    using FieldValues = GPIOC_ODR_ODR15_Values<GPIOC::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x4001100C, 32, ReadWriteMode, GPIOCODRBase, T...> ;

  struct GPIOCBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40011010, 32, WriteMode>
  {
    using BS0 = GPIOC_BSRR_BS0_Values<GPIOC::BSRR, 0, 1, WriteMode, GPIOCBSRRBase> ;
    using BS1 = GPIOC_BSRR_BS1_Values<GPIOC::BSRR, 1, 1, WriteMode, GPIOCBSRRBase> ;
    using BS2 = GPIOC_BSRR_BS2_Values<GPIOC::BSRR, 2, 1, WriteMode, GPIOCBSRRBase> ;
    using BS3 = GPIOC_BSRR_BS3_Values<GPIOC::BSRR, 3, 1, WriteMode, GPIOCBSRRBase> ;
    using BS4 = GPIOC_BSRR_BS4_Values<GPIOC::BSRR, 4, 1, WriteMode, GPIOCBSRRBase> ;
    using BS5 = GPIOC_BSRR_BS5_Values<GPIOC::BSRR, 5, 1, WriteMode, GPIOCBSRRBase> ;
    using BS6 = GPIOC_BSRR_BS6_Values<GPIOC::BSRR, 6, 1, WriteMode, GPIOCBSRRBase> ;
    using BS7 = GPIOC_BSRR_BS7_Values<GPIOC::BSRR, 7, 1, WriteMode, GPIOCBSRRBase> ;
    using BS8 = GPIOC_BSRR_BS8_Values<GPIOC::BSRR, 8, 1, WriteMode, GPIOCBSRRBase> ;
    using BS9 = GPIOC_BSRR_BS9_Values<GPIOC::BSRR, 9, 1, WriteMode, GPIOCBSRRBase> ;
    using BS10 = GPIOC_BSRR_BS10_Values<GPIOC::BSRR, 10, 1, WriteMode, GPIOCBSRRBase> ;
    using BS11 = GPIOC_BSRR_BS11_Values<GPIOC::BSRR, 11, 1, WriteMode, GPIOCBSRRBase> ;
    using BS12 = GPIOC_BSRR_BS12_Values<GPIOC::BSRR, 12, 1, WriteMode, GPIOCBSRRBase> ;
    using BS13 = GPIOC_BSRR_BS13_Values<GPIOC::BSRR, 13, 1, WriteMode, GPIOCBSRRBase> ;
    using BS14 = GPIOC_BSRR_BS14_Values<GPIOC::BSRR, 14, 1, WriteMode, GPIOCBSRRBase> ;
    using BS15 = GPIOC_BSRR_BS15_Values<GPIOC::BSRR, 15, 1, WriteMode, GPIOCBSRRBase> ;
    using BR0 = GPIOC_BSRR_BR0_Values<GPIOC::BSRR, 16, 1, WriteMode, GPIOCBSRRBase> ;
    using BR1 = GPIOC_BSRR_BR1_Values<GPIOC::BSRR, 17, 1, WriteMode, GPIOCBSRRBase> ;
    using BR2 = GPIOC_BSRR_BR2_Values<GPIOC::BSRR, 18, 1, WriteMode, GPIOCBSRRBase> ;
    using BR3 = GPIOC_BSRR_BR3_Values<GPIOC::BSRR, 19, 1, WriteMode, GPIOCBSRRBase> ;
    using BR4 = GPIOC_BSRR_BR4_Values<GPIOC::BSRR, 20, 1, WriteMode, GPIOCBSRRBase> ;
    using BR5 = GPIOC_BSRR_BR5_Values<GPIOC::BSRR, 21, 1, WriteMode, GPIOCBSRRBase> ;
    using BR6 = GPIOC_BSRR_BR6_Values<GPIOC::BSRR, 22, 1, WriteMode, GPIOCBSRRBase> ;
    using BR7 = GPIOC_BSRR_BR7_Values<GPIOC::BSRR, 23, 1, WriteMode, GPIOCBSRRBase> ;
    using BR8 = GPIOC_BSRR_BR8_Values<GPIOC::BSRR, 24, 1, WriteMode, GPIOCBSRRBase> ;
    using BR9 = GPIOC_BSRR_BR9_Values<GPIOC::BSRR, 25, 1, WriteMode, GPIOCBSRRBase> ;
    using BR10 = GPIOC_BSRR_BR10_Values<GPIOC::BSRR, 26, 1, WriteMode, GPIOCBSRRBase> ;
    using BR11 = GPIOC_BSRR_BR11_Values<GPIOC::BSRR, 27, 1, WriteMode, GPIOCBSRRBase> ;
    using BR12 = GPIOC_BSRR_BR12_Values<GPIOC::BSRR, 28, 1, WriteMode, GPIOCBSRRBase> ;
    using BR13 = GPIOC_BSRR_BR13_Values<GPIOC::BSRR, 29, 1, WriteMode, GPIOCBSRRBase> ;
    using BR14 = GPIOC_BSRR_BR14_Values<GPIOC::BSRR, 30, 1, WriteMode, GPIOCBSRRBase> ;
    using BR15 = GPIOC_BSRR_BR15_Values<GPIOC::BSRR, 31, 1, WriteMode, GPIOCBSRRBase> ;
    using FieldValues = GPIOC_BSRR_BR15_Values<GPIOC::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40011010, 32, WriteMode, GPIOCBSRRBase, T...> ;

  struct GPIOCBRRBase {} ;

  struct BRR : public RegisterBase<0x40011014, 32, WriteMode>
  {
    using BR0 = GPIOC_BRR_BR0_Values<GPIOC::BRR, 0, 1, WriteMode, GPIOCBRRBase> ;
    using BR1 = GPIOC_BRR_BR1_Values<GPIOC::BRR, 1, 1, WriteMode, GPIOCBRRBase> ;
    using BR2 = GPIOC_BRR_BR2_Values<GPIOC::BRR, 2, 1, WriteMode, GPIOCBRRBase> ;
    using BR3 = GPIOC_BRR_BR3_Values<GPIOC::BRR, 3, 1, WriteMode, GPIOCBRRBase> ;
    using BR4 = GPIOC_BRR_BR4_Values<GPIOC::BRR, 4, 1, WriteMode, GPIOCBRRBase> ;
    using BR5 = GPIOC_BRR_BR5_Values<GPIOC::BRR, 5, 1, WriteMode, GPIOCBRRBase> ;
    using BR6 = GPIOC_BRR_BR6_Values<GPIOC::BRR, 6, 1, WriteMode, GPIOCBRRBase> ;
    using BR7 = GPIOC_BRR_BR7_Values<GPIOC::BRR, 7, 1, WriteMode, GPIOCBRRBase> ;
    using BR8 = GPIOC_BRR_BR8_Values<GPIOC::BRR, 8, 1, WriteMode, GPIOCBRRBase> ;
    using BR9 = GPIOC_BRR_BR9_Values<GPIOC::BRR, 9, 1, WriteMode, GPIOCBRRBase> ;
    using BR10 = GPIOC_BRR_BR10_Values<GPIOC::BRR, 10, 1, WriteMode, GPIOCBRRBase> ;
    using BR11 = GPIOC_BRR_BR11_Values<GPIOC::BRR, 11, 1, WriteMode, GPIOCBRRBase> ;
    using BR12 = GPIOC_BRR_BR12_Values<GPIOC::BRR, 12, 1, WriteMode, GPIOCBRRBase> ;
    using BR13 = GPIOC_BRR_BR13_Values<GPIOC::BRR, 13, 1, WriteMode, GPIOCBRRBase> ;
    using BR14 = GPIOC_BRR_BR14_Values<GPIOC::BRR, 14, 1, WriteMode, GPIOCBRRBase> ;
    using BR15 = GPIOC_BRR_BR15_Values<GPIOC::BRR, 15, 1, WriteMode, GPIOCBRRBase> ;
    using FieldValues = GPIOC_BRR_BR15_Values<GPIOC::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40011014, 32, WriteMode, GPIOCBRRBase, T...> ;

  struct GPIOCLCKRBase {} ;

  struct LCKR : public RegisterBase<0x40011018, 32, ReadWriteMode>
  {
    using LCK0 = GPIOC_LCKR_LCK0_Values<GPIOC::LCKR, 0, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK1 = GPIOC_LCKR_LCK1_Values<GPIOC::LCKR, 1, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK2 = GPIOC_LCKR_LCK2_Values<GPIOC::LCKR, 2, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK3 = GPIOC_LCKR_LCK3_Values<GPIOC::LCKR, 3, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK4 = GPIOC_LCKR_LCK4_Values<GPIOC::LCKR, 4, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK5 = GPIOC_LCKR_LCK5_Values<GPIOC::LCKR, 5, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK6 = GPIOC_LCKR_LCK6_Values<GPIOC::LCKR, 6, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK7 = GPIOC_LCKR_LCK7_Values<GPIOC::LCKR, 7, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK8 = GPIOC_LCKR_LCK8_Values<GPIOC::LCKR, 8, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK9 = GPIOC_LCKR_LCK9_Values<GPIOC::LCKR, 9, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK10 = GPIOC_LCKR_LCK10_Values<GPIOC::LCKR, 10, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK11 = GPIOC_LCKR_LCK11_Values<GPIOC::LCKR, 11, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK12 = GPIOC_LCKR_LCK12_Values<GPIOC::LCKR, 12, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK13 = GPIOC_LCKR_LCK13_Values<GPIOC::LCKR, 13, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK14 = GPIOC_LCKR_LCK14_Values<GPIOC::LCKR, 14, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCK15 = GPIOC_LCKR_LCK15_Values<GPIOC::LCKR, 15, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using LCKK = GPIOC_LCKR_LCKK_Values<GPIOC::LCKR, 16, 1, ReadWriteMode, GPIOCLCKRBase> ;
    using FieldValues = GPIOC_LCKR_LCKK_Values<GPIOC::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x40011018, 32, ReadWriteMode, GPIOCLCKRBase, T...> ;

} ;

#endif //#if !defined(GPIOCREGISTERS_HPP)
