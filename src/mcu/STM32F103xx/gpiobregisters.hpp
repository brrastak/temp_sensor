/*******************************************************************************
* Filename      : gpiobregisters.hpp
*
* Details       : General purpose I/O. This header file is auto-generated for
*                 STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(GPIOBREGISTERS_HPP)
#define GPIOBREGISTERS_HPP

#include "gpiobfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOB
{
  struct GPIOBCRLBase {} ;

  struct CRL : public RegisterBase<0x40010C00, 32, ReadWriteMode>
  {
    using MODE0 = GPIOB_CRL_MODE0_Values<GPIOB::CRL, 0, 2, ReadWriteMode, GPIOBCRLBase> ;
    using CNF0 = GPIOB_CRL_CNF0_Values<GPIOB::CRL, 2, 2, ReadWriteMode, GPIOBCRLBase> ;
    using MODE1 = GPIOB_CRL_MODE1_Values<GPIOB::CRL, 4, 2, ReadWriteMode, GPIOBCRLBase> ;
    using CNF1 = GPIOB_CRL_CNF1_Values<GPIOB::CRL, 6, 2, ReadWriteMode, GPIOBCRLBase> ;
    using MODE2 = GPIOB_CRL_MODE2_Values<GPIOB::CRL, 8, 2, ReadWriteMode, GPIOBCRLBase> ;
    using CNF2 = GPIOB_CRL_CNF2_Values<GPIOB::CRL, 10, 2, ReadWriteMode, GPIOBCRLBase> ;
    using MODE3 = GPIOB_CRL_MODE3_Values<GPIOB::CRL, 12, 2, ReadWriteMode, GPIOBCRLBase> ;
    using CNF3 = GPIOB_CRL_CNF3_Values<GPIOB::CRL, 14, 2, ReadWriteMode, GPIOBCRLBase> ;
    using MODE4 = GPIOB_CRL_MODE4_Values<GPIOB::CRL, 16, 2, ReadWriteMode, GPIOBCRLBase> ;
    using CNF4 = GPIOB_CRL_CNF4_Values<GPIOB::CRL, 18, 2, ReadWriteMode, GPIOBCRLBase> ;
    using MODE5 = GPIOB_CRL_MODE5_Values<GPIOB::CRL, 20, 2, ReadWriteMode, GPIOBCRLBase> ;
    using CNF5 = GPIOB_CRL_CNF5_Values<GPIOB::CRL, 22, 2, ReadWriteMode, GPIOBCRLBase> ;
    using MODE6 = GPIOB_CRL_MODE6_Values<GPIOB::CRL, 24, 2, ReadWriteMode, GPIOBCRLBase> ;
    using CNF6 = GPIOB_CRL_CNF6_Values<GPIOB::CRL, 26, 2, ReadWriteMode, GPIOBCRLBase> ;
    using MODE7 = GPIOB_CRL_MODE7_Values<GPIOB::CRL, 28, 2, ReadWriteMode, GPIOBCRLBase> ;
    using CNF7 = GPIOB_CRL_CNF7_Values<GPIOB::CRL, 30, 2, ReadWriteMode, GPIOBCRLBase> ;
    using FieldValues = GPIOB_CRL_CNF7_Values<GPIOB::CRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRLPack  = Register<0x40010C00, 32, ReadWriteMode, GPIOBCRLBase, T...> ;

  struct GPIOBCRHBase {} ;

  struct CRH : public RegisterBase<0x40010C04, 32, ReadWriteMode>
  {
    using MODE8 = GPIOB_CRH_MODE8_Values<GPIOB::CRH, 0, 2, ReadWriteMode, GPIOBCRHBase> ;
    using CNF8 = GPIOB_CRH_CNF8_Values<GPIOB::CRH, 2, 2, ReadWriteMode, GPIOBCRHBase> ;
    using MODE9 = GPIOB_CRH_MODE9_Values<GPIOB::CRH, 4, 2, ReadWriteMode, GPIOBCRHBase> ;
    using CNF9 = GPIOB_CRH_CNF9_Values<GPIOB::CRH, 6, 2, ReadWriteMode, GPIOBCRHBase> ;
    using MODE10 = GPIOB_CRH_MODE10_Values<GPIOB::CRH, 8, 2, ReadWriteMode, GPIOBCRHBase> ;
    using CNF10 = GPIOB_CRH_CNF10_Values<GPIOB::CRH, 10, 2, ReadWriteMode, GPIOBCRHBase> ;
    using MODE11 = GPIOB_CRH_MODE11_Values<GPIOB::CRH, 12, 2, ReadWriteMode, GPIOBCRHBase> ;
    using CNF11 = GPIOB_CRH_CNF11_Values<GPIOB::CRH, 14, 2, ReadWriteMode, GPIOBCRHBase> ;
    using MODE12 = GPIOB_CRH_MODE12_Values<GPIOB::CRH, 16, 2, ReadWriteMode, GPIOBCRHBase> ;
    using CNF12 = GPIOB_CRH_CNF12_Values<GPIOB::CRH, 18, 2, ReadWriteMode, GPIOBCRHBase> ;
    using MODE13 = GPIOB_CRH_MODE13_Values<GPIOB::CRH, 20, 2, ReadWriteMode, GPIOBCRHBase> ;
    using CNF13 = GPIOB_CRH_CNF13_Values<GPIOB::CRH, 22, 2, ReadWriteMode, GPIOBCRHBase> ;
    using MODE14 = GPIOB_CRH_MODE14_Values<GPIOB::CRH, 24, 2, ReadWriteMode, GPIOBCRHBase> ;
    using CNF14 = GPIOB_CRH_CNF14_Values<GPIOB::CRH, 26, 2, ReadWriteMode, GPIOBCRHBase> ;
    using MODE15 = GPIOB_CRH_MODE15_Values<GPIOB::CRH, 28, 2, ReadWriteMode, GPIOBCRHBase> ;
    using CNF15 = GPIOB_CRH_CNF15_Values<GPIOB::CRH, 30, 2, ReadWriteMode, GPIOBCRHBase> ;
    using FieldValues = GPIOB_CRH_CNF15_Values<GPIOB::CRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRHPack  = Register<0x40010C04, 32, ReadWriteMode, GPIOBCRHBase, T...> ;

  struct GPIOBIDRBase {} ;

  struct IDR : public RegisterBase<0x40010C08, 32, ReadMode>
  {
    using IDR0 = GPIOB_IDR_IDR0_Values<GPIOB::IDR, 0, 1, ReadMode, GPIOBIDRBase> ;
    using IDR1 = GPIOB_IDR_IDR1_Values<GPIOB::IDR, 1, 1, ReadMode, GPIOBIDRBase> ;
    using IDR2 = GPIOB_IDR_IDR2_Values<GPIOB::IDR, 2, 1, ReadMode, GPIOBIDRBase> ;
    using IDR3 = GPIOB_IDR_IDR3_Values<GPIOB::IDR, 3, 1, ReadMode, GPIOBIDRBase> ;
    using IDR4 = GPIOB_IDR_IDR4_Values<GPIOB::IDR, 4, 1, ReadMode, GPIOBIDRBase> ;
    using IDR5 = GPIOB_IDR_IDR5_Values<GPIOB::IDR, 5, 1, ReadMode, GPIOBIDRBase> ;
    using IDR6 = GPIOB_IDR_IDR6_Values<GPIOB::IDR, 6, 1, ReadMode, GPIOBIDRBase> ;
    using IDR7 = GPIOB_IDR_IDR7_Values<GPIOB::IDR, 7, 1, ReadMode, GPIOBIDRBase> ;
    using IDR8 = GPIOB_IDR_IDR8_Values<GPIOB::IDR, 8, 1, ReadMode, GPIOBIDRBase> ;
    using IDR9 = GPIOB_IDR_IDR9_Values<GPIOB::IDR, 9, 1, ReadMode, GPIOBIDRBase> ;
    using IDR10 = GPIOB_IDR_IDR10_Values<GPIOB::IDR, 10, 1, ReadMode, GPIOBIDRBase> ;
    using IDR11 = GPIOB_IDR_IDR11_Values<GPIOB::IDR, 11, 1, ReadMode, GPIOBIDRBase> ;
    using IDR12 = GPIOB_IDR_IDR12_Values<GPIOB::IDR, 12, 1, ReadMode, GPIOBIDRBase> ;
    using IDR13 = GPIOB_IDR_IDR13_Values<GPIOB::IDR, 13, 1, ReadMode, GPIOBIDRBase> ;
    using IDR14 = GPIOB_IDR_IDR14_Values<GPIOB::IDR, 14, 1, ReadMode, GPIOBIDRBase> ;
    using IDR15 = GPIOB_IDR_IDR15_Values<GPIOB::IDR, 15, 1, ReadMode, GPIOBIDRBase> ;
    using FieldValues = GPIOB_IDR_IDR15_Values<GPIOB::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40010C08, 32, ReadMode, GPIOBIDRBase, T...> ;

  struct GPIOBODRBase {} ;

  struct ODR : public RegisterBase<0x40010C0C, 32, ReadWriteMode>
  {
    using ODR0 = GPIOB_ODR_ODR0_Values<GPIOB::ODR, 0, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR1 = GPIOB_ODR_ODR1_Values<GPIOB::ODR, 1, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR2 = GPIOB_ODR_ODR2_Values<GPIOB::ODR, 2, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR3 = GPIOB_ODR_ODR3_Values<GPIOB::ODR, 3, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR4 = GPIOB_ODR_ODR4_Values<GPIOB::ODR, 4, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR5 = GPIOB_ODR_ODR5_Values<GPIOB::ODR, 5, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR6 = GPIOB_ODR_ODR6_Values<GPIOB::ODR, 6, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR7 = GPIOB_ODR_ODR7_Values<GPIOB::ODR, 7, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR8 = GPIOB_ODR_ODR8_Values<GPIOB::ODR, 8, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR9 = GPIOB_ODR_ODR9_Values<GPIOB::ODR, 9, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR10 = GPIOB_ODR_ODR10_Values<GPIOB::ODR, 10, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR11 = GPIOB_ODR_ODR11_Values<GPIOB::ODR, 11, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR12 = GPIOB_ODR_ODR12_Values<GPIOB::ODR, 12, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR13 = GPIOB_ODR_ODR13_Values<GPIOB::ODR, 13, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR14 = GPIOB_ODR_ODR14_Values<GPIOB::ODR, 14, 1, ReadWriteMode, GPIOBODRBase> ;
    using ODR15 = GPIOB_ODR_ODR15_Values<GPIOB::ODR, 15, 1, ReadWriteMode, GPIOBODRBase> ;
    using FieldValues = GPIOB_ODR_ODR15_Values<GPIOB::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x40010C0C, 32, ReadWriteMode, GPIOBODRBase, T...> ;

  struct GPIOBBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40010C10, 32, WriteMode>
  {
    using BS0 = GPIOB_BSRR_BS0_Values<GPIOB::BSRR, 0, 1, WriteMode, GPIOBBSRRBase> ;
    using BS1 = GPIOB_BSRR_BS1_Values<GPIOB::BSRR, 1, 1, WriteMode, GPIOBBSRRBase> ;
    using BS2 = GPIOB_BSRR_BS2_Values<GPIOB::BSRR, 2, 1, WriteMode, GPIOBBSRRBase> ;
    using BS3 = GPIOB_BSRR_BS3_Values<GPIOB::BSRR, 3, 1, WriteMode, GPIOBBSRRBase> ;
    using BS4 = GPIOB_BSRR_BS4_Values<GPIOB::BSRR, 4, 1, WriteMode, GPIOBBSRRBase> ;
    using BS5 = GPIOB_BSRR_BS5_Values<GPIOB::BSRR, 5, 1, WriteMode, GPIOBBSRRBase> ;
    using BS6 = GPIOB_BSRR_BS6_Values<GPIOB::BSRR, 6, 1, WriteMode, GPIOBBSRRBase> ;
    using BS7 = GPIOB_BSRR_BS7_Values<GPIOB::BSRR, 7, 1, WriteMode, GPIOBBSRRBase> ;
    using BS8 = GPIOB_BSRR_BS8_Values<GPIOB::BSRR, 8, 1, WriteMode, GPIOBBSRRBase> ;
    using BS9 = GPIOB_BSRR_BS9_Values<GPIOB::BSRR, 9, 1, WriteMode, GPIOBBSRRBase> ;
    using BS10 = GPIOB_BSRR_BS10_Values<GPIOB::BSRR, 10, 1, WriteMode, GPIOBBSRRBase> ;
    using BS11 = GPIOB_BSRR_BS11_Values<GPIOB::BSRR, 11, 1, WriteMode, GPIOBBSRRBase> ;
    using BS12 = GPIOB_BSRR_BS12_Values<GPIOB::BSRR, 12, 1, WriteMode, GPIOBBSRRBase> ;
    using BS13 = GPIOB_BSRR_BS13_Values<GPIOB::BSRR, 13, 1, WriteMode, GPIOBBSRRBase> ;
    using BS14 = GPIOB_BSRR_BS14_Values<GPIOB::BSRR, 14, 1, WriteMode, GPIOBBSRRBase> ;
    using BS15 = GPIOB_BSRR_BS15_Values<GPIOB::BSRR, 15, 1, WriteMode, GPIOBBSRRBase> ;
    using BR0 = GPIOB_BSRR_BR0_Values<GPIOB::BSRR, 16, 1, WriteMode, GPIOBBSRRBase> ;
    using BR1 = GPIOB_BSRR_BR1_Values<GPIOB::BSRR, 17, 1, WriteMode, GPIOBBSRRBase> ;
    using BR2 = GPIOB_BSRR_BR2_Values<GPIOB::BSRR, 18, 1, WriteMode, GPIOBBSRRBase> ;
    using BR3 = GPIOB_BSRR_BR3_Values<GPIOB::BSRR, 19, 1, WriteMode, GPIOBBSRRBase> ;
    using BR4 = GPIOB_BSRR_BR4_Values<GPIOB::BSRR, 20, 1, WriteMode, GPIOBBSRRBase> ;
    using BR5 = GPIOB_BSRR_BR5_Values<GPIOB::BSRR, 21, 1, WriteMode, GPIOBBSRRBase> ;
    using BR6 = GPIOB_BSRR_BR6_Values<GPIOB::BSRR, 22, 1, WriteMode, GPIOBBSRRBase> ;
    using BR7 = GPIOB_BSRR_BR7_Values<GPIOB::BSRR, 23, 1, WriteMode, GPIOBBSRRBase> ;
    using BR8 = GPIOB_BSRR_BR8_Values<GPIOB::BSRR, 24, 1, WriteMode, GPIOBBSRRBase> ;
    using BR9 = GPIOB_BSRR_BR9_Values<GPIOB::BSRR, 25, 1, WriteMode, GPIOBBSRRBase> ;
    using BR10 = GPIOB_BSRR_BR10_Values<GPIOB::BSRR, 26, 1, WriteMode, GPIOBBSRRBase> ;
    using BR11 = GPIOB_BSRR_BR11_Values<GPIOB::BSRR, 27, 1, WriteMode, GPIOBBSRRBase> ;
    using BR12 = GPIOB_BSRR_BR12_Values<GPIOB::BSRR, 28, 1, WriteMode, GPIOBBSRRBase> ;
    using BR13 = GPIOB_BSRR_BR13_Values<GPIOB::BSRR, 29, 1, WriteMode, GPIOBBSRRBase> ;
    using BR14 = GPIOB_BSRR_BR14_Values<GPIOB::BSRR, 30, 1, WriteMode, GPIOBBSRRBase> ;
    using BR15 = GPIOB_BSRR_BR15_Values<GPIOB::BSRR, 31, 1, WriteMode, GPIOBBSRRBase> ;
    using FieldValues = GPIOB_BSRR_BR15_Values<GPIOB::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40010C10, 32, WriteMode, GPIOBBSRRBase, T...> ;

  struct GPIOBBRRBase {} ;

  struct BRR : public RegisterBase<0x40010C14, 32, WriteMode>
  {
    using BR0 = GPIOB_BRR_BR0_Values<GPIOB::BRR, 0, 1, WriteMode, GPIOBBRRBase> ;
    using BR1 = GPIOB_BRR_BR1_Values<GPIOB::BRR, 1, 1, WriteMode, GPIOBBRRBase> ;
    using BR2 = GPIOB_BRR_BR2_Values<GPIOB::BRR, 2, 1, WriteMode, GPIOBBRRBase> ;
    using BR3 = GPIOB_BRR_BR3_Values<GPIOB::BRR, 3, 1, WriteMode, GPIOBBRRBase> ;
    using BR4 = GPIOB_BRR_BR4_Values<GPIOB::BRR, 4, 1, WriteMode, GPIOBBRRBase> ;
    using BR5 = GPIOB_BRR_BR5_Values<GPIOB::BRR, 5, 1, WriteMode, GPIOBBRRBase> ;
    using BR6 = GPIOB_BRR_BR6_Values<GPIOB::BRR, 6, 1, WriteMode, GPIOBBRRBase> ;
    using BR7 = GPIOB_BRR_BR7_Values<GPIOB::BRR, 7, 1, WriteMode, GPIOBBRRBase> ;
    using BR8 = GPIOB_BRR_BR8_Values<GPIOB::BRR, 8, 1, WriteMode, GPIOBBRRBase> ;
    using BR9 = GPIOB_BRR_BR9_Values<GPIOB::BRR, 9, 1, WriteMode, GPIOBBRRBase> ;
    using BR10 = GPIOB_BRR_BR10_Values<GPIOB::BRR, 10, 1, WriteMode, GPIOBBRRBase> ;
    using BR11 = GPIOB_BRR_BR11_Values<GPIOB::BRR, 11, 1, WriteMode, GPIOBBRRBase> ;
    using BR12 = GPIOB_BRR_BR12_Values<GPIOB::BRR, 12, 1, WriteMode, GPIOBBRRBase> ;
    using BR13 = GPIOB_BRR_BR13_Values<GPIOB::BRR, 13, 1, WriteMode, GPIOBBRRBase> ;
    using BR14 = GPIOB_BRR_BR14_Values<GPIOB::BRR, 14, 1, WriteMode, GPIOBBRRBase> ;
    using BR15 = GPIOB_BRR_BR15_Values<GPIOB::BRR, 15, 1, WriteMode, GPIOBBRRBase> ;
    using FieldValues = GPIOB_BRR_BR15_Values<GPIOB::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40010C14, 32, WriteMode, GPIOBBRRBase, T...> ;

  struct GPIOBLCKRBase {} ;

  struct LCKR : public RegisterBase<0x40010C18, 32, ReadWriteMode>
  {
    using LCK0 = GPIOB_LCKR_LCK0_Values<GPIOB::LCKR, 0, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK1 = GPIOB_LCKR_LCK1_Values<GPIOB::LCKR, 1, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK2 = GPIOB_LCKR_LCK2_Values<GPIOB::LCKR, 2, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK3 = GPIOB_LCKR_LCK3_Values<GPIOB::LCKR, 3, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK4 = GPIOB_LCKR_LCK4_Values<GPIOB::LCKR, 4, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK5 = GPIOB_LCKR_LCK5_Values<GPIOB::LCKR, 5, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK6 = GPIOB_LCKR_LCK6_Values<GPIOB::LCKR, 6, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK7 = GPIOB_LCKR_LCK7_Values<GPIOB::LCKR, 7, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK8 = GPIOB_LCKR_LCK8_Values<GPIOB::LCKR, 8, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK9 = GPIOB_LCKR_LCK9_Values<GPIOB::LCKR, 9, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK10 = GPIOB_LCKR_LCK10_Values<GPIOB::LCKR, 10, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK11 = GPIOB_LCKR_LCK11_Values<GPIOB::LCKR, 11, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK12 = GPIOB_LCKR_LCK12_Values<GPIOB::LCKR, 12, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK13 = GPIOB_LCKR_LCK13_Values<GPIOB::LCKR, 13, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK14 = GPIOB_LCKR_LCK14_Values<GPIOB::LCKR, 14, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCK15 = GPIOB_LCKR_LCK15_Values<GPIOB::LCKR, 15, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using LCKK = GPIOB_LCKR_LCKK_Values<GPIOB::LCKR, 16, 1, ReadWriteMode, GPIOBLCKRBase> ;
    using FieldValues = GPIOB_LCKR_LCKK_Values<GPIOB::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x40010C18, 32, ReadWriteMode, GPIOBLCKRBase, T...> ;

} ;

#endif //#if !defined(GPIOBREGISTERS_HPP)
