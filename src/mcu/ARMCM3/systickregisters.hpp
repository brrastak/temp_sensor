/*******************************************************************************
* Filename      : systickregisters.hpp
*
* Details       : 24Bit System Tick Timer for use in RTOS. This header file is
*                 auto-generated for ARMCM3 device.
*
*
*******************************************************************************/

#if !defined(SYSTICKREGISTERS_HPP)
#define SYSTICKREGISTERS_HPP

#include "systickfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SysTick
{
  struct SysTickCSRBase {} ;

  struct CSR : public RegisterBase<0xE000E010, 32, ReadWriteMode>
  {
    using ENABLE = SysTick_CSR_ENABLE_Values<SysTick::CSR, 0, 1, ReadWriteMode, SysTickCSRBase> ;
    using TICKINT = SysTick_CSR_TICKINT_Values<SysTick::CSR, 1, 1, ReadWriteMode, SysTickCSRBase> ;
    using CLKSOURCE = SysTick_CSR_CLKSOURCE_Values<SysTick::CSR, 2, 1, ReadWriteMode, SysTickCSRBase> ;
    using COUNTFLAG = SysTick_CSR_COUNTFLAG_Values<SysTick::CSR, 16, 1, ReadWriteMode, SysTickCSRBase> ;
    using FieldValues = SysTick_CSR_COUNTFLAG_Values<SysTick::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0xE000E010, 32, ReadWriteMode, SysTickCSRBase, T...> ;

  struct SysTickRVRBase {} ;

  struct RVR : public RegisterBase<0xE000E014, 32, ReadWriteMode>
  {
    using RELOAD = SysTick_RVR_RELOAD_Values<SysTick::RVR, 0, 24, ReadWriteMode, SysTickRVRBase> ;
    using FieldValues = SysTick_RVR_RELOAD_Values<SysTick::RVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RVRPack  = Register<0xE000E014, 32, ReadWriteMode, SysTickRVRBase, T...> ;

  struct SysTickCVRBase {} ;

  struct CVR : public RegisterBase<0xE000E018, 32, ReadWriteMode>
  {
    using CURRENT = SysTick_CVR_CURRENT_Values<SysTick::CVR, 0, 24, ReadWriteMode, SysTickCVRBase> ;
    using FieldValues = SysTick_CVR_CURRENT_Values<SysTick::CVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CVRPack  = Register<0xE000E018, 32, ReadWriteMode, SysTickCVRBase, T...> ;

  struct SysTickCALIBBase {} ;

  struct CALIB : public RegisterBase<0xE000E01C, 32, ReadWriteMode>
  {
    using TENMS = SysTick_CALIB_TENMS_Values<SysTick::CALIB, 0, 24, ReadMode, SysTickCALIBBase> ;
    using SKEW = SysTick_CALIB_SKEW_Values<SysTick::CALIB, 30, 1, ReadMode, SysTickCALIBBase> ;
    using NOREF = SysTick_CALIB_NOREF_Values<SysTick::CALIB, 31, 1, ReadMode, SysTickCALIBBase> ;
    using FieldValues = SysTick_CALIB_NOREF_Values<SysTick::CALIB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CALIBPack  = Register<0xE000E01C, 32, ReadWriteMode, SysTickCALIBBase, T...> ;

} ;

#endif //#if !defined(SYSTICKREGISTERS_HPP)
