/*******************************************************************************
* Filename      : flashfieldvalues.hpp
*
* Details       : Enumerations related with FLASH peripheral. This header file
*                 is auto-generated for STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(FLASHENUMS_HPP)
#define FLASHENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_LATENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLASH_ACR_LATENCY_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_HLFCYA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_HLFCYA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_HLFCYA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_PRFTBE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_PRFTBE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_PRFTBE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_ACR_PRFTBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_ACR_PRFTBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_ACR_PRFTBS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_KEYR_KEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OPTKEYR_OPTKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_EOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_EOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_EOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_WRPRTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_WRPRTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_WRPRTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_PGERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_PGERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_PGERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_SR_BSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_SR_BSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_SR_BSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_PG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_PG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_PG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_PER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_PER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_PER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_MER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_MER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_MER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_OPTPG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_OPTPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_OPTPG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_OPTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_OPTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_OPTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_STRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_STRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_OPTWRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_OPTWRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_OPTWRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_CR_EOPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_CR_EOPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_CR_EOPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_AR_FAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_OPTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OBR_OPTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_OPTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_RDPRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OBR_RDPRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_RDPRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_WDG_SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OBR_WDG_SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_WDG_SW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_nRST_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OBR_nRST_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_nRST_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_nRST_STDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLASH_OBR_nRST_STDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLASH_OBR_nRST_STDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_Data0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_OBR_Data1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLASH_WRPR_WRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(FLASHENUMS_HPP)
