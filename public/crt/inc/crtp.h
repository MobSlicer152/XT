/*++

Copyright (c) 2022 MobSlicer152

Module Name:

    crtp.h

Abstract:

    This module contains private definitions used by the public CRT headers not
    meant to be directly used.

Revision History:

    MobSlicer152 15-Oct-2022

--*/

#ifndef _CRTP_H
#define _CRTP_H

#include <xtdef.h>

//
// Dynamic library import/export
//

#ifndef _CRTAPI
#ifdef _XTSYSTEM_
#ifdef _CRTBLD
#define _CRTAPI __declspec(dllexport)
#else
#define _CRTAPI __declspec(dllimport)
#endif
#else
#define _CRTAPI
#endif
#endif /* !_CRTAPI */

//
// Mark a function as a bad idea to use
//

#ifndef _CRTBAD
#define _CRTBAD __declspec(deprecated("DO NOT USE THIS FUNCTION IT'S TERRIBLE"))
#endif /* !_CRTBAD */

#endif /* _CRTP_H */
