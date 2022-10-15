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
typedef char          CHAR;
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
#if SIZE_WIDTH == 32
typedef INT32 SSIZE_T;
#else
typedef INT64 SSIZE_T;
#endif

//
// Pointer types
//

typedef void*    PVOID;
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

//
// Constant pointer types
//

typedef const void*    PCVOID;
typedef const CHAR*    PCCHAR;
typedef const UCHAR*   PCUCHAR;
typedef const BYTE*    PCBYTE;
typedef const BOOL*    PCBOOL;
typedef const INT*     PCINT;
typedef const UINT*    PCUINT;
typedef const FLOAT*   PCFLOAT;
typedef const DOUBLE*  PCDOUBLE;
typedef const INT8*    PCINT8;
typedef const INT16*   PCINT16;
typedef const INT32*   PCINT32;
typedef const INT64*   PCINT64;
typedef const INT128*  PCINT128;
typedef const INTPTR*  PCINTPTR;
typedef const UINT8*   PCUINT8;
typedef const UINT16*  PCUINT16;
typedef const UINT32*  PCUINT32;
typedef const UINT64*  PCUINT64;
typedef const UINT128* PCUINT128;
typedef const UINTPTR* PCUINTPTR;
typedef const SIZE_T*  PCSIZE_T;
typedef const SSIZE_T* PCSSIZE_T;

//
// Array size
//

#define ARRAY_COUNT(Array) (sizeof(Array) / sizeof((Array)[0]))
