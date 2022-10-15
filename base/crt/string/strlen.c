/*++

Copyright (c) 2022 MobSlicer152

Module Name:

    strlen.c

Abstract:

    This module implements the strlen function.

Revision History:

    MobSlicer152 15-Oct-2022

--*/

#include <string.h>

_CRTAPI
SIZE_T
strlen(
    PCCHAR String
    )
/*++

Routine Description:

    Finds the length of String, defined as the offset of the byte after the
    first NUL terminator.

Arguments:

    String -
        The string to measure.

Return Value:

    SIZE_T - The length of the string or 0.

--*/
{
    PCCHAR p;

    if (!String)
        return 0;

    p = String;
    while (*p++)
        ;

    return p - String;
}
