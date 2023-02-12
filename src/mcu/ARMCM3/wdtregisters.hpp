/*******************************************************************************
* Filename      : wdtregisters.hpp
*
* Details       : Watchdog Timer. This header file is auto-generated for ARMCM3
*                 device.
*
*
*******************************************************************************/

#if !defined(WDTREGISTERS_HPP)
#define WDTREGISTERS_HPP

#include "wdtfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct WDT
{
  struct WDTCSRBase {} ;

  struct CSR : public RegisterBase<0x40001000, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40001000, 32, ReadWriteMode, WDTCSRBase, T...> ;

} ;

#endif //#if !defined(WDTREGISTERS_HPP)
