/*++

Copyright (c) 2022 MobSlicer152

Module Name:

	xtstatus.h

Abstract:

	This module defines status codes used throughout the system.

Revision History:

	MobSlicer152 13-Oct-2022

--*/

//
// Determine if a status is a success
//

#define XT_SUCCESS(Status) (((Status) >> 30) == 0b00)

//
// Determine if a status is a warning
//

#define XT_WARNING(Status) (((Status) >> 30) == 0b01)

//
// Determine if a status is an error
//

#define XT_ERROR(Status) (((Status) >> 30) == 0b11)

//
// Success
//

#define STATUS_SUCCESS 0x00000000

//
// Invalid parameter
//

#define STATUS_INVALID_PARAMETER 0xC0000001


