/*******************************************************************************
  DEVCON Peripheral Library Template Implementation

  File Name:
    devcon_SysLockUnlock_Default.h

  Summary:
    DEVCON PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : SysLockUnlock
    and its Variant : Default
    For following APIs :
        PLIB_DEVCON_SystemUnlock
        PLIB_DEVCON_SystemLock
        PLIB_DEVCON_ExistsSystemLockUnlock
        PLIB_DEVCON_ExistsDeviceVerAndId

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _DEVCON_SYSLOCKUNLOCK_DEFAULT_H
#define _DEVCON_SYSLOCKUNLOCK_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _DEVCON_SYS_LOCK_VREG(index)

  MASKs: 
    _DEVCON_SYS_LOCK_MASK(index)

  POSs: 
    _DEVCON_SYS_LOCK_POS(index)

  LENs: 
    _DEVCON_SYS_LOCK_LEN(index)

*/


//******************************************************************************
/* Function :  DEVCON_SystemUnlock_Default

  Summary:
    Implements Default variant of PLIB_DEVCON_SystemUnlock 

  Description:
    This template implements the Default variant of the PLIB_DEVCON_SystemUnlock function.
*/

PLIB_TEMPLATE void DEVCON_SystemUnlock_Default( DEVCON_MODULE_ID index )
{
    _SFR_WRITE(_DEVCON_SYS_LOCK_VREG(index), 0x00000000);
    _SFR_WRITE(_DEVCON_SYS_LOCK_VREG(index), 0xAA996655);
    _SFR_WRITE(_DEVCON_SYS_LOCK_VREG(index), 0x556699AA);
}


//******************************************************************************
/* Function :  DEVCON_SystemLock_Default

  Summary:
    Implements Default variant of PLIB_DEVCON_SystemLock 

  Description:
    This template implements the Default variant of the PLIB_DEVCON_SystemLock function.
*/

PLIB_TEMPLATE void DEVCON_SystemLock_Default( DEVCON_MODULE_ID index )
{
    _SFR_WRITE(_DEVCON_SYS_LOCK_VREG(index), 0x33333333);
}


//******************************************************************************
/* Function :  DEVCON_ExistsSystemLockUnlock_Default

  Summary:
    Implements Default variant of PLIB_DEVCON_ExistsSystemLockUnlock

  Description:
    This template implements the Default variant of the PLIB_DEVCON_ExistsSystemLockUnlock function.
*/

#define PLIB_DEVCON_ExistsSystemLockUnlock PLIB_DEVCON_ExistsSystemLockUnlock
PLIB_TEMPLATE bool DEVCON_ExistsSystemLockUnlock_Default( DEVCON_MODULE_ID index )
{
    return true;
}

#endif /*_DEVCON_SYSLOCKUNLOCK_DEFAULT_H*/

/******************************************************************************
 End of File
*/

