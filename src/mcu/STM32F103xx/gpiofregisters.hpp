/*******************************************************************************
* Filename      : gpiofregisters.hpp
*
* Details       : General purpose I/O. This header file is auto-generated for
*                 STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(GPIOFREGISTERS_HPP)
#define GPIOFREGISTERS_HPP

#include "gpioffieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOF
{
  struct GPIOFCRLBase {} ;

  struct CRL : public RegisterBase<0x40011C00, 32, ReadWriteMode>
  {
    using MODE0 = GPIOF_CRL_MODE0_Values<GPIOF::CRL, 0, 2, ReadWriteMode, GPIOFCRLBase> ;
    using CNF0 = GPIOF_CRL_CNF0_Values<GPIOF::CRL, 2, 2, ReadWriteMode, GPIOFCRLBase> ;
    using MODE1 = GPIOF_CRL_MODE1_Values<GPIOF::CRL, 4, 2, ReadWriteMode, GPIOFCRLBase> ;
    using CNF1 = GPIOF_CRL_CNF1_Values<GPIOF::CRL, 6, 2, ReadWriteMode, GPIOFCRLBase> ;
    using MODE2 = GPIOF_CRL_MODE2_Values<GPIOF::CRL, 8, 2, ReadWriteMode, GPIOFCRLBase> ;
    using CNF2 = GPIOF_CRL_CNF2_Values<GPIOF::CRL, 10, 2, ReadWriteMode, GPIOFCRLBase> ;
    using MODE3 = GPIOF_CRL_MODE3_Values<GPIOF::CRL, 12, 2, ReadWriteMode, GPIOFCRLBase> ;
    using CNF3 = GPIOF_CRL_CNF3_Values<GPIOF::CRL, 14, 2, ReadWriteMode, GPIOFCRLBase> ;
    using MODE4 = GPIOF_CRL_MODE4_Values<GPIOF::CRL, 16, 2, ReadWriteMode, GPIOFCRLBase> ;
    using CNF4 = GPIOF_CRL_CNF4_Values<GPIOF::CRL, 18, 2, ReadWriteMode, GPIOFCRLBase> ;
    using MODE5 = GPIOF_CRL_MODE5_Values<GPIOF::CRL, 20, 2, ReadWriteMode, GPIOFCRLBase> ;
    using CNF5 = GPIOF_CRL_CNF5_Values<GPIOF::CRL, 22, 2, ReadWriteMode, GPIOFCRLBase> ;
    using MODE6 = GPIOF_CRL_MODE6_Values<GPIOF::CRL, 24, 2, ReadWriteMode, GPIOFCRLBase> ;
    using CNF6 = GPIOF_CRL_CNF6_Values<GPIOF::CRL, 26, 2, ReadWriteMode, GPIOFCRLBase> ;
    using MODE7 = GPIOF_CRL_MODE7_Values<GPIOF::CRL, 28, 2, ReadWriteMode, GPIOFCRLBase> ;
    using CNF7 = GPIOF_CRL_CNF7_Values<GPIOF::CRL, 30, 2, ReadWriteMode, GPIOFCRLBase> ;
    using FieldValues = GPIOF_CRL_CNF7_Values<GPIOF::CRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRLPack  = Register<0x40011C00, 32, ReadWriteMode, GPIOFCRLBase, T...> ;

  struct GPIOFCRHBase {} ;

  struct CRH : public RegisterBase<0x40011C04, 32, ReadWriteMode>
  {
    using MODE8 = GPIOF_CRH_MODE8_Values<GPIOF::CRH, 0, 2, ReadWriteMode, GPIOFCRHBase> ;
    using CNF8 = GPIOF_CRH_CNF8_Values<GPIOF::CRH, 2, 2, ReadWriteMode, GPIOFCRHBase> ;
    using MODE9 = GPIOF_CRH_MODE9_Values<GPIOF::CRH, 4, 2, ReadWriteMode, GPIOFCRHBase> ;
    using CNF9 = GPIOF_CRH_CNF9_Values<GPIOF::CRH, 6, 2, ReadWriteMode, GPIOFCRHBase> ;
    using MODE10 = GPIOF_CRH_MODE10_Values<GPIOF::CRH, 8, 2, ReadWriteMode, GPIOFCRHBase> ;
    using CNF10 = GPIOF_CRH_CNF10_Values<GPIOF::CRH, 10, 2, ReadWriteMode, GPIOFCRHBase> ;
    using MODE11 = GPIOF_CRH_MODE11_Values<GPIOF::CRH, 12, 2, ReadWriteMode, GPIOFCRHBase> ;
    using CNF11 = GPIOF_CRH_CNF11_Values<GPIOF::CRH, 14, 2, ReadWriteMode, GPIOFCRHBase> ;
    using MODE12 = GPIOF_CRH_MODE12_Values<GPIOF::CRH, 16, 2, ReadWriteMode, GPIOFCRHBase> ;
    using CNF12 = GPIOF_CRH_CNF12_Values<GPIOF::CRH, 18, 2, ReadWriteMode, GPIOFCRHBase> ;
    using MODE13 = GPIOF_CRH_MODE13_Values<GPIOF::CRH, 20, 2, ReadWriteMode, GPIOFCRHBase> ;
    using CNF13 = GPIOF_CRH_CNF13_Values<GPIOF::CRH, 22, 2, ReadWriteMode, GPIOFCRHBase> ;
    using MODE14 = GPIOF_CRH_MODE14_Values<GPIOF::CRH, 24, 2, ReadWriteMode, GPIOFCRHBase> ;
    using CNF14 = GPIOF_CRH_CNF14_Values<GPIOF::CRH, 26, 2, ReadWriteMode, GPIOFCRHBase> ;
    using MODE15 = GPIOF_CRH_MODE15_Values<GPIOF::CRH, 28, 2, ReadWriteMode, GPIOFCRHBase> ;
    using CNF15 = GPIOF_CRH_CNF15_Values<GPIOF::CRH, 30, 2, ReadWriteMode, GPIOFCRHBase> ;
    using FieldValues = GPIOF_CRH_CNF15_Values<GPIOF::CRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRHPack  = Register<0x40011C04, 32, ReadWriteMode, GPIOFCRHBase, T...> ;

  struct GPIOFIDRBase {} ;

  struct IDR : public RegisterBase<0x40011C08, 32, ReadMode>
  {
    using IDR0 = GPIOF_IDR_IDR0_Values<GPIOF::IDR, 0, 1, ReadMode, GPIOFIDRBase> ;
    using IDR1 = GPIOF_IDR_IDR1_Values<GPIOF::IDR, 1, 1, ReadMode, GPIOFIDRBase> ;
    using IDR2 = GPIOF_IDR_IDR2_Values<GPIOF::IDR, 2, 1, ReadMode, GPIOFIDRBase> ;
    using IDR3 = GPIOF_IDR_IDR3_Values<GPIOF::IDR, 3, 1, ReadMode, GPIOFIDRBase> ;
    using IDR4 = GPIOF_IDR_IDR4_Values<GPIOF::IDR, 4, 1, ReadMode, GPIOFIDRBase> ;
    using IDR5 = GPIOF_IDR_IDR5_Values<GPIOF::IDR, 5, 1, ReadMode, GPIOFIDRBase> ;
    using IDR6 = GPIOF_IDR_IDR6_Values<GPIOF::IDR, 6, 1, ReadMode, GPIOFIDRBase> ;
    using IDR7 = GPIOF_IDR_IDR7_Values<GPIOF::IDR, 7, 1, ReadMode, GPIOFIDRBase> ;
    using IDR8 = GPIOF_IDR_IDR8_Values<GPIOF::IDR, 8, 1, ReadMode, GPIOFIDRBase> ;
    using IDR9 = GPIOF_IDR_IDR9_Values<GPIOF::IDR, 9, 1, ReadMode, GPIOFIDRBase> ;
    using IDR10 = GPIOF_IDR_IDR10_Values<GPIOF::IDR, 10, 1, ReadMode, GPIOFIDRBase> ;
    using IDR11 = GPIOF_IDR_IDR11_Values<GPIOF::IDR, 11, 1, ReadMode, GPIOFIDRBase> ;
    using IDR12 = GPIOF_IDR_IDR12_Values<GPIOF::IDR, 12, 1, ReadMode, GPIOFIDRBase> ;
    using IDR13 = GPIOF_IDR_IDR13_Values<GPIOF::IDR, 13, 1, ReadMode, GPIOFIDRBase> ;
    using IDR14 = GPIOF_IDR_IDR14_Values<GPIOF::IDR, 14, 1, ReadMode, GPIOFIDRBase> ;
    using IDR15 = GPIOF_IDR_IDR15_Values<GPIOF::IDR, 15, 1, ReadMode, GPIOFIDRBase> ;
    using FieldValues = GPIOF_IDR_IDR15_Values<GPIOF::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40011C08, 32, ReadMode, GPIOFIDRBase, T...> ;

  struct GPIOFODRBase {} ;

  struct ODR : public RegisterBase<0x40011C0C, 32, ReadWriteMode>
  {
    using ODR0 = GPIOF_ODR_ODR0_Values<GPIOF::ODR, 0, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR1 = GPIOF_ODR_ODR1_Values<GPIOF::ODR, 1, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR2 = GPIOF_ODR_ODR2_Values<GPIOF::ODR, 2, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR3 = GPIOF_ODR_ODR3_Values<GPIOF::ODR, 3, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR4 = GPIOF_ODR_ODR4_Values<GPIOF::ODR, 4, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR5 = GPIOF_ODR_ODR5_Values<GPIOF::ODR, 5, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR6 = GPIOF_ODR_ODR6_Values<GPIOF::ODR, 6, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR7 = GPIOF_ODR_ODR7_Values<GPIOF::ODR, 7, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR8 = GPIOF_ODR_ODR8_Values<GPIOF::ODR, 8, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR9 = GPIOF_ODR_ODR9_Values<GPIOF::ODR, 9, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR10 = GPIOF_ODR_ODR10_Values<GPIOF::ODR, 10, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR11 = GPIOF_ODR_ODR11_Values<GPIOF::ODR, 11, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR12 = GPIOF_ODR_ODR12_Values<GPIOF::ODR, 12, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR13 = GPIOF_ODR_ODR13_Values<GPIOF::ODR, 13, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR14 = GPIOF_ODR_ODR14_Values<GPIOF::ODR, 14, 1, ReadWriteMode, GPIOFODRBase> ;
    using ODR15 = GPIOF_ODR_ODR15_Values<GPIOF::ODR, 15, 1, ReadWriteMode, GPIOFODRBase> ;
    using FieldValues = GPIOF_ODR_ODR15_Values<GPIOF::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x40011C0C, 32, ReadWriteMode, GPIOFODRBase, T...> ;

  struct GPIOFBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40011C10, 32, WriteMode>
  {
    using BS0 = GPIOF_BSRR_BS0_Values<GPIOF::BSRR, 0, 1, WriteMode, GPIOFBSRRBase> ;
    using BS1 = GPIOF_BSRR_BS1_Values<GPIOF::BSRR, 1, 1, WriteMode, GPIOFBSRRBase> ;
    using BS2 = GPIOF_BSRR_BS2_Values<GPIOF::BSRR, 2, 1, WriteMode, GPIOFBSRRBase> ;
    using BS3 = GPIOF_BSRR_BS3_Values<GPIOF::BSRR, 3, 1, WriteMode, GPIOFBSRRBase> ;
    using BS4 = GPIOF_BSRR_BS4_Values<GPIOF::BSRR, 4, 1, WriteMode, GPIOFBSRRBase> ;
    using BS5 = GPIOF_BSRR_BS5_Values<GPIOF::BSRR, 5, 1, WriteMode, GPIOFBSRRBase> ;
    using BS6 = GPIOF_BSRR_BS6_Values<GPIOF::BSRR, 6, 1, WriteMode, GPIOFBSRRBase> ;
    using BS7 = GPIOF_BSRR_BS7_Values<GPIOF::BSRR, 7, 1, WriteMode, GPIOFBSRRBase> ;
    using BS8 = GPIOF_BSRR_BS8_Values<GPIOF::BSRR, 8, 1, WriteMode, GPIOFBSRRBase> ;
    using BS9 = GPIOF_BSRR_BS9_Values<GPIOF::BSRR, 9, 1, WriteMode, GPIOFBSRRBase> ;
    using BS10 = GPIOF_BSRR_BS10_Values<GPIOF::BSRR, 10, 1, WriteMode, GPIOFBSRRBase> ;
    using BS11 = GPIOF_BSRR_BS11_Values<GPIOF::BSRR, 11, 1, WriteMode, GPIOFBSRRBase> ;
    using BS12 = GPIOF_BSRR_BS12_Values<GPIOF::BSRR, 12, 1, WriteMode, GPIOFBSRRBase> ;
    using BS13 = GPIOF_BSRR_BS13_Values<GPIOF::BSRR, 13, 1, WriteMode, GPIOFBSRRBase> ;
    using BS14 = GPIOF_BSRR_BS14_Values<GPIOF::BSRR, 14, 1, WriteMode, GPIOFBSRRBase> ;
    using BS15 = GPIOF_BSRR_BS15_Values<GPIOF::BSRR, 15, 1, WriteMode, GPIOFBSRRBase> ;
    using BR0 = GPIOF_BSRR_BR0_Values<GPIOF::BSRR, 16, 1, WriteMode, GPIOFBSRRBase> ;
    using BR1 = GPIOF_BSRR_BR1_Values<GPIOF::BSRR, 17, 1, WriteMode, GPIOFBSRRBase> ;
    using BR2 = GPIOF_BSRR_BR2_Values<GPIOF::BSRR, 18, 1, WriteMode, GPIOFBSRRBase> ;
    using BR3 = GPIOF_BSRR_BR3_Values<GPIOF::BSRR, 19, 1, WriteMode, GPIOFBSRRBase> ;
    using BR4 = GPIOF_BSRR_BR4_Values<GPIOF::BSRR, 20, 1, WriteMode, GPIOFBSRRBase> ;
    using BR5 = GPIOF_BSRR_BR5_Values<GPIOF::BSRR, 21, 1, WriteMode, GPIOFBSRRBase> ;
    using BR6 = GPIOF_BSRR_BR6_Values<GPIOF::BSRR, 22, 1, WriteMode, GPIOFBSRRBase> ;
    using BR7 = GPIOF_BSRR_BR7_Values<GPIOF::BSRR, 23, 1, WriteMode, GPIOFBSRRBase> ;
    using BR8 = GPIOF_BSRR_BR8_Values<GPIOF::BSRR, 24, 1, WriteMode, GPIOFBSRRBase> ;
    using BR9 = GPIOF_BSRR_BR9_Values<GPIOF::BSRR, 25, 1, WriteMode, GPIOFBSRRBase> ;
    using BR10 = GPIOF_BSRR_BR10_Values<GPIOF::BSRR, 26, 1, WriteMode, GPIOFBSRRBase> ;
    using BR11 = GPIOF_BSRR_BR11_Values<GPIOF::BSRR, 27, 1, WriteMode, GPIOFBSRRBase> ;
    using BR12 = GPIOF_BSRR_BR12_Values<GPIOF::BSRR, 28, 1, WriteMode, GPIOFBSRRBase> ;
    using BR13 = GPIOF_BSRR_BR13_Values<GPIOF::BSRR, 29, 1, WriteMode, GPIOFBSRRBase> ;
    using BR14 = GPIOF_BSRR_BR14_Values<GPIOF::BSRR, 30, 1, WriteMode, GPIOFBSRRBase> ;
    using BR15 = GPIOF_BSRR_BR15_Values<GPIOF::BSRR, 31, 1, WriteMode, GPIOFBSRRBase> ;
    using FieldValues = GPIOF_BSRR_BR15_Values<GPIOF::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40011C10, 32, WriteMode, GPIOFBSRRBase, T...> ;

  struct GPIOFBRRBase {} ;

  struct BRR : public RegisterBase<0x40011C14, 32, WriteMode>
  {
    using BR0 = GPIOF_BRR_BR0_Values<GPIOF::BRR, 0, 1, WriteMode, GPIOFBRRBase> ;
    using BR1 = GPIOF_BRR_BR1_Values<GPIOF::BRR, 1, 1, WriteMode, GPIOFBRRBase> ;
    using BR2 = GPIOF_BRR_BR2_Values<GPIOF::BRR, 2, 1, WriteMode, GPIOFBRRBase> ;
    using BR3 = GPIOF_BRR_BR3_Values<GPIOF::BRR, 3, 1, WriteMode, GPIOFBRRBase> ;
    using BR4 = GPIOF_BRR_BR4_Values<GPIOF::BRR, 4, 1, WriteMode, GPIOFBRRBase> ;
    using BR5 = GPIOF_BRR_BR5_Values<GPIOF::BRR, 5, 1, WriteMode, GPIOFBRRBase> ;
    using BR6 = GPIOF_BRR_BR6_Values<GPIOF::BRR, 6, 1, WriteMode, GPIOFBRRBase> ;
    using BR7 = GPIOF_BRR_BR7_Values<GPIOF::BRR, 7, 1, WriteMode, GPIOFBRRBase> ;
    using BR8 = GPIOF_BRR_BR8_Values<GPIOF::BRR, 8, 1, WriteMode, GPIOFBRRBase> ;
    using BR9 = GPIOF_BRR_BR9_Values<GPIOF::BRR, 9, 1, WriteMode, GPIOFBRRBase> ;
    using BR10 = GPIOF_BRR_BR10_Values<GPIOF::BRR, 10, 1, WriteMode, GPIOFBRRBase> ;
    using BR11 = GPIOF_BRR_BR11_Values<GPIOF::BRR, 11, 1, WriteMode, GPIOFBRRBase> ;
    using BR12 = GPIOF_BRR_BR12_Values<GPIOF::BRR, 12, 1, WriteMode, GPIOFBRRBase> ;
    using BR13 = GPIOF_BRR_BR13_Values<GPIOF::BRR, 13, 1, WriteMode, GPIOFBRRBase> ;
    using BR14 = GPIOF_BRR_BR14_Values<GPIOF::BRR, 14, 1, WriteMode, GPIOFBRRBase> ;
    using BR15 = GPIOF_BRR_BR15_Values<GPIOF::BRR, 15, 1, WriteMode, GPIOFBRRBase> ;
    using FieldValues = GPIOF_BRR_BR15_Values<GPIOF::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40011C14, 32, WriteMode, GPIOFBRRBase, T...> ;

  struct GPIOFLCKRBase {} ;

  struct LCKR : public RegisterBase<0x40011C18, 32, ReadWriteMode>
  {
    using LCK0 = GPIOF_LCKR_LCK0_Values<GPIOF::LCKR, 0, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK1 = GPIOF_LCKR_LCK1_Values<GPIOF::LCKR, 1, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK2 = GPIOF_LCKR_LCK2_Values<GPIOF::LCKR, 2, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK3 = GPIOF_LCKR_LCK3_Values<GPIOF::LCKR, 3, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK4 = GPIOF_LCKR_LCK4_Values<GPIOF::LCKR, 4, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK5 = GPIOF_LCKR_LCK5_Values<GPIOF::LCKR, 5, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK6 = GPIOF_LCKR_LCK6_Values<GPIOF::LCKR, 6, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK7 = GPIOF_LCKR_LCK7_Values<GPIOF::LCKR, 7, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK8 = GPIOF_LCKR_LCK8_Values<GPIOF::LCKR, 8, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK9 = GPIOF_LCKR_LCK9_Values<GPIOF::LCKR, 9, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK10 = GPIOF_LCKR_LCK10_Values<GPIOF::LCKR, 10, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK11 = GPIOF_LCKR_LCK11_Values<GPIOF::LCKR, 11, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK12 = GPIOF_LCKR_LCK12_Values<GPIOF::LCKR, 12, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK13 = GPIOF_LCKR_LCK13_Values<GPIOF::LCKR, 13, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK14 = GPIOF_LCKR_LCK14_Values<GPIOF::LCKR, 14, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK15 = GPIOF_LCKR_LCK15_Values<GPIOF::LCKR, 15, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCKK = GPIOF_LCKR_LCKK_Values<GPIOF::LCKR, 16, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using FieldValues = GPIOF_LCKR_LCKK_Values<GPIOF::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x40011C18, 32, ReadWriteMode, GPIOFLCKRBase, T...> ;

} ;

#endif //#if !defined(GPIOFREGISTERS_HPP)
