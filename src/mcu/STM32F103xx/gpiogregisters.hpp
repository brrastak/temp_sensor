/*******************************************************************************
* Filename      : gpiogregisters.hpp
*
* Details       : General purpose I/O. This header file is auto-generated for
*                 STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(GPIOGREGISTERS_HPP)
#define GPIOGREGISTERS_HPP

#include "gpiogfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOG
{
  struct GPIOGCRLBase {} ;

  struct CRL : public RegisterBase<0x40012000, 32, ReadWriteMode>
  {
    using MODE0 = GPIOG_CRL_MODE0_Values<GPIOG::CRL, 0, 2, ReadWriteMode, GPIOGCRLBase> ;
    using CNF0 = GPIOG_CRL_CNF0_Values<GPIOG::CRL, 2, 2, ReadWriteMode, GPIOGCRLBase> ;
    using MODE1 = GPIOG_CRL_MODE1_Values<GPIOG::CRL, 4, 2, ReadWriteMode, GPIOGCRLBase> ;
    using CNF1 = GPIOG_CRL_CNF1_Values<GPIOG::CRL, 6, 2, ReadWriteMode, GPIOGCRLBase> ;
    using MODE2 = GPIOG_CRL_MODE2_Values<GPIOG::CRL, 8, 2, ReadWriteMode, GPIOGCRLBase> ;
    using CNF2 = GPIOG_CRL_CNF2_Values<GPIOG::CRL, 10, 2, ReadWriteMode, GPIOGCRLBase> ;
    using MODE3 = GPIOG_CRL_MODE3_Values<GPIOG::CRL, 12, 2, ReadWriteMode, GPIOGCRLBase> ;
    using CNF3 = GPIOG_CRL_CNF3_Values<GPIOG::CRL, 14, 2, ReadWriteMode, GPIOGCRLBase> ;
    using MODE4 = GPIOG_CRL_MODE4_Values<GPIOG::CRL, 16, 2, ReadWriteMode, GPIOGCRLBase> ;
    using CNF4 = GPIOG_CRL_CNF4_Values<GPIOG::CRL, 18, 2, ReadWriteMode, GPIOGCRLBase> ;
    using MODE5 = GPIOG_CRL_MODE5_Values<GPIOG::CRL, 20, 2, ReadWriteMode, GPIOGCRLBase> ;
    using CNF5 = GPIOG_CRL_CNF5_Values<GPIOG::CRL, 22, 2, ReadWriteMode, GPIOGCRLBase> ;
    using MODE6 = GPIOG_CRL_MODE6_Values<GPIOG::CRL, 24, 2, ReadWriteMode, GPIOGCRLBase> ;
    using CNF6 = GPIOG_CRL_CNF6_Values<GPIOG::CRL, 26, 2, ReadWriteMode, GPIOGCRLBase> ;
    using MODE7 = GPIOG_CRL_MODE7_Values<GPIOG::CRL, 28, 2, ReadWriteMode, GPIOGCRLBase> ;
    using CNF7 = GPIOG_CRL_CNF7_Values<GPIOG::CRL, 30, 2, ReadWriteMode, GPIOGCRLBase> ;
    using FieldValues = GPIOG_CRL_CNF7_Values<GPIOG::CRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRLPack  = Register<0x40012000, 32, ReadWriteMode, GPIOGCRLBase, T...> ;

  struct GPIOGCRHBase {} ;

  struct CRH : public RegisterBase<0x40012004, 32, ReadWriteMode>
  {
    using MODE8 = GPIOG_CRH_MODE8_Values<GPIOG::CRH, 0, 2, ReadWriteMode, GPIOGCRHBase> ;
    using CNF8 = GPIOG_CRH_CNF8_Values<GPIOG::CRH, 2, 2, ReadWriteMode, GPIOGCRHBase> ;
    using MODE9 = GPIOG_CRH_MODE9_Values<GPIOG::CRH, 4, 2, ReadWriteMode, GPIOGCRHBase> ;
    using CNF9 = GPIOG_CRH_CNF9_Values<GPIOG::CRH, 6, 2, ReadWriteMode, GPIOGCRHBase> ;
    using MODE10 = GPIOG_CRH_MODE10_Values<GPIOG::CRH, 8, 2, ReadWriteMode, GPIOGCRHBase> ;
    using CNF10 = GPIOG_CRH_CNF10_Values<GPIOG::CRH, 10, 2, ReadWriteMode, GPIOGCRHBase> ;
    using MODE11 = GPIOG_CRH_MODE11_Values<GPIOG::CRH, 12, 2, ReadWriteMode, GPIOGCRHBase> ;
    using CNF11 = GPIOG_CRH_CNF11_Values<GPIOG::CRH, 14, 2, ReadWriteMode, GPIOGCRHBase> ;
    using MODE12 = GPIOG_CRH_MODE12_Values<GPIOG::CRH, 16, 2, ReadWriteMode, GPIOGCRHBase> ;
    using CNF12 = GPIOG_CRH_CNF12_Values<GPIOG::CRH, 18, 2, ReadWriteMode, GPIOGCRHBase> ;
    using MODE13 = GPIOG_CRH_MODE13_Values<GPIOG::CRH, 20, 2, ReadWriteMode, GPIOGCRHBase> ;
    using CNF13 = GPIOG_CRH_CNF13_Values<GPIOG::CRH, 22, 2, ReadWriteMode, GPIOGCRHBase> ;
    using MODE14 = GPIOG_CRH_MODE14_Values<GPIOG::CRH, 24, 2, ReadWriteMode, GPIOGCRHBase> ;
    using CNF14 = GPIOG_CRH_CNF14_Values<GPIOG::CRH, 26, 2, ReadWriteMode, GPIOGCRHBase> ;
    using MODE15 = GPIOG_CRH_MODE15_Values<GPIOG::CRH, 28, 2, ReadWriteMode, GPIOGCRHBase> ;
    using CNF15 = GPIOG_CRH_CNF15_Values<GPIOG::CRH, 30, 2, ReadWriteMode, GPIOGCRHBase> ;
    using FieldValues = GPIOG_CRH_CNF15_Values<GPIOG::CRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRHPack  = Register<0x40012004, 32, ReadWriteMode, GPIOGCRHBase, T...> ;

  struct GPIOGIDRBase {} ;

  struct IDR : public RegisterBase<0x40012008, 32, ReadMode>
  {
    using IDR0 = GPIOG_IDR_IDR0_Values<GPIOG::IDR, 0, 1, ReadMode, GPIOGIDRBase> ;
    using IDR1 = GPIOG_IDR_IDR1_Values<GPIOG::IDR, 1, 1, ReadMode, GPIOGIDRBase> ;
    using IDR2 = GPIOG_IDR_IDR2_Values<GPIOG::IDR, 2, 1, ReadMode, GPIOGIDRBase> ;
    using IDR3 = GPIOG_IDR_IDR3_Values<GPIOG::IDR, 3, 1, ReadMode, GPIOGIDRBase> ;
    using IDR4 = GPIOG_IDR_IDR4_Values<GPIOG::IDR, 4, 1, ReadMode, GPIOGIDRBase> ;
    using IDR5 = GPIOG_IDR_IDR5_Values<GPIOG::IDR, 5, 1, ReadMode, GPIOGIDRBase> ;
    using IDR6 = GPIOG_IDR_IDR6_Values<GPIOG::IDR, 6, 1, ReadMode, GPIOGIDRBase> ;
    using IDR7 = GPIOG_IDR_IDR7_Values<GPIOG::IDR, 7, 1, ReadMode, GPIOGIDRBase> ;
    using IDR8 = GPIOG_IDR_IDR8_Values<GPIOG::IDR, 8, 1, ReadMode, GPIOGIDRBase> ;
    using IDR9 = GPIOG_IDR_IDR9_Values<GPIOG::IDR, 9, 1, ReadMode, GPIOGIDRBase> ;
    using IDR10 = GPIOG_IDR_IDR10_Values<GPIOG::IDR, 10, 1, ReadMode, GPIOGIDRBase> ;
    using IDR11 = GPIOG_IDR_IDR11_Values<GPIOG::IDR, 11, 1, ReadMode, GPIOGIDRBase> ;
    using IDR12 = GPIOG_IDR_IDR12_Values<GPIOG::IDR, 12, 1, ReadMode, GPIOGIDRBase> ;
    using IDR13 = GPIOG_IDR_IDR13_Values<GPIOG::IDR, 13, 1, ReadMode, GPIOGIDRBase> ;
    using IDR14 = GPIOG_IDR_IDR14_Values<GPIOG::IDR, 14, 1, ReadMode, GPIOGIDRBase> ;
    using IDR15 = GPIOG_IDR_IDR15_Values<GPIOG::IDR, 15, 1, ReadMode, GPIOGIDRBase> ;
    using FieldValues = GPIOG_IDR_IDR15_Values<GPIOG::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40012008, 32, ReadMode, GPIOGIDRBase, T...> ;

  struct GPIOGODRBase {} ;

  struct ODR : public RegisterBase<0x4001200C, 32, ReadWriteMode>
  {
    using ODR0 = GPIOG_ODR_ODR0_Values<GPIOG::ODR, 0, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR1 = GPIOG_ODR_ODR1_Values<GPIOG::ODR, 1, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR2 = GPIOG_ODR_ODR2_Values<GPIOG::ODR, 2, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR3 = GPIOG_ODR_ODR3_Values<GPIOG::ODR, 3, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR4 = GPIOG_ODR_ODR4_Values<GPIOG::ODR, 4, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR5 = GPIOG_ODR_ODR5_Values<GPIOG::ODR, 5, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR6 = GPIOG_ODR_ODR6_Values<GPIOG::ODR, 6, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR7 = GPIOG_ODR_ODR7_Values<GPIOG::ODR, 7, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR8 = GPIOG_ODR_ODR8_Values<GPIOG::ODR, 8, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR9 = GPIOG_ODR_ODR9_Values<GPIOG::ODR, 9, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR10 = GPIOG_ODR_ODR10_Values<GPIOG::ODR, 10, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR11 = GPIOG_ODR_ODR11_Values<GPIOG::ODR, 11, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR12 = GPIOG_ODR_ODR12_Values<GPIOG::ODR, 12, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR13 = GPIOG_ODR_ODR13_Values<GPIOG::ODR, 13, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR14 = GPIOG_ODR_ODR14_Values<GPIOG::ODR, 14, 1, ReadWriteMode, GPIOGODRBase> ;
    using ODR15 = GPIOG_ODR_ODR15_Values<GPIOG::ODR, 15, 1, ReadWriteMode, GPIOGODRBase> ;
    using FieldValues = GPIOG_ODR_ODR15_Values<GPIOG::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x4001200C, 32, ReadWriteMode, GPIOGODRBase, T...> ;

  struct GPIOGBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40012010, 32, WriteMode>
  {
    using BS0 = GPIOG_BSRR_BS0_Values<GPIOG::BSRR, 0, 1, WriteMode, GPIOGBSRRBase> ;
    using BS1 = GPIOG_BSRR_BS1_Values<GPIOG::BSRR, 1, 1, WriteMode, GPIOGBSRRBase> ;
    using BS2 = GPIOG_BSRR_BS2_Values<GPIOG::BSRR, 2, 1, WriteMode, GPIOGBSRRBase> ;
    using BS3 = GPIOG_BSRR_BS3_Values<GPIOG::BSRR, 3, 1, WriteMode, GPIOGBSRRBase> ;
    using BS4 = GPIOG_BSRR_BS4_Values<GPIOG::BSRR, 4, 1, WriteMode, GPIOGBSRRBase> ;
    using BS5 = GPIOG_BSRR_BS5_Values<GPIOG::BSRR, 5, 1, WriteMode, GPIOGBSRRBase> ;
    using BS6 = GPIOG_BSRR_BS6_Values<GPIOG::BSRR, 6, 1, WriteMode, GPIOGBSRRBase> ;
    using BS7 = GPIOG_BSRR_BS7_Values<GPIOG::BSRR, 7, 1, WriteMode, GPIOGBSRRBase> ;
    using BS8 = GPIOG_BSRR_BS8_Values<GPIOG::BSRR, 8, 1, WriteMode, GPIOGBSRRBase> ;
    using BS9 = GPIOG_BSRR_BS9_Values<GPIOG::BSRR, 9, 1, WriteMode, GPIOGBSRRBase> ;
    using BS10 = GPIOG_BSRR_BS10_Values<GPIOG::BSRR, 10, 1, WriteMode, GPIOGBSRRBase> ;
    using BS11 = GPIOG_BSRR_BS11_Values<GPIOG::BSRR, 11, 1, WriteMode, GPIOGBSRRBase> ;
    using BS12 = GPIOG_BSRR_BS12_Values<GPIOG::BSRR, 12, 1, WriteMode, GPIOGBSRRBase> ;
    using BS13 = GPIOG_BSRR_BS13_Values<GPIOG::BSRR, 13, 1, WriteMode, GPIOGBSRRBase> ;
    using BS14 = GPIOG_BSRR_BS14_Values<GPIOG::BSRR, 14, 1, WriteMode, GPIOGBSRRBase> ;
    using BS15 = GPIOG_BSRR_BS15_Values<GPIOG::BSRR, 15, 1, WriteMode, GPIOGBSRRBase> ;
    using BR0 = GPIOG_BSRR_BR0_Values<GPIOG::BSRR, 16, 1, WriteMode, GPIOGBSRRBase> ;
    using BR1 = GPIOG_BSRR_BR1_Values<GPIOG::BSRR, 17, 1, WriteMode, GPIOGBSRRBase> ;
    using BR2 = GPIOG_BSRR_BR2_Values<GPIOG::BSRR, 18, 1, WriteMode, GPIOGBSRRBase> ;
    using BR3 = GPIOG_BSRR_BR3_Values<GPIOG::BSRR, 19, 1, WriteMode, GPIOGBSRRBase> ;
    using BR4 = GPIOG_BSRR_BR4_Values<GPIOG::BSRR, 20, 1, WriteMode, GPIOGBSRRBase> ;
    using BR5 = GPIOG_BSRR_BR5_Values<GPIOG::BSRR, 21, 1, WriteMode, GPIOGBSRRBase> ;
    using BR6 = GPIOG_BSRR_BR6_Values<GPIOG::BSRR, 22, 1, WriteMode, GPIOGBSRRBase> ;
    using BR7 = GPIOG_BSRR_BR7_Values<GPIOG::BSRR, 23, 1, WriteMode, GPIOGBSRRBase> ;
    using BR8 = GPIOG_BSRR_BR8_Values<GPIOG::BSRR, 24, 1, WriteMode, GPIOGBSRRBase> ;
    using BR9 = GPIOG_BSRR_BR9_Values<GPIOG::BSRR, 25, 1, WriteMode, GPIOGBSRRBase> ;
    using BR10 = GPIOG_BSRR_BR10_Values<GPIOG::BSRR, 26, 1, WriteMode, GPIOGBSRRBase> ;
    using BR11 = GPIOG_BSRR_BR11_Values<GPIOG::BSRR, 27, 1, WriteMode, GPIOGBSRRBase> ;
    using BR12 = GPIOG_BSRR_BR12_Values<GPIOG::BSRR, 28, 1, WriteMode, GPIOGBSRRBase> ;
    using BR13 = GPIOG_BSRR_BR13_Values<GPIOG::BSRR, 29, 1, WriteMode, GPIOGBSRRBase> ;
    using BR14 = GPIOG_BSRR_BR14_Values<GPIOG::BSRR, 30, 1, WriteMode, GPIOGBSRRBase> ;
    using BR15 = GPIOG_BSRR_BR15_Values<GPIOG::BSRR, 31, 1, WriteMode, GPIOGBSRRBase> ;
    using FieldValues = GPIOG_BSRR_BR15_Values<GPIOG::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40012010, 32, WriteMode, GPIOGBSRRBase, T...> ;

  struct GPIOGBRRBase {} ;

  struct BRR : public RegisterBase<0x40012014, 32, WriteMode>
  {
    using BR0 = GPIOG_BRR_BR0_Values<GPIOG::BRR, 0, 1, WriteMode, GPIOGBRRBase> ;
    using BR1 = GPIOG_BRR_BR1_Values<GPIOG::BRR, 1, 1, WriteMode, GPIOGBRRBase> ;
    using BR2 = GPIOG_BRR_BR2_Values<GPIOG::BRR, 2, 1, WriteMode, GPIOGBRRBase> ;
    using BR3 = GPIOG_BRR_BR3_Values<GPIOG::BRR, 3, 1, WriteMode, GPIOGBRRBase> ;
    using BR4 = GPIOG_BRR_BR4_Values<GPIOG::BRR, 4, 1, WriteMode, GPIOGBRRBase> ;
    using BR5 = GPIOG_BRR_BR5_Values<GPIOG::BRR, 5, 1, WriteMode, GPIOGBRRBase> ;
    using BR6 = GPIOG_BRR_BR6_Values<GPIOG::BRR, 6, 1, WriteMode, GPIOGBRRBase> ;
    using BR7 = GPIOG_BRR_BR7_Values<GPIOG::BRR, 7, 1, WriteMode, GPIOGBRRBase> ;
    using BR8 = GPIOG_BRR_BR8_Values<GPIOG::BRR, 8, 1, WriteMode, GPIOGBRRBase> ;
    using BR9 = GPIOG_BRR_BR9_Values<GPIOG::BRR, 9, 1, WriteMode, GPIOGBRRBase> ;
    using BR10 = GPIOG_BRR_BR10_Values<GPIOG::BRR, 10, 1, WriteMode, GPIOGBRRBase> ;
    using BR11 = GPIOG_BRR_BR11_Values<GPIOG::BRR, 11, 1, WriteMode, GPIOGBRRBase> ;
    using BR12 = GPIOG_BRR_BR12_Values<GPIOG::BRR, 12, 1, WriteMode, GPIOGBRRBase> ;
    using BR13 = GPIOG_BRR_BR13_Values<GPIOG::BRR, 13, 1, WriteMode, GPIOGBRRBase> ;
    using BR14 = GPIOG_BRR_BR14_Values<GPIOG::BRR, 14, 1, WriteMode, GPIOGBRRBase> ;
    using BR15 = GPIOG_BRR_BR15_Values<GPIOG::BRR, 15, 1, WriteMode, GPIOGBRRBase> ;
    using FieldValues = GPIOG_BRR_BR15_Values<GPIOG::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40012014, 32, WriteMode, GPIOGBRRBase, T...> ;

  struct GPIOGLCKRBase {} ;

  struct LCKR : public RegisterBase<0x40012018, 32, ReadWriteMode>
  {
    using LCK0 = GPIOG_LCKR_LCK0_Values<GPIOG::LCKR, 0, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK1 = GPIOG_LCKR_LCK1_Values<GPIOG::LCKR, 1, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK2 = GPIOG_LCKR_LCK2_Values<GPIOG::LCKR, 2, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK3 = GPIOG_LCKR_LCK3_Values<GPIOG::LCKR, 3, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK4 = GPIOG_LCKR_LCK4_Values<GPIOG::LCKR, 4, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK5 = GPIOG_LCKR_LCK5_Values<GPIOG::LCKR, 5, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK6 = GPIOG_LCKR_LCK6_Values<GPIOG::LCKR, 6, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK7 = GPIOG_LCKR_LCK7_Values<GPIOG::LCKR, 7, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK8 = GPIOG_LCKR_LCK8_Values<GPIOG::LCKR, 8, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK9 = GPIOG_LCKR_LCK9_Values<GPIOG::LCKR, 9, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK10 = GPIOG_LCKR_LCK10_Values<GPIOG::LCKR, 10, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK11 = GPIOG_LCKR_LCK11_Values<GPIOG::LCKR, 11, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK12 = GPIOG_LCKR_LCK12_Values<GPIOG::LCKR, 12, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK13 = GPIOG_LCKR_LCK13_Values<GPIOG::LCKR, 13, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK14 = GPIOG_LCKR_LCK14_Values<GPIOG::LCKR, 14, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK15 = GPIOG_LCKR_LCK15_Values<GPIOG::LCKR, 15, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCKK = GPIOG_LCKR_LCKK_Values<GPIOG::LCKR, 16, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using FieldValues = GPIOG_LCKR_LCKK_Values<GPIOG::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x40012018, 32, ReadWriteMode, GPIOGLCKRBase, T...> ;

} ;

#endif //#if !defined(GPIOGREGISTERS_HPP)
