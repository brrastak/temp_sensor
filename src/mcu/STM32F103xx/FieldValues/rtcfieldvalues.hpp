/*******************************************************************************
* Filename      : rtcfieldvalues.hpp
*
* Details       : Enumerations related with RTC peripheral. This header file is
*                 auto-generated for STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(RTCENUMS_HPP)
#define RTCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CRH_SECIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CRH_SECIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CRH_SECIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CRH_ALRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CRH_ALRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CRH_ALRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CRH_OWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CRH_OWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CRH_OWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CRL_SECF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CRL_SECF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CRL_SECF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CRL_ALRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CRL_ALRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CRL_ALRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CRL_OWF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CRL_OWF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CRL_OWF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CRL_RSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CRL_RSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CRL_RSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CRL_CNF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CRL_CNF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CRL_CNF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CRL_RTOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_CRL_RTOFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_CRL_RTOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_PRLH_PRLH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RTC_PRLH_PRLH_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_PRLL_PRLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_DIVH_DIVH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RTC_DIVH_DIVH_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_DIVL_DIVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CNTH_CNTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_CNTL_CNTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_ALRH_ALRH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_ALRL_ALRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(RTCENUMS_HPP)
