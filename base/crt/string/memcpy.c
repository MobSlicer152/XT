/*++

Copyright (c) 2022 MobSlicer152

Module Name:

    memcpy.c

Abstract:

    This module implements the memcpy function.

Revision History:

    MobSlicer152 15-Oct-2022

--*/

#include <string.h>

_CRTAPI
PVOID
memcpy(
    PVOID restrict Destination,
    PCVOID restrict Source,
    SIZE_T Count
    )
/*++

Routine Description:

    Copies Count bytes from Source to Destination.

Arguments:

    Destination -
        The buffer to copy Source to.

    Source -
        The buffer to copy to Destination.

    Count -
        The number of bytes to copy.

Return Value:

    PVOID - The value of Destination.

--*/
{
    UINT128 Store;
    PBYTE From;
    PBYTE To;
    SIZE_T i;

    From = (PBYTE)Source;
    To =  (PBYTE)Destination;

    /* Copy until address is aligned */
    for (i = 0; Count % sizeof(Store) - i > 0; i++)
        To[i] = From[i];

    /* Copy 16 bytes at a time */
    for (i = 0; i < Count / sizeof(Store); i += 16)
    {
        Store = *(PUINT128)(Source + i);
        *(PUINT128)(Destination + i) = Store;
    }
}
