/*******************************************************************************
* Filename      : bkpregisters.hpp
*
* Details       : Backup registers. This header file is auto-generated for
*                 STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(BKPREGISTERS_HPP)
#define BKPREGISTERS_HPP

#include "bkpfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct BKP
{
  struct BKPDR1Base {} ;

  struct DR1 : public RegisterBase<0x40006C04, 32, ReadWriteMode>
  {
    using D1 = BKP_DR1_D1_Values<BKP::DR1, 0, 16, ReadWriteMode, BKPDR1Base> ;
    using FieldValues = BKP_DR1_D1_Values<BKP::DR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR1Pack  = Register<0x40006C04, 32, ReadWriteMode, BKPDR1Base, T...> ;

  struct BKPDR2Base {} ;

  struct DR2 : public RegisterBase<0x40006C08, 32, ReadWriteMode>
  {
    using D2 = BKP_DR2_D2_Values<BKP::DR2, 0, 16, ReadWriteMode, BKPDR2Base> ;
    using FieldValues = BKP_DR2_D2_Values<BKP::DR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR2Pack  = Register<0x40006C08, 32, ReadWriteMode, BKPDR2Base, T...> ;

  struct BKPDR3Base {} ;

  struct DR3 : public RegisterBase<0x40006C0C, 32, ReadWriteMode>
  {
    using D3 = BKP_DR3_D3_Values<BKP::DR3, 0, 16, ReadWriteMode, BKPDR3Base> ;
    using FieldValues = BKP_DR3_D3_Values<BKP::DR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR3Pack  = Register<0x40006C0C, 32, ReadWriteMode, BKPDR3Base, T...> ;

  struct BKPDR4Base {} ;

  struct DR4 : public RegisterBase<0x40006C10, 32, ReadWriteMode>
  {
    using D4 = BKP_DR4_D4_Values<BKP::DR4, 0, 16, ReadWriteMode, BKPDR4Base> ;
    using FieldValues = BKP_DR4_D4_Values<BKP::DR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR4Pack  = Register<0x40006C10, 32, ReadWriteMode, BKPDR4Base, T...> ;

  struct BKPDR5Base {} ;

  struct DR5 : public RegisterBase<0x40006C14, 32, ReadWriteMode>
  {
    using D5 = BKP_DR5_D5_Values<BKP::DR5, 0, 16, ReadWriteMode, BKPDR5Base> ;
    using FieldValues = BKP_DR5_D5_Values<BKP::DR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR5Pack  = Register<0x40006C14, 32, ReadWriteMode, BKPDR5Base, T...> ;

  struct BKPDR6Base {} ;

  struct DR6 : public RegisterBase<0x40006C18, 32, ReadWriteMode>
  {
    using D6 = BKP_DR6_D6_Values<BKP::DR6, 0, 16, ReadWriteMode, BKPDR6Base> ;
    using FieldValues = BKP_DR6_D6_Values<BKP::DR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR6Pack  = Register<0x40006C18, 32, ReadWriteMode, BKPDR6Base, T...> ;

  struct BKPDR7Base {} ;

  struct DR7 : public RegisterBase<0x40006C1C, 32, ReadWriteMode>
  {
    using D7 = BKP_DR7_D7_Values<BKP::DR7, 0, 16, ReadWriteMode, BKPDR7Base> ;
    using FieldValues = BKP_DR7_D7_Values<BKP::DR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR7Pack  = Register<0x40006C1C, 32, ReadWriteMode, BKPDR7Base, T...> ;

  struct BKPDR8Base {} ;

  struct DR8 : public RegisterBase<0x40006C20, 32, ReadWriteMode>
  {
    using D8 = BKP_DR8_D8_Values<BKP::DR8, 0, 16, ReadWriteMode, BKPDR8Base> ;
    using FieldValues = BKP_DR8_D8_Values<BKP::DR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR8Pack  = Register<0x40006C20, 32, ReadWriteMode, BKPDR8Base, T...> ;

  struct BKPDR9Base {} ;

  struct DR9 : public RegisterBase<0x40006C24, 32, ReadWriteMode>
  {
    using D9 = BKP_DR9_D9_Values<BKP::DR9, 0, 16, ReadWriteMode, BKPDR9Base> ;
    using FieldValues = BKP_DR9_D9_Values<BKP::DR9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR9Pack  = Register<0x40006C24, 32, ReadWriteMode, BKPDR9Base, T...> ;

  struct BKPDR10Base {} ;

  struct DR10 : public RegisterBase<0x40006C28, 32, ReadWriteMode>
  {
    using D10 = BKP_DR10_D10_Values<BKP::DR10, 0, 16, ReadWriteMode, BKPDR10Base> ;
    using FieldValues = BKP_DR10_D10_Values<BKP::DR10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR10Pack  = Register<0x40006C28, 32, ReadWriteMode, BKPDR10Base, T...> ;

  struct BKPDR11Base {} ;

  struct DR11 : public RegisterBase<0x40006C40, 32, ReadWriteMode>
  {
    using DR11Field = BKP_DR11_DR11_Values<BKP::DR11, 0, 16, ReadWriteMode, BKPDR11Base> ;
    using FieldValues = BKP_DR11_DR11_Values<BKP::DR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR11Pack  = Register<0x40006C40, 32, ReadWriteMode, BKPDR11Base, T...> ;

  struct BKPDR12Base {} ;

  struct DR12 : public RegisterBase<0x40006C44, 32, ReadWriteMode>
  {
    using DR12Field = BKP_DR12_DR12_Values<BKP::DR12, 0, 16, ReadWriteMode, BKPDR12Base> ;
    using FieldValues = BKP_DR12_DR12_Values<BKP::DR12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR12Pack  = Register<0x40006C44, 32, ReadWriteMode, BKPDR12Base, T...> ;

  struct BKPDR13Base {} ;

  struct DR13 : public RegisterBase<0x40006C48, 32, ReadWriteMode>
  {
    using DR13Field = BKP_DR13_DR13_Values<BKP::DR13, 0, 16, ReadWriteMode, BKPDR13Base> ;
    using FieldValues = BKP_DR13_DR13_Values<BKP::DR13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR13Pack  = Register<0x40006C48, 32, ReadWriteMode, BKPDR13Base, T...> ;

  struct BKPDR14Base {} ;

  struct DR14 : public RegisterBase<0x40006C4C, 32, ReadWriteMode>
  {
    using D14 = BKP_DR14_D14_Values<BKP::DR14, 0, 16, ReadWriteMode, BKPDR14Base> ;
    using FieldValues = BKP_DR14_D14_Values<BKP::DR14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR14Pack  = Register<0x40006C4C, 32, ReadWriteMode, BKPDR14Base, T...> ;

  struct BKPDR15Base {} ;

  struct DR15 : public RegisterBase<0x40006C50, 32, ReadWriteMode>
  {
    using D15 = BKP_DR15_D15_Values<BKP::DR15, 0, 16, ReadWriteMode, BKPDR15Base> ;
    using FieldValues = BKP_DR15_D15_Values<BKP::DR15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR15Pack  = Register<0x40006C50, 32, ReadWriteMode, BKPDR15Base, T...> ;

  struct BKPDR16Base {} ;

  struct DR16 : public RegisterBase<0x40006C54, 32, ReadWriteMode>
  {
    using D16 = BKP_DR16_D16_Values<BKP::DR16, 0, 16, ReadWriteMode, BKPDR16Base> ;
    using FieldValues = BKP_DR16_D16_Values<BKP::DR16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR16Pack  = Register<0x40006C54, 32, ReadWriteMode, BKPDR16Base, T...> ;

  struct BKPDR17Base {} ;

  struct DR17 : public RegisterBase<0x40006C58, 32, ReadWriteMode>
  {
    using D17 = BKP_DR17_D17_Values<BKP::DR17, 0, 16, ReadWriteMode, BKPDR17Base> ;
    using FieldValues = BKP_DR17_D17_Values<BKP::DR17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR17Pack  = Register<0x40006C58, 32, ReadWriteMode, BKPDR17Base, T...> ;

  struct BKPDR18Base {} ;

  struct DR18 : public RegisterBase<0x40006C5C, 32, ReadWriteMode>
  {
    using D18 = BKP_DR18_D18_Values<BKP::DR18, 0, 16, ReadWriteMode, BKPDR18Base> ;
    using FieldValues = BKP_DR18_D18_Values<BKP::DR18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR18Pack  = Register<0x40006C5C, 32, ReadWriteMode, BKPDR18Base, T...> ;

  struct BKPDR19Base {} ;

  struct DR19 : public RegisterBase<0x40006C60, 32, ReadWriteMode>
  {
    using D19 = BKP_DR19_D19_Values<BKP::DR19, 0, 16, ReadWriteMode, BKPDR19Base> ;
    using FieldValues = BKP_DR19_D19_Values<BKP::DR19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR19Pack  = Register<0x40006C60, 32, ReadWriteMode, BKPDR19Base, T...> ;

  struct BKPDR20Base {} ;

  struct DR20 : public RegisterBase<0x40006C64, 32, ReadWriteMode>
  {
    using D20 = BKP_DR20_D20_Values<BKP::DR20, 0, 16, ReadWriteMode, BKPDR20Base> ;
    using FieldValues = BKP_DR20_D20_Values<BKP::DR20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR20Pack  = Register<0x40006C64, 32, ReadWriteMode, BKPDR20Base, T...> ;

  struct BKPDR21Base {} ;

  struct DR21 : public RegisterBase<0x40006C68, 32, ReadWriteMode>
  {
    using D21 = BKP_DR21_D21_Values<BKP::DR21, 0, 16, ReadWriteMode, BKPDR21Base> ;
    using FieldValues = BKP_DR21_D21_Values<BKP::DR21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR21Pack  = Register<0x40006C68, 32, ReadWriteMode, BKPDR21Base, T...> ;

  struct BKPDR22Base {} ;

  struct DR22 : public RegisterBase<0x40006C6C, 32, ReadWriteMode>
  {
    using D22 = BKP_DR22_D22_Values<BKP::DR22, 0, 16, ReadWriteMode, BKPDR22Base> ;
    using FieldValues = BKP_DR22_D22_Values<BKP::DR22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR22Pack  = Register<0x40006C6C, 32, ReadWriteMode, BKPDR22Base, T...> ;

  struct BKPDR23Base {} ;

  struct DR23 : public RegisterBase<0x40006C70, 32, ReadWriteMode>
  {
    using D23 = BKP_DR23_D23_Values<BKP::DR23, 0, 16, ReadWriteMode, BKPDR23Base> ;
    using FieldValues = BKP_DR23_D23_Values<BKP::DR23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR23Pack  = Register<0x40006C70, 32, ReadWriteMode, BKPDR23Base, T...> ;

  struct BKPDR24Base {} ;

  struct DR24 : public RegisterBase<0x40006C74, 32, ReadWriteMode>
  {
    using D24 = BKP_DR24_D24_Values<BKP::DR24, 0, 16, ReadWriteMode, BKPDR24Base> ;
    using FieldValues = BKP_DR24_D24_Values<BKP::DR24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR24Pack  = Register<0x40006C74, 32, ReadWriteMode, BKPDR24Base, T...> ;

  struct BKPDR25Base {} ;

  struct DR25 : public RegisterBase<0x40006C78, 32, ReadWriteMode>
  {
    using D25 = BKP_DR25_D25_Values<BKP::DR25, 0, 16, ReadWriteMode, BKPDR25Base> ;
    using FieldValues = BKP_DR25_D25_Values<BKP::DR25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR25Pack  = Register<0x40006C78, 32, ReadWriteMode, BKPDR25Base, T...> ;

  struct BKPDR26Base {} ;

  struct DR26 : public RegisterBase<0x40006C7C, 32, ReadWriteMode>
  {
    using D26 = BKP_DR26_D26_Values<BKP::DR26, 0, 16, ReadWriteMode, BKPDR26Base> ;
    using FieldValues = BKP_DR26_D26_Values<BKP::DR26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR26Pack  = Register<0x40006C7C, 32, ReadWriteMode, BKPDR26Base, T...> ;

  struct BKPDR27Base {} ;

  struct DR27 : public RegisterBase<0x40006C80, 32, ReadWriteMode>
  {
    using D27 = BKP_DR27_D27_Values<BKP::DR27, 0, 16, ReadWriteMode, BKPDR27Base> ;
    using FieldValues = BKP_DR27_D27_Values<BKP::DR27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR27Pack  = Register<0x40006C80, 32, ReadWriteMode, BKPDR27Base, T...> ;

  struct BKPDR28Base {} ;

  struct DR28 : public RegisterBase<0x40006C84, 32, ReadWriteMode>
  {
    using D28 = BKP_DR28_D28_Values<BKP::DR28, 0, 16, ReadWriteMode, BKPDR28Base> ;
    using FieldValues = BKP_DR28_D28_Values<BKP::DR28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR28Pack  = Register<0x40006C84, 32, ReadWriteMode, BKPDR28Base, T...> ;

  struct BKPDR29Base {} ;

  struct DR29 : public RegisterBase<0x40006C88, 32, ReadWriteMode>
  {
    using D29 = BKP_DR29_D29_Values<BKP::DR29, 0, 16, ReadWriteMode, BKPDR29Base> ;
    using FieldValues = BKP_DR29_D29_Values<BKP::DR29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR29Pack  = Register<0x40006C88, 32, ReadWriteMode, BKPDR29Base, T...> ;

  struct BKPDR30Base {} ;

  struct DR30 : public RegisterBase<0x40006C8C, 32, ReadWriteMode>
  {
    using D30 = BKP_DR30_D30_Values<BKP::DR30, 0, 16, ReadWriteMode, BKPDR30Base> ;
    using FieldValues = BKP_DR30_D30_Values<BKP::DR30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR30Pack  = Register<0x40006C8C, 32, ReadWriteMode, BKPDR30Base, T...> ;

  struct BKPDR31Base {} ;

  struct DR31 : public RegisterBase<0x40006C90, 32, ReadWriteMode>
  {
    using D31 = BKP_DR31_D31_Values<BKP::DR31, 0, 16, ReadWriteMode, BKPDR31Base> ;
    using FieldValues = BKP_DR31_D31_Values<BKP::DR31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR31Pack  = Register<0x40006C90, 32, ReadWriteMode, BKPDR31Base, T...> ;

  struct BKPDR32Base {} ;

  struct DR32 : public RegisterBase<0x40006C94, 32, ReadWriteMode>
  {
    using D32 = BKP_DR32_D32_Values<BKP::DR32, 0, 16, ReadWriteMode, BKPDR32Base> ;
    using FieldValues = BKP_DR32_D32_Values<BKP::DR32, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR32Pack  = Register<0x40006C94, 32, ReadWriteMode, BKPDR32Base, T...> ;

  struct BKPDR33Base {} ;

  struct DR33 : public RegisterBase<0x40006C98, 32, ReadWriteMode>
  {
    using D33 = BKP_DR33_D33_Values<BKP::DR33, 0, 16, ReadWriteMode, BKPDR33Base> ;
    using FieldValues = BKP_DR33_D33_Values<BKP::DR33, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR33Pack  = Register<0x40006C98, 32, ReadWriteMode, BKPDR33Base, T...> ;

  struct BKPDR34Base {} ;

  struct DR34 : public RegisterBase<0x40006C9C, 32, ReadWriteMode>
  {
    using D34 = BKP_DR34_D34_Values<BKP::DR34, 0, 16, ReadWriteMode, BKPDR34Base> ;
    using FieldValues = BKP_DR34_D34_Values<BKP::DR34, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR34Pack  = Register<0x40006C9C, 32, ReadWriteMode, BKPDR34Base, T...> ;

  struct BKPDR35Base {} ;

  struct DR35 : public RegisterBase<0x40006CA0, 32, ReadWriteMode>
  {
    using D35 = BKP_DR35_D35_Values<BKP::DR35, 0, 16, ReadWriteMode, BKPDR35Base> ;
    using FieldValues = BKP_DR35_D35_Values<BKP::DR35, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR35Pack  = Register<0x40006CA0, 32, ReadWriteMode, BKPDR35Base, T...> ;

  struct BKPDR36Base {} ;

  struct DR36 : public RegisterBase<0x40006CA4, 32, ReadWriteMode>
  {
    using D36 = BKP_DR36_D36_Values<BKP::DR36, 0, 16, ReadWriteMode, BKPDR36Base> ;
    using FieldValues = BKP_DR36_D36_Values<BKP::DR36, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR36Pack  = Register<0x40006CA4, 32, ReadWriteMode, BKPDR36Base, T...> ;

  struct BKPDR37Base {} ;

  struct DR37 : public RegisterBase<0x40006CA8, 32, ReadWriteMode>
  {
    using D37 = BKP_DR37_D37_Values<BKP::DR37, 0, 16, ReadWriteMode, BKPDR37Base> ;
    using FieldValues = BKP_DR37_D37_Values<BKP::DR37, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR37Pack  = Register<0x40006CA8, 32, ReadWriteMode, BKPDR37Base, T...> ;

  struct BKPDR38Base {} ;

  struct DR38 : public RegisterBase<0x40006CAC, 32, ReadWriteMode>
  {
    using D38 = BKP_DR38_D38_Values<BKP::DR38, 0, 16, ReadWriteMode, BKPDR38Base> ;
    using FieldValues = BKP_DR38_D38_Values<BKP::DR38, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR38Pack  = Register<0x40006CAC, 32, ReadWriteMode, BKPDR38Base, T...> ;

  struct BKPDR39Base {} ;

  struct DR39 : public RegisterBase<0x40006CB0, 32, ReadWriteMode>
  {
    using D39 = BKP_DR39_D39_Values<BKP::DR39, 0, 16, ReadWriteMode, BKPDR39Base> ;
    using FieldValues = BKP_DR39_D39_Values<BKP::DR39, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR39Pack  = Register<0x40006CB0, 32, ReadWriteMode, BKPDR39Base, T...> ;

  struct BKPDR40Base {} ;

  struct DR40 : public RegisterBase<0x40006CB4, 32, ReadWriteMode>
  {
    using D40 = BKP_DR40_D40_Values<BKP::DR40, 0, 16, ReadWriteMode, BKPDR40Base> ;
    using FieldValues = BKP_DR40_D40_Values<BKP::DR40, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR40Pack  = Register<0x40006CB4, 32, ReadWriteMode, BKPDR40Base, T...> ;

  struct BKPDR41Base {} ;

  struct DR41 : public RegisterBase<0x40006CB8, 32, ReadWriteMode>
  {
    using D41 = BKP_DR41_D41_Values<BKP::DR41, 0, 16, ReadWriteMode, BKPDR41Base> ;
    using FieldValues = BKP_DR41_D41_Values<BKP::DR41, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR41Pack  = Register<0x40006CB8, 32, ReadWriteMode, BKPDR41Base, T...> ;

  struct BKPDR42Base {} ;

  struct DR42 : public RegisterBase<0x40006CBC, 32, ReadWriteMode>
  {
    using D42 = BKP_DR42_D42_Values<BKP::DR42, 0, 16, ReadWriteMode, BKPDR42Base> ;
    using FieldValues = BKP_DR42_D42_Values<BKP::DR42, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR42Pack  = Register<0x40006CBC, 32, ReadWriteMode, BKPDR42Base, T...> ;

  struct BKPRTCCRBase {} ;

  struct RTCCR : public RegisterBase<0x40006C2C, 32, ReadWriteMode>
  {
    using CAL = BKP_RTCCR_CAL_Values<BKP::RTCCR, 0, 7, ReadWriteMode, BKPRTCCRBase> ;
    using CCO = BKP_RTCCR_CCO_Values<BKP::RTCCR, 7, 1, ReadWriteMode, BKPRTCCRBase> ;
    using ASOE = BKP_RTCCR_ASOE_Values<BKP::RTCCR, 8, 1, ReadWriteMode, BKPRTCCRBase> ;
    using ASOS = BKP_RTCCR_ASOS_Values<BKP::RTCCR, 9, 1, ReadWriteMode, BKPRTCCRBase> ;
    using FieldValues = BKP_RTCCR_ASOS_Values<BKP::RTCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTCCRPack  = Register<0x40006C2C, 32, ReadWriteMode, BKPRTCCRBase, T...> ;

  struct BKPCRBase {} ;

  struct CR : public RegisterBase<0x40006C30, 32, ReadWriteMode>
  {
    using TPE = BKP_CR_TPE_Values<BKP::CR, 0, 1, ReadWriteMode, BKPCRBase> ;
    using TPAL = BKP_CR_TPAL_Values<BKP::CR, 1, 1, ReadWriteMode, BKPCRBase> ;
    using FieldValues = BKP_CR_TPAL_Values<BKP::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40006C30, 32, ReadWriteMode, BKPCRBase, T...> ;

  struct BKPCSRBase {} ;

  struct CSR : public RegisterBase<0x40006C34, 32, ReadWriteMode>
  {
    using CTE = BKP_CSR_CTE_Values<BKP::CSR, 0, 1, WriteMode, BKPCSRBase> ;
    using CTI = BKP_CSR_CTI_Values<BKP::CSR, 1, 1, WriteMode, BKPCSRBase> ;
    using TPIE = BKP_CSR_TPIE_Values<BKP::CSR, 2, 1, ReadWriteMode, BKPCSRBase> ;
    using TEF = BKP_CSR_TEF_Values<BKP::CSR, 8, 1, ReadMode, BKPCSRBase> ;
    using TIF = BKP_CSR_TIF_Values<BKP::CSR, 9, 1, ReadMode, BKPCSRBase> ;
    using FieldValues = BKP_CSR_TIF_Values<BKP::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40006C34, 32, ReadWriteMode, BKPCSRBase, T...> ;

} ;

#endif //#if !defined(BKPREGISTERS_HPP)
