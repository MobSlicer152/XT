/*++

Copyright (c) 2022 MobSlicer152

Module Name:

    string.h

Abstract:

    This module contains the C string API.

Revision History:

    MobSlicer152 15-Oct-2022

--*/

#ifndef _STRING_H
#define _STRING_H

#include <crtp.h>
#include <stddef.h>

_CRTAPI
PVOID
memmove(
    PVOID Destination,
    PCVOID Source,
    SIZE_T Count
    );

_CRTAPI
PVOID
memcpy(
    PVOID restrict Destination,
    PCVOID restrict Source,
    SIZE_T Count
    );

_CRTAPI
SIZE_T
strlen(
    PCCHAR String
    );

#endif /* _STRING_H */
