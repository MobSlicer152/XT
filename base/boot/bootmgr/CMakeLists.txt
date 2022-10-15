cmake_minimum_required(VERSION 3.22)

set(BOOTMGR_HEADERS bootmgrp.h)
set(BOOTMGR_SOURCES main.c)

add_executable(bootmgr ${BOOTMGR_HEADERS} ${BOOTMGR_SOURCES})
target_link_libraries(bootmgr PRIVATE bootlib)
target_make_efi(bootmgr)
target_folder(bootmgr "Boot")
