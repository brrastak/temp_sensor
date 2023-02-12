/*******************************************************************************
* Filename      : adc3registers.hpp
*
* Details       : Analog to digital converter. This header file is
*                 auto-generated for STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(ADC3REGISTERS_HPP)
#define ADC3REGISTERS_HPP

#include "adc3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC3
{
  struct ADC3SRBase {} ;

  struct SR : public RegisterBase<0x40013C00, 32, ReadWriteMode>
  {
    using STRT = ADC3_SR_STRT_Values<ADC3::SR, 4, 1, ReadWriteMode, ADC3SRBase> ;
    using JSTRT = ADC3_SR_JSTRT_Values<ADC3::SR, 3, 1, ReadWriteMode, ADC3SRBase> ;
    using JEOC = ADC3_SR_JEOC_Values<ADC3::SR, 2, 1, ReadWriteMode, ADC3SRBase> ;
    using EOC = ADC3_SR_EOC_Values<ADC3::SR, 1, 1, ReadWriteMode, ADC3SRBase> ;
    using AWD = ADC3_SR_AWD_Values<ADC3::SR, 0, 1, ReadWriteMode, ADC3SRBase> ;
    using FieldValues = ADC3_SR_AWD_Values<ADC3::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40013C00, 32, ReadWriteMode, ADC3SRBase, T...> ;

  struct ADC3CR1Base {} ;

  struct CR1 : public RegisterBase<0x40013C04, 32, ReadWriteMode>
  {
    using AWDEN = ADC3_CR1_AWDEN_Values<ADC3::CR1, 23, 1, ReadWriteMode, ADC3CR1Base> ;
    using JAWDEN = ADC3_CR1_JAWDEN_Values<ADC3::CR1, 22, 1, ReadWriteMode, ADC3CR1Base> ;
    using DISCNUM = ADC3_CR1_DISCNUM_Values<ADC3::CR1, 13, 3, ReadWriteMode, ADC3CR1Base> ;
    using JDISCEN = ADC3_CR1_JDISCEN_Values<ADC3::CR1, 12, 1, ReadWriteMode, ADC3CR1Base> ;
    using DISCEN = ADC3_CR1_DISCEN_Values<ADC3::CR1, 11, 1, ReadWriteMode, ADC3CR1Base> ;
    using JAUTO = ADC3_CR1_JAUTO_Values<ADC3::CR1, 10, 1, ReadWriteMode, ADC3CR1Base> ;
    using AWDSGL = ADC3_CR1_AWDSGL_Values<ADC3::CR1, 9, 1, ReadWriteMode, ADC3CR1Base> ;
    using SCAN = ADC3_CR1_SCAN_Values<ADC3::CR1, 8, 1, ReadWriteMode, ADC3CR1Base> ;
    using JEOCIE = ADC3_CR1_JEOCIE_Values<ADC3::CR1, 7, 1, ReadWriteMode, ADC3CR1Base> ;
    using AWDIE = ADC3_CR1_AWDIE_Values<ADC3::CR1, 6, 1, ReadWriteMode, ADC3CR1Base> ;
    using EOCIE = ADC3_CR1_EOCIE_Values<ADC3::CR1, 5, 1, ReadWriteMode, ADC3CR1Base> ;
    using AWDCH = ADC3_CR1_AWDCH_Values<ADC3::CR1, 0, 5, ReadWriteMode, ADC3CR1Base> ;
    using FieldValues = ADC3_CR1_AWDCH_Values<ADC3::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40013C04, 32, ReadWriteMode, ADC3CR1Base, T...> ;

  struct ADC3CR2Base {} ;

  struct CR2 : public RegisterBase<0x40013C08, 32, ReadWriteMode>
  {
    using TSVREFE = ADC3_CR2_TSVREFE_Values<ADC3::CR2, 23, 1, ReadWriteMode, ADC3CR2Base> ;
    using SWSTART = ADC3_CR2_SWSTART_Values<ADC3::CR2, 22, 1, ReadWriteMode, ADC3CR2Base> ;
    using JSWSTART = ADC3_CR2_JSWSTART_Values<ADC3::CR2, 21, 1, ReadWriteMode, ADC3CR2Base> ;
    using EXTTRIG = ADC3_CR2_EXTTRIG_Values<ADC3::CR2, 20, 1, ReadWriteMode, ADC3CR2Base> ;
    using EXTSEL = ADC3_CR2_EXTSEL_Values<ADC3::CR2, 17, 3, ReadWriteMode, ADC3CR2Base> ;
    using JEXTTRIG = ADC3_CR2_JEXTTRIG_Values<ADC3::CR2, 15, 1, ReadWriteMode, ADC3CR2Base> ;
    using JEXTSEL = ADC3_CR2_JEXTSEL_Values<ADC3::CR2, 12, 3, ReadWriteMode, ADC3CR2Base> ;
    using ALIGN = ADC3_CR2_ALIGN_Values<ADC3::CR2, 11, 1, ReadWriteMode, ADC3CR2Base> ;
    using DMA = ADC3_CR2_DMA_Values<ADC3::CR2, 8, 1, ReadWriteMode, ADC3CR2Base> ;
    using RSTCAL = ADC3_CR2_RSTCAL_Values<ADC3::CR2, 3, 1, ReadWriteMode, ADC3CR2Base> ;
    using CAL = ADC3_CR2_CAL_Values<ADC3::CR2, 2, 1, ReadWriteMode, ADC3CR2Base> ;
    using CONT = ADC3_CR2_CONT_Values<ADC3::CR2, 1, 1, ReadWriteMode, ADC3CR2Base> ;
    using ADON = ADC3_CR2_ADON_Values<ADC3::CR2, 0, 1, ReadWriteMode, ADC3CR2Base> ;
    using FieldValues = ADC3_CR2_ADON_Values<ADC3::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40013C08, 32, ReadWriteMode, ADC3CR2Base, T...> ;

  struct ADC3SMPR1Base {} ;

  struct SMPR1 : public RegisterBase<0x40013C0C, 32, ReadWriteMode>
  {
    using SMP10 = ADC3_SMPR1_SMP10_Values<ADC3::SMPR1, 0, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP11 = ADC3_SMPR1_SMP11_Values<ADC3::SMPR1, 3, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP12 = ADC3_SMPR1_SMP12_Values<ADC3::SMPR1, 6, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP13 = ADC3_SMPR1_SMP13_Values<ADC3::SMPR1, 9, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP14 = ADC3_SMPR1_SMP14_Values<ADC3::SMPR1, 12, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP15 = ADC3_SMPR1_SMP15_Values<ADC3::SMPR1, 15, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP16 = ADC3_SMPR1_SMP16_Values<ADC3::SMPR1, 18, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using SMP17 = ADC3_SMPR1_SMP17_Values<ADC3::SMPR1, 21, 3, ReadWriteMode, ADC3SMPR1Base> ;
    using FieldValues = ADC3_SMPR1_SMP17_Values<ADC3::SMPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR1Pack  = Register<0x40013C0C, 32, ReadWriteMode, ADC3SMPR1Base, T...> ;

  struct ADC3SMPR2Base {} ;

  struct SMPR2 : public RegisterBase<0x40013C10, 32, ReadWriteMode>
  {
    using SMP0 = ADC3_SMPR2_SMP0_Values<ADC3::SMPR2, 0, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP1 = ADC3_SMPR2_SMP1_Values<ADC3::SMPR2, 3, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP2 = ADC3_SMPR2_SMP2_Values<ADC3::SMPR2, 6, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP3 = ADC3_SMPR2_SMP3_Values<ADC3::SMPR2, 9, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP4 = ADC3_SMPR2_SMP4_Values<ADC3::SMPR2, 12, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP5 = ADC3_SMPR2_SMP5_Values<ADC3::SMPR2, 15, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP6 = ADC3_SMPR2_SMP6_Values<ADC3::SMPR2, 18, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP7 = ADC3_SMPR2_SMP7_Values<ADC3::SMPR2, 21, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP8 = ADC3_SMPR2_SMP8_Values<ADC3::SMPR2, 24, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using SMP9 = ADC3_SMPR2_SMP9_Values<ADC3::SMPR2, 27, 3, ReadWriteMode, ADC3SMPR2Base> ;
    using FieldValues = ADC3_SMPR2_SMP9_Values<ADC3::SMPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR2Pack  = Register<0x40013C10, 32, ReadWriteMode, ADC3SMPR2Base, T...> ;

  struct ADC3JOFR1Base {} ;

  struct JOFR1 : public RegisterBase<0x40013C14, 32, ReadWriteMode>
  {
    using JOFFSET1 = ADC3_JOFR1_JOFFSET1_Values<ADC3::JOFR1, 0, 12, ReadWriteMode, ADC3JOFR1Base> ;
    using FieldValues = ADC3_JOFR1_JOFFSET1_Values<ADC3::JOFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR1Pack  = Register<0x40013C14, 32, ReadWriteMode, ADC3JOFR1Base, T...> ;

  struct ADC3JOFR2Base {} ;

  struct JOFR2 : public RegisterBase<0x40013C18, 32, ReadWriteMode>
  {
    using JOFFSET2 = ADC3_JOFR2_JOFFSET2_Values<ADC3::JOFR2, 0, 12, ReadWriteMode, ADC3JOFR2Base> ;
    using FieldValues = ADC3_JOFR2_JOFFSET2_Values<ADC3::JOFR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR2Pack  = Register<0x40013C18, 32, ReadWriteMode, ADC3JOFR2Base, T...> ;

  struct ADC3JOFR3Base {} ;

  struct JOFR3 : public RegisterBase<0x40013C1C, 32, ReadWriteMode>
  {
    using JOFFSET3 = ADC3_JOFR3_JOFFSET3_Values<ADC3::JOFR3, 0, 12, ReadWriteMode, ADC3JOFR3Base> ;
    using FieldValues = ADC3_JOFR3_JOFFSET3_Values<ADC3::JOFR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR3Pack  = Register<0x40013C1C, 32, ReadWriteMode, ADC3JOFR3Base, T...> ;

  struct ADC3JOFR4Base {} ;

  struct JOFR4 : public RegisterBase<0x40013C20, 32, ReadWriteMode>
  {
    using JOFFSET4 = ADC3_JOFR4_JOFFSET4_Values<ADC3::JOFR4, 0, 12, ReadWriteMode, ADC3JOFR4Base> ;
    using FieldValues = ADC3_JOFR4_JOFFSET4_Values<ADC3::JOFR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR4Pack  = Register<0x40013C20, 32, ReadWriteMode, ADC3JOFR4Base, T...> ;

  struct ADC3HTRBase {} ;

  struct HTR : public RegisterBase<0x40013C24, 32, ReadWriteMode>
  {
    using HT = ADC3_HTR_HT_Values<ADC3::HTR, 0, 12, ReadWriteMode, ADC3HTRBase> ;
    using FieldValues = ADC3_HTR_HT_Values<ADC3::HTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HTRPack  = Register<0x40013C24, 32, ReadWriteMode, ADC3HTRBase, T...> ;

  struct ADC3LTRBase {} ;

  struct LTR : public RegisterBase<0x40013C28, 32, ReadWriteMode>
  {
    using LT = ADC3_LTR_LT_Values<ADC3::LTR, 0, 12, ReadWriteMode, ADC3LTRBase> ;
    using FieldValues = ADC3_LTR_LT_Values<ADC3::LTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LTRPack  = Register<0x40013C28, 32, ReadWriteMode, ADC3LTRBase, T...> ;

  struct ADC3SQR1Base {} ;

  struct SQR1 : public RegisterBase<0x40013C2C, 32, ReadWriteMode>
  {
    using L = ADC3_SQR1_L_Values<ADC3::SQR1, 20, 4, ReadWriteMode, ADC3SQR1Base> ;
    using SQ16 = ADC3_SQR1_SQ16_Values<ADC3::SQR1, 15, 5, ReadWriteMode, ADC3SQR1Base> ;
    using SQ15 = ADC3_SQR1_SQ15_Values<ADC3::SQR1, 10, 5, ReadWriteMode, ADC3SQR1Base> ;
    using SQ14 = ADC3_SQR1_SQ14_Values<ADC3::SQR1, 5, 5, ReadWriteMode, ADC3SQR1Base> ;
    using SQ13 = ADC3_SQR1_SQ13_Values<ADC3::SQR1, 0, 5, ReadWriteMode, ADC3SQR1Base> ;
    using FieldValues = ADC3_SQR1_SQ13_Values<ADC3::SQR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR1Pack  = Register<0x40013C2C, 32, ReadWriteMode, ADC3SQR1Base, T...> ;

  struct ADC3SQR2Base {} ;

  struct SQR2 : public RegisterBase<0x40013C30, 32, ReadWriteMode>
  {
    using SQ12 = ADC3_SQR2_SQ12_Values<ADC3::SQR2, 25, 5, ReadWriteMode, ADC3SQR2Base> ;
    using SQ11 = ADC3_SQR2_SQ11_Values<ADC3::SQR2, 20, 5, ReadWriteMode, ADC3SQR2Base> ;
    using SQ10 = ADC3_SQR2_SQ10_Values<ADC3::SQR2, 15, 5, ReadWriteMode, ADC3SQR2Base> ;
    using SQ9 = ADC3_SQR2_SQ9_Values<ADC3::SQR2, 10, 5, ReadWriteMode, ADC3SQR2Base> ;
    using SQ8 = ADC3_SQR2_SQ8_Values<ADC3::SQR2, 5, 5, ReadWriteMode, ADC3SQR2Base> ;
    using SQ7 = ADC3_SQR2_SQ7_Values<ADC3::SQR2, 0, 5, ReadWriteMode, ADC3SQR2Base> ;
    using FieldValues = ADC3_SQR2_SQ7_Values<ADC3::SQR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR2Pack  = Register<0x40013C30, 32, ReadWriteMode, ADC3SQR2Base, T...> ;

  struct ADC3SQR3Base {} ;

  struct SQR3 : public RegisterBase<0x40013C34, 32, ReadWriteMode>
  {
    using SQ6 = ADC3_SQR3_SQ6_Values<ADC3::SQR3, 25, 5, ReadWriteMode, ADC3SQR3Base> ;
    using SQ5 = ADC3_SQR3_SQ5_Values<ADC3::SQR3, 20, 5, ReadWriteMode, ADC3SQR3Base> ;
    using SQ4 = ADC3_SQR3_SQ4_Values<ADC3::SQR3, 15, 5, ReadWriteMode, ADC3SQR3Base> ;
    using SQ3 = ADC3_SQR3_SQ3_Values<ADC3::SQR3, 10, 5, ReadWriteMode, ADC3SQR3Base> ;
    using SQ2 = ADC3_SQR3_SQ2_Values<ADC3::SQR3, 5, 5, ReadWriteMode, ADC3SQR3Base> ;
    using SQ1 = ADC3_SQR3_SQ1_Values<ADC3::SQR3, 0, 5, ReadWriteMode, ADC3SQR3Base> ;
    using FieldValues = ADC3_SQR3_SQ1_Values<ADC3::SQR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR3Pack  = Register<0x40013C34, 32, ReadWriteMode, ADC3SQR3Base, T...> ;

  struct ADC3JSQRBase {} ;

  struct JSQR : public RegisterBase<0x40013C38, 32, ReadWriteMode>
  {
    using JL = ADC3_JSQR_JL_Values<ADC3::JSQR, 20, 2, ReadWriteMode, ADC3JSQRBase> ;
    using JSQ4 = ADC3_JSQR_JSQ4_Values<ADC3::JSQR, 15, 5, ReadWriteMode, ADC3JSQRBase> ;
    using JSQ3 = ADC3_JSQR_JSQ3_Values<ADC3::JSQR, 10, 5, ReadWriteMode, ADC3JSQRBase> ;
    using JSQ2 = ADC3_JSQR_JSQ2_Values<ADC3::JSQR, 5, 5, ReadWriteMode, ADC3JSQRBase> ;
    using JSQ1 = ADC3_JSQR_JSQ1_Values<ADC3::JSQR, 0, 5, ReadWriteMode, ADC3JSQRBase> ;
    using FieldValues = ADC3_JSQR_JSQ1_Values<ADC3::JSQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JSQRPack  = Register<0x40013C38, 32, ReadWriteMode, ADC3JSQRBase, T...> ;

  struct ADC3JDR1Base {} ;

  struct JDR1 : public RegisterBase<0x40013C3C, 32, ReadMode>
  {
    using JDATA = ADC3_JDR1_JDATA_Values<ADC3::JDR1, 0, 16, ReadMode, ADC3JDR1Base> ;
    using FieldValues = ADC3_JDR1_JDATA_Values<ADC3::JDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR1Pack  = Register<0x40013C3C, 32, ReadMode, ADC3JDR1Base, T...> ;

  struct ADC3JDR2Base {} ;

  struct JDR2 : public RegisterBase<0x40013C40, 32, ReadMode>
  {
    using JDATA = ADC3_JDR2_JDATA_Values<ADC3::JDR2, 0, 16, ReadMode, ADC3JDR2Base> ;
    using FieldValues = ADC3_JDR2_JDATA_Values<ADC3::JDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR2Pack  = Register<0x40013C40, 32, ReadMode, ADC3JDR2Base, T...> ;

  struct ADC3JDR3Base {} ;

  struct JDR3 : public RegisterBase<0x40013C44, 32, ReadMode>
  {
    using JDATA = ADC3_JDR3_JDATA_Values<ADC3::JDR3, 0, 16, ReadMode, ADC3JDR3Base> ;
    using FieldValues = ADC3_JDR3_JDATA_Values<ADC3::JDR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR3Pack  = Register<0x40013C44, 32, ReadMode, ADC3JDR3Base, T...> ;

  struct ADC3JDR4Base {} ;

  struct JDR4 : public RegisterBase<0x40013C48, 32, ReadMode>
  {
    using JDATA = ADC3_JDR4_JDATA_Values<ADC3::JDR4, 0, 16, ReadMode, ADC3JDR4Base> ;
    using FieldValues = ADC3_JDR4_JDATA_Values<ADC3::JDR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR4Pack  = Register<0x40013C48, 32, ReadMode, ADC3JDR4Base, T...> ;

  struct ADC3DRBase {} ;

  struct DR : public RegisterBase<0x40013C4C, 32, ReadMode>
  {
    using DATA = ADC3_DR_DATA_Values<ADC3::DR, 0, 16, ReadMode, ADC3DRBase> ;
    using FieldValues = ADC3_DR_DATA_Values<ADC3::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40013C4C, 32, ReadMode, ADC3DRBase, T...> ;

} ;

#endif //#if !defined(ADC3REGISTERS_HPP)
