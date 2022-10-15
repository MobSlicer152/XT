cmake_minimum_required(VERSION 3.22)

# EFI uses different naming conventions for CPU architectures
if (${CMAKE_SYSTEM_PROCESSOR} STREQUAL amd64)
    set(EFI_ARCH X64)
endif()

include_directories(inc)
include_directories(inc/${EFI_ARCH})

add_subdirectory(bootlib)
add_subdirectory(bootmgr)
