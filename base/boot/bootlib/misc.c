/*++

Copyright (c) 2022 MobSlicer152

Module Name:

    misc.c

Abstract:

    This module contains miscellaneous boot functions.

Revision History:

    MobSlicer152 14-Oct-2022

--*/

#include "bootlibp.h"

//
// EFI status to XTSTATUS mapping
//

static UINTN EfiStatusToXtStatus[][2] = {
        {EFI_SUCCESS, STATUS_SUCCESS},
        {EFI_INVALID_PARAMETER, STATUS_INVALID_PARAMETER},
};

EFI_STATUS
BlXtStatusToEfiStatus(
    XTSTATUS Status
    )
/*++

Routine Description:

    Converts an XTSTATUS to an EFI_STATUS.

Arguments:

    Status -
        The XTSTATUS to convert.

Return Value:

    EFI_STATUS - An appropriate equivalent to Status.

--*/
{
    SIZE_T i;

    for (i = 0; i < )
}
