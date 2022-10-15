/*++

Copyright (c) 2022 MobSlicer152

Module Name:

    bootlib.h

Abstract:

    Boot library API.

Environment:

    Boot.

Revision History:

	MobSlicer152 14-Oct-2022

--*/

#ifndef _BOOTLIB_H
#define _BOOTLIB_H

#include <stdint.h>
#include <xtstatus.h>

#include "Uefi.h"

//
// Boot application entry point
//

XTSTATUS
BootMain(
    VOID
    );

//
// Convert from an XTSTATUS code to an EFI_STATUS code
//

EFI_STATUS
BlXtStatusToEfiStatus(
    XTSTATUS Status
    );

//
// Convert from an EFI_STATUS code to an XTSTATUS code
//

XTSTATUS
BlEfiStatusToXtStatus(
    EFI_STATUS Status
    );

//
// Print a message
//

VOID
BlPrint(
    PCCHAR Format,
    ...
    );

#endif /* _BOOTLIB_H */
