/*******************************************************************************
* Filename      : systickfieldvalues.hpp
*
* Details       : Enumerations related with SysTick peripheral. This header file
*                 is auto-generated for ARMCM3 device.
*
*
*******************************************************************************/

#if !defined(SYSTICKENUMS_HPP)
#define SYSTICKENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SysTick_CSR_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<SysTick_CSR_ENABLE_Values, BaseType, 0U> ;
  using Enable = FieldValue<SysTick_CSR_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SysTick_CSR_TICKINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DisableInterrupt = FieldValue<SysTick_CSR_TICKINT_Values, BaseType, 0U> ;
  using EnableInterrupt = FieldValue<SysTick_CSR_TICKINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SysTick_CSR_CLKSOURCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ExternalClock = FieldValue<SysTick_CSR_CLKSOURCE_Values, BaseType, 0U> ;
  using ProcessorClock = FieldValue<SysTick_CSR_CLKSOURCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SysTick_CSR_COUNTFLAG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SysTick_CSR_COUNTFLAG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SysTick_CSR_COUNTFLAG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SysTick_RVR_RELOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SysTick_CVR_CURRENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SysTick_CALIB_TENMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SysTick_CALIB_SKEW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using _0 = FieldValue<SysTick_CALIB_SKEW_Values, BaseType, 0U> ;
  using _1 = FieldValue<SysTick_CALIB_SKEW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SysTick_CALIB_NOREF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using _0 = FieldValue<SysTick_CALIB_NOREF_Values, BaseType, 0U> ;
  using _1 = FieldValue<SysTick_CALIB_NOREF_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(SYSTICKENUMS_HPP)
