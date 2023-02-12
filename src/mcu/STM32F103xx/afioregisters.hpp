/*******************************************************************************
* Filename      : afioregisters.hpp
*
* Details       : Alternate function I/O. This header file is auto-generated for
*                 STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(AFIOREGISTERS_HPP)
#define AFIOREGISTERS_HPP

#include "afiofieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AFIO
{
  struct AFIOEVCRBase {} ;

  struct EVCR : public RegisterBase<0x40010000, 32, ReadWriteMode>
  {
    using PIN = AFIO_EVCR_PIN_Values<AFIO::EVCR, 0, 4, ReadWriteMode, AFIOEVCRBase> ;
    using PORT = AFIO_EVCR_PORT_Values<AFIO::EVCR, 4, 3, ReadWriteMode, AFIOEVCRBase> ;
    using EVOE = AFIO_EVCR_EVOE_Values<AFIO::EVCR, 7, 1, ReadWriteMode, AFIOEVCRBase> ;
    using FieldValues = AFIO_EVCR_EVOE_Values<AFIO::EVCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EVCRPack  = Register<0x40010000, 32, ReadWriteMode, AFIOEVCRBase, T...> ;

  struct AFIOMAPRBase {} ;

  struct MAPR : public RegisterBase<0x40010004, 32, ReadWriteMode>
  {
    using SPI1_REMAP = AFIO_MAPR_SPI1_REMAP_Values<AFIO::MAPR, 0, 1, ReadWriteMode, AFIOMAPRBase> ;
    using I2C1_REMAP = AFIO_MAPR_I2C1_REMAP_Values<AFIO::MAPR, 1, 1, ReadWriteMode, AFIOMAPRBase> ;
    using USART1_REMAP = AFIO_MAPR_USART1_REMAP_Values<AFIO::MAPR, 2, 1, ReadWriteMode, AFIOMAPRBase> ;
    using USART2_REMAP = AFIO_MAPR_USART2_REMAP_Values<AFIO::MAPR, 3, 1, ReadWriteMode, AFIOMAPRBase> ;
    using USART3_REMAP = AFIO_MAPR_USART3_REMAP_Values<AFIO::MAPR, 4, 2, ReadWriteMode, AFIOMAPRBase> ;
    using TIM1_REMAP = AFIO_MAPR_TIM1_REMAP_Values<AFIO::MAPR, 6, 2, ReadWriteMode, AFIOMAPRBase> ;
    using TIM2_REMAP = AFIO_MAPR_TIM2_REMAP_Values<AFIO::MAPR, 8, 2, ReadWriteMode, AFIOMAPRBase> ;
    using TIM3_REMAP = AFIO_MAPR_TIM3_REMAP_Values<AFIO::MAPR, 10, 2, ReadWriteMode, AFIOMAPRBase> ;
    using TIM4_REMAP = AFIO_MAPR_TIM4_REMAP_Values<AFIO::MAPR, 12, 1, ReadWriteMode, AFIOMAPRBase> ;
    using CAN_REMAP = AFIO_MAPR_CAN_REMAP_Values<AFIO::MAPR, 13, 2, ReadWriteMode, AFIOMAPRBase> ;
    using PD01_REMAP = AFIO_MAPR_PD01_REMAP_Values<AFIO::MAPR, 15, 1, ReadWriteMode, AFIOMAPRBase> ;
    using TIM5CH4_IREMAP = AFIO_MAPR_TIM5CH4_IREMAP_Values<AFIO::MAPR, 16, 1, ReadWriteMode, AFIOMAPRBase> ;
    using ADC1_ETRGINJ_REMAP = AFIO_MAPR_ADC1_ETRGINJ_REMAP_Values<AFIO::MAPR, 17, 1, ReadWriteMode, AFIOMAPRBase> ;
    using ADC1_ETRGREG_REMAP = AFIO_MAPR_ADC1_ETRGREG_REMAP_Values<AFIO::MAPR, 18, 1, ReadWriteMode, AFIOMAPRBase> ;
    using ADC2_ETRGINJ_REMAP = AFIO_MAPR_ADC2_ETRGINJ_REMAP_Values<AFIO::MAPR, 19, 1, ReadWriteMode, AFIOMAPRBase> ;
    using ADC2_ETRGREG_REMAP = AFIO_MAPR_ADC2_ETRGREG_REMAP_Values<AFIO::MAPR, 20, 1, ReadWriteMode, AFIOMAPRBase> ;
    using SWJ_CFG = AFIO_MAPR_SWJ_CFG_Values<AFIO::MAPR, 24, 3, WriteMode, AFIOMAPRBase> ;
    using FieldValues = AFIO_MAPR_SWJ_CFG_Values<AFIO::MAPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MAPRPack  = Register<0x40010004, 32, ReadWriteMode, AFIOMAPRBase, T...> ;

  struct AFIOEXTICR1Base {} ;

  struct EXTICR1 : public RegisterBase<0x40010008, 32, ReadWriteMode>
  {
    using EXTI0 = AFIO_EXTICR1_EXTI0_Values<AFIO::EXTICR1, 0, 4, ReadWriteMode, AFIOEXTICR1Base> ;
    using EXTI1 = AFIO_EXTICR1_EXTI1_Values<AFIO::EXTICR1, 4, 4, ReadWriteMode, AFIOEXTICR1Base> ;
    using EXTI2 = AFIO_EXTICR1_EXTI2_Values<AFIO::EXTICR1, 8, 4, ReadWriteMode, AFIOEXTICR1Base> ;
    using EXTI3 = AFIO_EXTICR1_EXTI3_Values<AFIO::EXTICR1, 12, 4, ReadWriteMode, AFIOEXTICR1Base> ;
    using FieldValues = AFIO_EXTICR1_EXTI3_Values<AFIO::EXTICR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR1Pack  = Register<0x40010008, 32, ReadWriteMode, AFIOEXTICR1Base, T...> ;

  struct AFIOEXTICR2Base {} ;

  struct EXTICR2 : public RegisterBase<0x4001000C, 32, ReadWriteMode>
  {
    using EXTI4 = AFIO_EXTICR2_EXTI4_Values<AFIO::EXTICR2, 0, 4, ReadWriteMode, AFIOEXTICR2Base> ;
    using EXTI5 = AFIO_EXTICR2_EXTI5_Values<AFIO::EXTICR2, 4, 4, ReadWriteMode, AFIOEXTICR2Base> ;
    using EXTI6 = AFIO_EXTICR2_EXTI6_Values<AFIO::EXTICR2, 8, 4, ReadWriteMode, AFIOEXTICR2Base> ;
    using EXTI7 = AFIO_EXTICR2_EXTI7_Values<AFIO::EXTICR2, 12, 4, ReadWriteMode, AFIOEXTICR2Base> ;
    using FieldValues = AFIO_EXTICR2_EXTI7_Values<AFIO::EXTICR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR2Pack  = Register<0x4001000C, 32, ReadWriteMode, AFIOEXTICR2Base, T...> ;

  struct AFIOEXTICR3Base {} ;

  struct EXTICR3 : public RegisterBase<0x40010010, 32, ReadWriteMode>
  {
    using EXTI8 = AFIO_EXTICR3_EXTI8_Values<AFIO::EXTICR3, 0, 4, ReadWriteMode, AFIOEXTICR3Base> ;
    using EXTI9 = AFIO_EXTICR3_EXTI9_Values<AFIO::EXTICR3, 4, 4, ReadWriteMode, AFIOEXTICR3Base> ;
    using EXTI10 = AFIO_EXTICR3_EXTI10_Values<AFIO::EXTICR3, 8, 4, ReadWriteMode, AFIOEXTICR3Base> ;
    using EXTI11 = AFIO_EXTICR3_EXTI11_Values<AFIO::EXTICR3, 12, 4, ReadWriteMode, AFIOEXTICR3Base> ;
    using FieldValues = AFIO_EXTICR3_EXTI11_Values<AFIO::EXTICR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR3Pack  = Register<0x40010010, 32, ReadWriteMode, AFIOEXTICR3Base, T...> ;

  struct AFIOEXTICR4Base {} ;

  struct EXTICR4 : public RegisterBase<0x40010014, 32, ReadWriteMode>
  {
    using EXTI12 = AFIO_EXTICR4_EXTI12_Values<AFIO::EXTICR4, 0, 4, ReadWriteMode, AFIOEXTICR4Base> ;
    using EXTI13 = AFIO_EXTICR4_EXTI13_Values<AFIO::EXTICR4, 4, 4, ReadWriteMode, AFIOEXTICR4Base> ;
    using EXTI14 = AFIO_EXTICR4_EXTI14_Values<AFIO::EXTICR4, 8, 4, ReadWriteMode, AFIOEXTICR4Base> ;
    using EXTI15 = AFIO_EXTICR4_EXTI15_Values<AFIO::EXTICR4, 12, 4, ReadWriteMode, AFIOEXTICR4Base> ;
    using FieldValues = AFIO_EXTICR4_EXTI15_Values<AFIO::EXTICR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR4Pack  = Register<0x40010014, 32, ReadWriteMode, AFIOEXTICR4Base, T...> ;

  struct AFIOMAPR2Base {} ;

  struct MAPR2 : public RegisterBase<0x4001001C, 32, ReadWriteMode>
  {
    using TIM9_REMAP = AFIO_MAPR2_TIM9_REMAP_Values<AFIO::MAPR2, 5, 1, ReadWriteMode, AFIOMAPR2Base> ;
    using TIM10_REMAP = AFIO_MAPR2_TIM10_REMAP_Values<AFIO::MAPR2, 6, 1, ReadWriteMode, AFIOMAPR2Base> ;
    using TIM11_REMAP = AFIO_MAPR2_TIM11_REMAP_Values<AFIO::MAPR2, 7, 1, ReadWriteMode, AFIOMAPR2Base> ;
    using TIM13_REMAP = AFIO_MAPR2_TIM13_REMAP_Values<AFIO::MAPR2, 8, 1, ReadWriteMode, AFIOMAPR2Base> ;
    using TIM14_REMAP = AFIO_MAPR2_TIM14_REMAP_Values<AFIO::MAPR2, 9, 1, ReadWriteMode, AFIOMAPR2Base> ;
    using FSMC_NADV = AFIO_MAPR2_FSMC_NADV_Values<AFIO::MAPR2, 10, 1, ReadWriteMode, AFIOMAPR2Base> ;
    using FieldValues = AFIO_MAPR2_FSMC_NADV_Values<AFIO::MAPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MAPR2Pack  = Register<0x4001001C, 32, ReadWriteMode, AFIOMAPR2Base, T...> ;

} ;

#endif //#if !defined(AFIOREGISTERS_HPP)
