/*******************************************************************************
* Filename      : adc2registers.hpp
*
* Details       : Analog to digital converter. This header file is
*                 auto-generated for STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(ADC2REGISTERS_HPP)
#define ADC2REGISTERS_HPP

#include "adc2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC2
{
  struct ADC2SRBase {} ;

  struct SR : public RegisterBase<0x40012800, 32, ReadWriteMode>
  {
    using STRT = ADC2_SR_STRT_Values<ADC2::SR, 4, 1, ReadWriteMode, ADC2SRBase> ;
    using JSTRT = ADC2_SR_JSTRT_Values<ADC2::SR, 3, 1, ReadWriteMode, ADC2SRBase> ;
    using JEOC = ADC2_SR_JEOC_Values<ADC2::SR, 2, 1, ReadWriteMode, ADC2SRBase> ;
    using EOC = ADC2_SR_EOC_Values<ADC2::SR, 1, 1, ReadWriteMode, ADC2SRBase> ;
    using AWD = ADC2_SR_AWD_Values<ADC2::SR, 0, 1, ReadWriteMode, ADC2SRBase> ;
    using FieldValues = ADC2_SR_AWD_Values<ADC2::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40012800, 32, ReadWriteMode, ADC2SRBase, T...> ;

  struct ADC2CR1Base {} ;

  struct CR1 : public RegisterBase<0x40012804, 32, ReadWriteMode>
  {
    using AWDEN = ADC2_CR1_AWDEN_Values<ADC2::CR1, 23, 1, ReadWriteMode, ADC2CR1Base> ;
    using JAWDEN = ADC2_CR1_JAWDEN_Values<ADC2::CR1, 22, 1, ReadWriteMode, ADC2CR1Base> ;
    using DISCNUM = ADC2_CR1_DISCNUM_Values<ADC2::CR1, 13, 3, ReadWriteMode, ADC2CR1Base> ;
    using JDISCEN = ADC2_CR1_JDISCEN_Values<ADC2::CR1, 12, 1, ReadWriteMode, ADC2CR1Base> ;
    using DISCEN = ADC2_CR1_DISCEN_Values<ADC2::CR1, 11, 1, ReadWriteMode, ADC2CR1Base> ;
    using JAUTO = ADC2_CR1_JAUTO_Values<ADC2::CR1, 10, 1, ReadWriteMode, ADC2CR1Base> ;
    using AWDSGL = ADC2_CR1_AWDSGL_Values<ADC2::CR1, 9, 1, ReadWriteMode, ADC2CR1Base> ;
    using SCAN = ADC2_CR1_SCAN_Values<ADC2::CR1, 8, 1, ReadWriteMode, ADC2CR1Base> ;
    using JEOCIE = ADC2_CR1_JEOCIE_Values<ADC2::CR1, 7, 1, ReadWriteMode, ADC2CR1Base> ;
    using AWDIE = ADC2_CR1_AWDIE_Values<ADC2::CR1, 6, 1, ReadWriteMode, ADC2CR1Base> ;
    using EOCIE = ADC2_CR1_EOCIE_Values<ADC2::CR1, 5, 1, ReadWriteMode, ADC2CR1Base> ;
    using AWDCH = ADC2_CR1_AWDCH_Values<ADC2::CR1, 0, 5, ReadWriteMode, ADC2CR1Base> ;
    using FieldValues = ADC2_CR1_AWDCH_Values<ADC2::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40012804, 32, ReadWriteMode, ADC2CR1Base, T...> ;

  struct ADC2CR2Base {} ;

  struct CR2 : public RegisterBase<0x40012808, 32, ReadWriteMode>
  {
    using TSVREFE = ADC2_CR2_TSVREFE_Values<ADC2::CR2, 23, 1, ReadWriteMode, ADC2CR2Base> ;
    using SWSTART = ADC2_CR2_SWSTART_Values<ADC2::CR2, 22, 1, ReadWriteMode, ADC2CR2Base> ;
    using JSWSTART = ADC2_CR2_JSWSTART_Values<ADC2::CR2, 21, 1, ReadWriteMode, ADC2CR2Base> ;
    using EXTTRIG = ADC2_CR2_EXTTRIG_Values<ADC2::CR2, 20, 1, ReadWriteMode, ADC2CR2Base> ;
    using EXTSEL = ADC2_CR2_EXTSEL_Values<ADC2::CR2, 17, 3, ReadWriteMode, ADC2CR2Base> ;
    using JEXTTRIG = ADC2_CR2_JEXTTRIG_Values<ADC2::CR2, 15, 1, ReadWriteMode, ADC2CR2Base> ;
    using JEXTSEL = ADC2_CR2_JEXTSEL_Values<ADC2::CR2, 12, 3, ReadWriteMode, ADC2CR2Base> ;
    using ALIGN = ADC2_CR2_ALIGN_Values<ADC2::CR2, 11, 1, ReadWriteMode, ADC2CR2Base> ;
    using DMA = ADC2_CR2_DMA_Values<ADC2::CR2, 8, 1, ReadWriteMode, ADC2CR2Base> ;
    using RSTCAL = ADC2_CR2_RSTCAL_Values<ADC2::CR2, 3, 1, ReadWriteMode, ADC2CR2Base> ;
    using CAL = ADC2_CR2_CAL_Values<ADC2::CR2, 2, 1, ReadWriteMode, ADC2CR2Base> ;
    using CONT = ADC2_CR2_CONT_Values<ADC2::CR2, 1, 1, ReadWriteMode, ADC2CR2Base> ;
    using ADON = ADC2_CR2_ADON_Values<ADC2::CR2, 0, 1, ReadWriteMode, ADC2CR2Base> ;
    using FieldValues = ADC2_CR2_ADON_Values<ADC2::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40012808, 32, ReadWriteMode, ADC2CR2Base, T...> ;

  struct ADC2SMPR1Base {} ;

  struct SMPR1 : public RegisterBase<0x4001280C, 32, ReadWriteMode>
  {
    using SMP10 = ADC2_SMPR1_SMP10_Values<ADC2::SMPR1, 0, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP11 = ADC2_SMPR1_SMP11_Values<ADC2::SMPR1, 3, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP12 = ADC2_SMPR1_SMP12_Values<ADC2::SMPR1, 6, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP13 = ADC2_SMPR1_SMP13_Values<ADC2::SMPR1, 9, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP14 = ADC2_SMPR1_SMP14_Values<ADC2::SMPR1, 12, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP15 = ADC2_SMPR1_SMP15_Values<ADC2::SMPR1, 15, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP16 = ADC2_SMPR1_SMP16_Values<ADC2::SMPR1, 18, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using SMP17 = ADC2_SMPR1_SMP17_Values<ADC2::SMPR1, 21, 3, ReadWriteMode, ADC2SMPR1Base> ;
    using FieldValues = ADC2_SMPR1_SMP17_Values<ADC2::SMPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR1Pack  = Register<0x4001280C, 32, ReadWriteMode, ADC2SMPR1Base, T...> ;

  struct ADC2SMPR2Base {} ;

  struct SMPR2 : public RegisterBase<0x40012810, 32, ReadWriteMode>
  {
    using SMP0 = ADC2_SMPR2_SMP0_Values<ADC2::SMPR2, 0, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP1 = ADC2_SMPR2_SMP1_Values<ADC2::SMPR2, 3, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP2 = ADC2_SMPR2_SMP2_Values<ADC2::SMPR2, 6, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP3 = ADC2_SMPR2_SMP3_Values<ADC2::SMPR2, 9, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP4 = ADC2_SMPR2_SMP4_Values<ADC2::SMPR2, 12, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP5 = ADC2_SMPR2_SMP5_Values<ADC2::SMPR2, 15, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP6 = ADC2_SMPR2_SMP6_Values<ADC2::SMPR2, 18, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP7 = ADC2_SMPR2_SMP7_Values<ADC2::SMPR2, 21, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP8 = ADC2_SMPR2_SMP8_Values<ADC2::SMPR2, 24, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using SMP9 = ADC2_SMPR2_SMP9_Values<ADC2::SMPR2, 27, 3, ReadWriteMode, ADC2SMPR2Base> ;
    using FieldValues = ADC2_SMPR2_SMP9_Values<ADC2::SMPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR2Pack  = Register<0x40012810, 32, ReadWriteMode, ADC2SMPR2Base, T...> ;

  struct ADC2JOFR1Base {} ;

  struct JOFR1 : public RegisterBase<0x40012814, 32, ReadWriteMode>
  {
    using JOFFSET1 = ADC2_JOFR1_JOFFSET1_Values<ADC2::JOFR1, 0, 12, ReadWriteMode, ADC2JOFR1Base> ;
    using FieldValues = ADC2_JOFR1_JOFFSET1_Values<ADC2::JOFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR1Pack  = Register<0x40012814, 32, ReadWriteMode, ADC2JOFR1Base, T...> ;

  struct ADC2JOFR2Base {} ;

  struct JOFR2 : public RegisterBase<0x40012818, 32, ReadWriteMode>
  {
    using JOFFSET2 = ADC2_JOFR2_JOFFSET2_Values<ADC2::JOFR2, 0, 12, ReadWriteMode, ADC2JOFR2Base> ;
    using FieldValues = ADC2_JOFR2_JOFFSET2_Values<ADC2::JOFR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR2Pack  = Register<0x40012818, 32, ReadWriteMode, ADC2JOFR2Base, T...> ;

  struct ADC2JOFR3Base {} ;

  struct JOFR3 : public RegisterBase<0x4001281C, 32, ReadWriteMode>
  {
    using JOFFSET3 = ADC2_JOFR3_JOFFSET3_Values<ADC2::JOFR3, 0, 12, ReadWriteMode, ADC2JOFR3Base> ;
    using FieldValues = ADC2_JOFR3_JOFFSET3_Values<ADC2::JOFR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR3Pack  = Register<0x4001281C, 32, ReadWriteMode, ADC2JOFR3Base, T...> ;

  struct ADC2JOFR4Base {} ;

  struct JOFR4 : public RegisterBase<0x40012820, 32, ReadWriteMode>
  {
    using JOFFSET4 = ADC2_JOFR4_JOFFSET4_Values<ADC2::JOFR4, 0, 12, ReadWriteMode, ADC2JOFR4Base> ;
    using FieldValues = ADC2_JOFR4_JOFFSET4_Values<ADC2::JOFR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JOFR4Pack  = Register<0x40012820, 32, ReadWriteMode, ADC2JOFR4Base, T...> ;

  struct ADC2HTRBase {} ;

  struct HTR : public RegisterBase<0x40012824, 32, ReadWriteMode>
  {
    using HT = ADC2_HTR_HT_Values<ADC2::HTR, 0, 12, ReadWriteMode, ADC2HTRBase> ;
    using FieldValues = ADC2_HTR_HT_Values<ADC2::HTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HTRPack  = Register<0x40012824, 32, ReadWriteMode, ADC2HTRBase, T...> ;

  struct ADC2LTRBase {} ;

  struct LTR : public RegisterBase<0x40012828, 32, ReadWriteMode>
  {
    using LT = ADC2_LTR_LT_Values<ADC2::LTR, 0, 12, ReadWriteMode, ADC2LTRBase> ;
    using FieldValues = ADC2_LTR_LT_Values<ADC2::LTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LTRPack  = Register<0x40012828, 32, ReadWriteMode, ADC2LTRBase, T...> ;

  struct ADC2SQR1Base {} ;

  struct SQR1 : public RegisterBase<0x4001282C, 32, ReadWriteMode>
  {
    using L = ADC2_SQR1_L_Values<ADC2::SQR1, 20, 4, ReadWriteMode, ADC2SQR1Base> ;
    using SQ16 = ADC2_SQR1_SQ16_Values<ADC2::SQR1, 15, 5, ReadWriteMode, ADC2SQR1Base> ;
    using SQ15 = ADC2_SQR1_SQ15_Values<ADC2::SQR1, 10, 5, ReadWriteMode, ADC2SQR1Base> ;
    using SQ14 = ADC2_SQR1_SQ14_Values<ADC2::SQR1, 5, 5, ReadWriteMode, ADC2SQR1Base> ;
    using SQ13 = ADC2_SQR1_SQ13_Values<ADC2::SQR1, 0, 5, ReadWriteMode, ADC2SQR1Base> ;
    using FieldValues = ADC2_SQR1_SQ13_Values<ADC2::SQR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR1Pack  = Register<0x4001282C, 32, ReadWriteMode, ADC2SQR1Base, T...> ;

  struct ADC2SQR2Base {} ;

  struct SQR2 : public RegisterBase<0x40012830, 32, ReadWriteMode>
  {
    using SQ12 = ADC2_SQR2_SQ12_Values<ADC2::SQR2, 25, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ11 = ADC2_SQR2_SQ11_Values<ADC2::SQR2, 20, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ10 = ADC2_SQR2_SQ10_Values<ADC2::SQR2, 15, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ9 = ADC2_SQR2_SQ9_Values<ADC2::SQR2, 10, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ8 = ADC2_SQR2_SQ8_Values<ADC2::SQR2, 5, 5, ReadWriteMode, ADC2SQR2Base> ;
    using SQ7 = ADC2_SQR2_SQ7_Values<ADC2::SQR2, 0, 5, ReadWriteMode, ADC2SQR2Base> ;
    using FieldValues = ADC2_SQR2_SQ7_Values<ADC2::SQR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR2Pack  = Register<0x40012830, 32, ReadWriteMode, ADC2SQR2Base, T...> ;

  struct ADC2SQR3Base {} ;

  struct SQR3 : public RegisterBase<0x40012834, 32, ReadWriteMode>
  {
    using SQ6 = ADC2_SQR3_SQ6_Values<ADC2::SQR3, 25, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ5 = ADC2_SQR3_SQ5_Values<ADC2::SQR3, 20, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ4 = ADC2_SQR3_SQ4_Values<ADC2::SQR3, 15, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ3 = ADC2_SQR3_SQ3_Values<ADC2::SQR3, 10, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ2 = ADC2_SQR3_SQ2_Values<ADC2::SQR3, 5, 5, ReadWriteMode, ADC2SQR3Base> ;
    using SQ1 = ADC2_SQR3_SQ1_Values<ADC2::SQR3, 0, 5, ReadWriteMode, ADC2SQR3Base> ;
    using FieldValues = ADC2_SQR3_SQ1_Values<ADC2::SQR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR3Pack  = Register<0x40012834, 32, ReadWriteMode, ADC2SQR3Base, T...> ;

  struct ADC2JSQRBase {} ;

  struct JSQR : public RegisterBase<0x40012838, 32, ReadWriteMode>
  {
    using JL = ADC2_JSQR_JL_Values<ADC2::JSQR, 20, 2, ReadWriteMode, ADC2JSQRBase> ;
    using JSQ4 = ADC2_JSQR_JSQ4_Values<ADC2::JSQR, 15, 5, ReadWriteMode, ADC2JSQRBase> ;
    using JSQ3 = ADC2_JSQR_JSQ3_Values<ADC2::JSQR, 10, 5, ReadWriteMode, ADC2JSQRBase> ;
    using JSQ2 = ADC2_JSQR_JSQ2_Values<ADC2::JSQR, 5, 5, ReadWriteMode, ADC2JSQRBase> ;
    using JSQ1 = ADC2_JSQR_JSQ1_Values<ADC2::JSQR, 0, 5, ReadWriteMode, ADC2JSQRBase> ;
    using FieldValues = ADC2_JSQR_JSQ1_Values<ADC2::JSQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JSQRPack  = Register<0x40012838, 32, ReadWriteMode, ADC2JSQRBase, T...> ;

  struct ADC2JDR1Base {} ;

  struct JDR1 : public RegisterBase<0x4001283C, 32, ReadMode>
  {
    using JDATA = ADC2_JDR1_JDATA_Values<ADC2::JDR1, 0, 16, ReadMode, ADC2JDR1Base> ;
    using FieldValues = ADC2_JDR1_JDATA_Values<ADC2::JDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR1Pack  = Register<0x4001283C, 32, ReadMode, ADC2JDR1Base, T...> ;

  struct ADC2JDR2Base {} ;

  struct JDR2 : public RegisterBase<0x40012840, 32, ReadMode>
  {
    using JDATA = ADC2_JDR2_JDATA_Values<ADC2::JDR2, 0, 16, ReadMode, ADC2JDR2Base> ;
    using FieldValues = ADC2_JDR2_JDATA_Values<ADC2::JDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR2Pack  = Register<0x40012840, 32, ReadMode, ADC2JDR2Base, T...> ;

  struct ADC2JDR3Base {} ;

  struct JDR3 : public RegisterBase<0x40012844, 32, ReadMode>
  {
    using JDATA = ADC2_JDR3_JDATA_Values<ADC2::JDR3, 0, 16, ReadMode, ADC2JDR3Base> ;
    using FieldValues = ADC2_JDR3_JDATA_Values<ADC2::JDR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR3Pack  = Register<0x40012844, 32, ReadMode, ADC2JDR3Base, T...> ;

  struct ADC2JDR4Base {} ;

  struct JDR4 : public RegisterBase<0x40012848, 32, ReadMode>
  {
    using JDATA = ADC2_JDR4_JDATA_Values<ADC2::JDR4, 0, 16, ReadMode, ADC2JDR4Base> ;
    using FieldValues = ADC2_JDR4_JDATA_Values<ADC2::JDR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR4Pack  = Register<0x40012848, 32, ReadMode, ADC2JDR4Base, T...> ;

  struct ADC2DRBase {} ;

  struct DR : public RegisterBase<0x4001284C, 32, ReadMode>
  {
    using DATA = ADC2_DR_DATA_Values<ADC2::DR, 0, 16, ReadMode, ADC2DRBase> ;
    using FieldValues = ADC2_DR_DATA_Values<ADC2::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x4001284C, 32, ReadMode, ADC2DRBase, T...> ;

} ;

#endif //#if !defined(ADC2REGISTERS_HPP)
