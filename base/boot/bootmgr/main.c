/*++

Copyright (c) 2022 MobSlicer152

Module Name:

    main.c

Abstract:

    This module implements the entry point of the boot manager.

Revision History:

    MobSlicer152 14-Oct-2022

--*/

#include "bootmgrp.h"

XTSTATUS
BootMain(
    VOID
    )
/*++

Routine Description:

    This routine implements the entrypoint of the boot manager.

Arguments:

    None.

Return Value:

    XTSTATUS - Returns STATUS_SUCCESS if nothing goes wrong, otherwise an
    appropriate error status.

--*/
{
    BlPrint("Hello, world!\n");

    return STATUS_SUCCESS;
}
