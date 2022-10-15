/*++

Copyright (c) 2022 MobSlicer152

Module Name:

    xtdef.h

Abstract:

    This module contains miscellaneous definitions used everywhere.

Revision History:

    MobSlicer152 14-Oct-2022

--*/

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

//
// Basic types
//

#define VOID          void;
typedef signed char   CHAR;
typedef unsigned char UCHAR;
typedef UCHAR         BYTE;
typedef bool          BOOL;
typedef int           INT;
typedef unsigned int  UINT;
typedef float         FLOAT;
typedef double        DOUBLE;
typedef int8_t        INT8;
typedef int16_t       INT16;
typedef int32_t       INT32;
typedef int64_t       INT64;
typedef __int128_t    INT128;
typedef intptr_t      INTPTR;
typedef uint8_t       UINT8;
typedef uint16_t      UINT16;
typedef uint32_t      UINT32;
typedef uint64_t      UINT64;
typedef __uint128_t   UINT128;
typedef uintptr_t     UINTPTR;

//
// Size types
//

typedef size_t SIZE_T;
#if sizeof(size_t) == 4
typedef INT32 SSIZE_T;
#else
typedef INT64 SSIZE_T;
#endif

//
// Pointer types
//

typedef VOID*    PVOID;
typedef CHAR*    PCHAR;
typedef UCHAR*   PUCHAR;
typedef BYTE*    PBYTE;
typedef BOOL*    PBOOL;
typedef INT*     PINT;
typedef UINT*    PUINT;
typedef FLOAT*   PFLOAT;
typedef DOUBLE*  PDOUBLE;
typedef INT8*    PINT8;
typedef INT16*   PINT16;
typedef INT32*   PINT32;
typedef INT64*   PINT64;
typedef INT128*  PINT128;
typedef INTPTR*  PINTPTR;
typedef UINT8*   PUINT8;
typedef UINT16*  PUINT16;
typedef UINT32*  PUINT32;
typedef UINT64*  PUINT64;
typedef UINT128* PUINT128;
typedef UINTPTR* PUINTPTR;
typedef SIZE_T*  PSIZE_T;
typedef SSIZE_T* PSSIZE_T;
