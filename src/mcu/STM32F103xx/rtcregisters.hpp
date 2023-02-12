/*******************************************************************************
* Filename      : rtcregisters.hpp
*
* Details       : Real time clock. This header file is auto-generated for
*                 STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(RTCREGISTERS_HPP)
#define RTCREGISTERS_HPP

#include "rtcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RTC
{
  struct RTCCRHBase {} ;

  struct CRH : public RegisterBase<0x40002800, 32, ReadWriteMode>
  {
    using SECIE = RTC_CRH_SECIE_Values<RTC::CRH, 0, 1, ReadWriteMode, RTCCRHBase> ;
    using ALRIE = RTC_CRH_ALRIE_Values<RTC::CRH, 1, 1, ReadWriteMode, RTCCRHBase> ;
    using OWIE = RTC_CRH_OWIE_Values<RTC::CRH, 2, 1, ReadWriteMode, RTCCRHBase> ;
    using FieldValues = RTC_CRH_OWIE_Values<RTC::CRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRHPack  = Register<0x40002800, 32, ReadWriteMode, RTCCRHBase, T...> ;

  struct RTCCRLBase {} ;

  struct CRL : public RegisterBase<0x40002804, 32, ReadWriteMode>
  {
    using SECF = RTC_CRL_SECF_Values<RTC::CRL, 0, 1, ReadWriteMode, RTCCRLBase> ;
    using ALRF = RTC_CRL_ALRF_Values<RTC::CRL, 1, 1, ReadWriteMode, RTCCRLBase> ;
    using OWF = RTC_CRL_OWF_Values<RTC::CRL, 2, 1, ReadWriteMode, RTCCRLBase> ;
    using RSF = RTC_CRL_RSF_Values<RTC::CRL, 3, 1, ReadWriteMode, RTCCRLBase> ;
    using CNF = RTC_CRL_CNF_Values<RTC::CRL, 4, 1, ReadWriteMode, RTCCRLBase> ;
    using RTOFF = RTC_CRL_RTOFF_Values<RTC::CRL, 5, 1, ReadMode, RTCCRLBase> ;
    using FieldValues = RTC_CRL_RTOFF_Values<RTC::CRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRLPack  = Register<0x40002804, 32, ReadWriteMode, RTCCRLBase, T...> ;

  struct RTCPRLHBase {} ;

  struct PRLH : public RegisterBase<0x40002808, 32, WriteMode>
  {
    using PRLHField = RTC_PRLH_PRLH_Values<RTC::PRLH, 0, 4, WriteMode, RTCPRLHBase> ;
    using FieldValues = RTC_PRLH_PRLH_Values<RTC::PRLH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRLHPack  = Register<0x40002808, 32, WriteMode, RTCPRLHBase, T...> ;

  struct RTCPRLLBase {} ;

  struct PRLL : public RegisterBase<0x4000280C, 32, WriteMode>
  {
    using PRLLField = RTC_PRLL_PRLL_Values<RTC::PRLL, 0, 16, WriteMode, RTCPRLLBase> ;
    using FieldValues = RTC_PRLL_PRLL_Values<RTC::PRLL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRLLPack  = Register<0x4000280C, 32, WriteMode, RTCPRLLBase, T...> ;

  struct RTCDIVHBase {} ;

  struct DIVH : public RegisterBase<0x40002810, 32, ReadMode>
  {
    using DIVHField = RTC_DIVH_DIVH_Values<RTC::DIVH, 0, 4, ReadMode, RTCDIVHBase> ;
    using FieldValues = RTC_DIVH_DIVH_Values<RTC::DIVH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIVHPack  = Register<0x40002810, 32, ReadMode, RTCDIVHBase, T...> ;

  struct RTCDIVLBase {} ;

  struct DIVL : public RegisterBase<0x40002814, 32, ReadMode>
  {
    using DIVLField = RTC_DIVL_DIVL_Values<RTC::DIVL, 0, 16, ReadMode, RTCDIVLBase> ;
    using FieldValues = RTC_DIVL_DIVL_Values<RTC::DIVL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIVLPack  = Register<0x40002814, 32, ReadMode, RTCDIVLBase, T...> ;

  struct RTCCNTHBase {} ;

  struct CNTH : public RegisterBase<0x40002818, 32, ReadWriteMode>
  {
    using CNTHField = RTC_CNTH_CNTH_Values<RTC::CNTH, 0, 16, ReadWriteMode, RTCCNTHBase> ;
    using FieldValues = RTC_CNTH_CNTH_Values<RTC::CNTH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTHPack  = Register<0x40002818, 32, ReadWriteMode, RTCCNTHBase, T...> ;

  struct RTCCNTLBase {} ;

  struct CNTL : public RegisterBase<0x4000281C, 32, ReadWriteMode>
  {
    using CNTLField = RTC_CNTL_CNTL_Values<RTC::CNTL, 0, 16, ReadWriteMode, RTCCNTLBase> ;
    using FieldValues = RTC_CNTL_CNTL_Values<RTC::CNTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTLPack  = Register<0x4000281C, 32, ReadWriteMode, RTCCNTLBase, T...> ;

  struct RTCALRHBase {} ;

  struct ALRH : public RegisterBase<0x40002820, 32, WriteMode>
  {
    using ALRHField = RTC_ALRH_ALRH_Values<RTC::ALRH, 0, 16, WriteMode, RTCALRHBase> ;
    using FieldValues = RTC_ALRH_ALRH_Values<RTC::ALRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRHPack  = Register<0x40002820, 32, WriteMode, RTCALRHBase, T...> ;

  struct RTCALRLBase {} ;

  struct ALRL : public RegisterBase<0x40002824, 32, WriteMode>
  {
    using ALRLField = RTC_ALRL_ALRL_Values<RTC::ALRL, 0, 16, WriteMode, RTCALRLBase> ;
    using FieldValues = RTC_ALRL_ALRL_Values<RTC::ALRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRLPack  = Register<0x40002824, 32, WriteMode, RTCALRLBase, T...> ;

} ;

#endif //#if !defined(RTCREGISTERS_HPP)
