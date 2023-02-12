/*******************************************************************************
* Filename      : dbgregisters.hpp
*
* Details       : Debug support. This header file is auto-generated for
*                 STM32F103xx device.
*
*
*******************************************************************************/

#if !defined(DBGREGISTERS_HPP)
#define DBGREGISTERS_HPP

#include "dbgfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DBG
{
  struct DBGIDCODEBase {} ;

  struct IDCODE : public RegisterBase<0xE0042000, 32, ReadMode>
  {
    using DEV_ID = DBG_IDCODE_DEV_ID_Values<DBG::IDCODE, 0, 12, ReadMode, DBGIDCODEBase> ;
    using REV_ID = DBG_IDCODE_REV_ID_Values<DBG::IDCODE, 16, 16, ReadMode, DBGIDCODEBase> ;
    using FieldValues = DBG_IDCODE_REV_ID_Values<DBG::IDCODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDCODEPack  = Register<0xE0042000, 32, ReadMode, DBGIDCODEBase, T...> ;

  struct DBGCRBase {} ;

  struct CR : public RegisterBase<0xE0042004, 32, ReadWriteMode>
  {
    using DBG_SLEEP = DBG_CR_DBG_SLEEP_Values<DBG::CR, 0, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_STOP = DBG_CR_DBG_STOP_Values<DBG::CR, 1, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_STANDBY = DBG_CR_DBG_STANDBY_Values<DBG::CR, 2, 1, ReadWriteMode, DBGCRBase> ;
    using TRACE_IOEN = DBG_CR_TRACE_IOEN_Values<DBG::CR, 5, 1, ReadWriteMode, DBGCRBase> ;
    using TRACE_MODE = DBG_CR_TRACE_MODE_Values<DBG::CR, 6, 2, ReadWriteMode, DBGCRBase> ;
    using DBG_IWDG_STOP = DBG_CR_DBG_IWDG_STOP_Values<DBG::CR, 8, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_WWDG_STOP = DBG_CR_DBG_WWDG_STOP_Values<DBG::CR, 9, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_TIM1_STOP = DBG_CR_DBG_TIM1_STOP_Values<DBG::CR, 10, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_TIM2_STOP = DBG_CR_DBG_TIM2_STOP_Values<DBG::CR, 11, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_TIM3_STOP = DBG_CR_DBG_TIM3_STOP_Values<DBG::CR, 12, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_TIM4_STOP = DBG_CR_DBG_TIM4_STOP_Values<DBG::CR, 13, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_CAN1_STOP = DBG_CR_DBG_CAN1_STOP_Values<DBG::CR, 14, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_I2C1_SMBUS_TIMEOUT = DBG_CR_DBG_I2C1_SMBUS_TIMEOUT_Values<DBG::CR, 15, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_I2C2_SMBUS_TIMEOUT = DBG_CR_DBG_I2C2_SMBUS_TIMEOUT_Values<DBG::CR, 16, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_TIM8_STOP = DBG_CR_DBG_TIM8_STOP_Values<DBG::CR, 17, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_TIM5_STOP = DBG_CR_DBG_TIM5_STOP_Values<DBG::CR, 18, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_TIM6_STOP = DBG_CR_DBG_TIM6_STOP_Values<DBG::CR, 19, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_TIM7_STOP = DBG_CR_DBG_TIM7_STOP_Values<DBG::CR, 20, 1, ReadWriteMode, DBGCRBase> ;
    using DBG_CAN2_STOP = DBG_CR_DBG_CAN2_STOP_Values<DBG::CR, 21, 1, ReadWriteMode, DBGCRBase> ;
    using FieldValues = DBG_CR_DBG_CAN2_STOP_Values<DBG::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0xE0042004, 32, ReadWriteMode, DBGCRBase, T...> ;

} ;

#endif //#if !defined(DBGREGISTERS_HPP)
