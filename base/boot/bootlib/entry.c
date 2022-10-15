/*++

Copyright (c) 2022 MobSlicer152

Module Name:

    entry.c

Abstract:

    This module implements the EFI entry point.

Environment:

    Boot.

Revision History:

    MobSlicer152 14-Oct-2022

--*/

#include "bootlibp.h"

EFIAPI
EFI_STATUS
EfiEntry(
    EFI_HANDLE* ImageHandle,
    EFI_SYSTEM_TABLE* SystemTable
    )
/*++

Routine Description:

    EFI entry point. Initializes the boot library and calls BootMain, then cleans
    up and returns after that.

Arguments:

    ImageHandle -
        The handle to the EFI module this application is loaded as.

    SystemTable -
        The EFI system table.

Return Value:

    EFI_STATUS - The return value of BootMain, or an appropriate error status in
    the event of failure.

--*/
{
    XTSTATUS Status;

    Status = BootMain();

    return BlXtStatusToEfiStatus(Status);
}
