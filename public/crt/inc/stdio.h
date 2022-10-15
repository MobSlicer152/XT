/*++

Copyright (c) 2022 MobSlicer152

Module Name:

    stdio.h

Abstract:

    This module contains the C standard I/O API

Revision History:

    MobSlicer152 15-Oct-2022

--*/

#ifndef _STDIO_H
#define _STDIO_H

#include "crtp.h"
#include <stdarg.h>

//
// printf functions
//

_CRTAPI
_CRTBAD
int
sprintf(
    PCHAR Buffer,
    PCCHAR Format,
    ...
    );

_CRTAPI
_CRTBAD
int
vsprintf(
    PCHAR Buffer,
    PCCHAR Format,
    va_list Args
    );

_CRTAPI
int
snprintf(
    PCHAR Buffer,
    SIZE_T Count,
    PCCHAR Format,
    ...
    );

_CRTAPI
int
vsnprintf(
    PCHAR Buffer,
    SIZE_T Count,
    PCCHAR Format,
    va_list Args
    );

#endif /* _STDIO_H */
