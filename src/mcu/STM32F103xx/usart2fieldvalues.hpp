/*******************************************************************************
* Filename      : usart2fieldvalues.hpp
*
* Details       : Enumerations related with USART2 peripheral. This header file
*                 is auto-generated for STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(USART2ENUMS_HPP)
#define USART2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_SR_CTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_SR_CTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_SR_CTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_SR_LBD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_SR_LBD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_SR_LBD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_SR_TXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_SR_TXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_SR_TXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_SR_TC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_SR_TC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_SR_TC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_SR_RXNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_SR_RXNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_SR_RXNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_SR_IDLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_SR_IDLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_SR_IDLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_SR_ORE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_SR_ORE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_SR_ORE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_SR_NE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_SR_NE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_SR_NE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_SR_FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_SR_FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_SR_FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_SR_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_SR_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_SR_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_DR_DR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_BRR_DIV_Mantissa_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_BRR_DIV_Fraction_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USART2_BRR_DIV_Fraction_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_UE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_UE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_UE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_M_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_WAKE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_WAKE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_WAKE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_PCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_PCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_PCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_PS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_PS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_PS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_PEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_PEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_PEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_TXEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_TXEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_TXEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_TCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_TCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_TCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_RXNEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_RXNEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_RXNEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_IDLEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_IDLEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_IDLEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_TE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_TE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_TE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_RE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_RE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_RE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_RWU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_RWU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_RWU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR1_SBK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR1_SBK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR1_SBK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR2_LINEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR2_LINEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR2_LINEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR2_STOP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USART2_CR2_STOP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USART2_CR2_STOP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR2_CLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR2_CLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR2_CLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR2_CPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR2_CPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR2_CPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR2_CPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR2_CPHA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR2_CPHA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR2_LBCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR2_LBCL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR2_LBCL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR2_LBDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR2_LBDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR2_LBDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR2_LBDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR2_LBDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR2_LBDL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR2_ADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR2_ADD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR2_ADD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USART2_CR2_ADD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USART2_CR2_ADD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USART2_CR2_ADD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USART2_CR2_ADD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USART2_CR2_ADD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USART2_CR2_ADD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USART2_CR2_ADD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USART2_CR2_ADD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USART2_CR2_ADD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USART2_CR2_ADD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USART2_CR2_ADD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USART2_CR2_ADD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USART2_CR2_ADD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USART2_CR2_ADD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR3_CTSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR3_CTSIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR3_CTSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR3_CTSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR3_CTSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR3_CTSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR3_RTSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR3_RTSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR3_RTSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR3_DMAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR3_DMAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR3_DMAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR3_DMAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR3_DMAR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR3_DMAR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR3_SCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR3_SCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR3_SCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR3_NACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR3_NACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR3_NACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR3_HDSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR3_HDSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR3_HDSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR3_IRLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR3_IRLP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR3_IRLP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR3_IREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR3_IREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR3_IREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_CR3_EIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USART2_CR3_EIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USART2_CR3_EIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_GTPR_GT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USART2_GTPR_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(USART2ENUMS_HPP)
