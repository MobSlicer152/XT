cmake_minimum_required(VERSION 3.22)

set(BOOTLIB_HEADERS bootlibp.h)
set(BOOTLIB_SOURCES entry.c
                    misc.c)

add_library(bootlib STATIC ${BOOTLIB_HEADERS} ${BOOTLIB_SOURCES})
target_include_directories(bootlib PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_folder(bootlib "Boot")
