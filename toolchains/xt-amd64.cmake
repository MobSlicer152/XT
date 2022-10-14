cmake_minimum_required(VERSION 3.22)

set(CMAKE_SYSTEM_PROCESSOR amd64)
set(CLANGARCH x86_64-msvc-windows)
set(ARCHDEFS "-D_AMD64_")

if ("${CMAKE_SOURCE_DIR}" MATCHES "CMakeTmp")
    set(root ${CMAKE_SOURCE_DIR}/../../..)
else()
    set(root ${CMAKE_SOURCE_DIR})
endif()
include(${root}/toolchains/xt-common.cmake)

set(CMAKE_ASM_NASM_COMPILER nasm)

