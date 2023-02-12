/*******************************************************************************
* Filename      : afiofieldvalues.hpp
*
* Details       : Enumerations related with AFIO peripheral. This header file is
*                 auto-generated for STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(AFIOENUMS_HPP)
#define AFIOENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EVCR_PIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EVCR_PIN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EVCR_PORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EVCR_PORT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EVCR_PORT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EVCR_PORT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EVCR_PORT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EVCR_PORT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EVCR_PORT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EVCR_PORT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EVCR_PORT_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EVCR_EVOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EVCR_EVOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EVCR_EVOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_SPI1_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_SPI1_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_SPI1_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_I2C1_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_I2C1_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_I2C1_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_USART1_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_USART1_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_USART1_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_USART2_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_USART2_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_USART2_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_USART3_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_USART3_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_USART3_REMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_MAPR_USART3_REMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_MAPR_USART3_REMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_TIM1_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_TIM1_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_TIM1_REMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_MAPR_TIM1_REMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_MAPR_TIM1_REMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_TIM2_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_TIM2_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_TIM2_REMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_MAPR_TIM2_REMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_MAPR_TIM2_REMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_TIM3_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_TIM3_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_TIM3_REMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_MAPR_TIM3_REMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_MAPR_TIM3_REMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_TIM4_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_TIM4_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_TIM4_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_CAN_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_CAN_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_CAN_REMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_MAPR_CAN_REMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_MAPR_CAN_REMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_PD01_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_PD01_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_PD01_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_TIM5CH4_IREMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_TIM5CH4_IREMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_TIM5CH4_IREMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_ADC1_ETRGINJ_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_ADC1_ETRGINJ_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_ADC1_ETRGINJ_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_ADC1_ETRGREG_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_ADC1_ETRGREG_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_ADC1_ETRGREG_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_ADC2_ETRGINJ_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_ADC2_ETRGINJ_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_ADC2_ETRGINJ_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_ADC2_ETRGREG_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_ADC2_ETRGREG_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_ADC2_ETRGREG_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR_SWJ_CFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR_SWJ_CFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR_SWJ_CFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_MAPR_SWJ_CFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_MAPR_SWJ_CFG_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_MAPR_SWJ_CFG_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_MAPR_SWJ_CFG_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_MAPR_SWJ_CFG_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_MAPR_SWJ_CFG_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR1_EXTI0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR1_EXTI0_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR1_EXTI1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR1_EXTI1_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR1_EXTI2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR1_EXTI2_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR1_EXTI3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR1_EXTI3_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR2_EXTI4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR2_EXTI4_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR2_EXTI5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR2_EXTI5_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR2_EXTI6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR2_EXTI6_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR2_EXTI7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR2_EXTI7_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR3_EXTI8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR3_EXTI8_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR3_EXTI9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR3_EXTI9_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR3_EXTI10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR3_EXTI10_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR3_EXTI11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR3_EXTI11_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR4_EXTI12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR4_EXTI12_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR4_EXTI13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR4_EXTI13_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR4_EXTI14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR4_EXTI14_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_EXTICR4_EXTI15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AFIO_EXTICR4_EXTI15_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR2_TIM9_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR2_TIM9_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR2_TIM9_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR2_TIM10_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR2_TIM10_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR2_TIM10_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR2_TIM11_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR2_TIM11_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR2_TIM11_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR2_TIM13_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR2_TIM13_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR2_TIM13_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR2_TIM14_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR2_TIM14_REMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR2_TIM14_REMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AFIO_MAPR2_FSMC_NADV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AFIO_MAPR2_FSMC_NADV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AFIO_MAPR2_FSMC_NADV_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(AFIOENUMS_HPP)
