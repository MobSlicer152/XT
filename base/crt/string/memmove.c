/*++

Copyright (c) 2022 MobSlicer152

Module Name:

    memmove.c

Abstract:

    This module implements the memmove function.

Revision History:

    MobSlicer152 15-Oct-2022

--*/

#include <string.h>

_CRTAPI
PVOID
memmove(
    PVOID Destination,
    PCVOID Source,
    SIZE_T Count
    )
/*++

Routine Description:

    Copies memory without overwriting overlapping bytes.

Arguments:

    Destination -
        The buffer to copy Source to.

    Source -
        The buffer to copy to Destination.

    Count -
        The number of bytes to copy.

Return Value:

    PVOID - The value of Destination.

Notes:

    Verbatim copy of the logic here because it's good:
    https://opensource.apple.com/source/network_cmds/network_cmds-481.20.1/unbound/compat/memmove.c.auto.html

--*/
{
    PBYTE From = (PBYTE)Source;
    PBYTE To = (PBYTE)Destination;
    SIZE_T i;

    if (!From || !To || From == To || Count < 1)
        return Destination;

    /* Correctly copy without screwing up any overlap */
    if (To > From && To - From < (SSIZE_T)Count)
    {
        for (i = Count - 1; i >= 0; i--)
            To[i] = From[i];
        return Destination;
    }
    if (From > To && From - To < (SSIZE_T)Count)
    {
        for (i = 0; i < Count; i++)
            To[i] = From[i];
        return Destination;
    }

    /* Otherwise just use memcpy */
    return memcpy(Destination, Source, Count);
}
