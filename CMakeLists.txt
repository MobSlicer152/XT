cmake_minimum_required(VERSION 3.22)

include(cmake/efi.cmake)
include(cmake/util.cmake)

check_toolchain()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
cmake_policy(SET CMP0091 NEW) # MSVC_RUNTIME_LIBRARY

project(XT VERSION 0.0.0 LANGUAGES C ASM_NASM)

# Properties that annoyingly seem not to work if not in the main file

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set_property(GLOBAL PROPERTY TARGET_SUPPORTS_SHARED_LIBS TRUE)
set(CMAKE_EXECUTABLE_SUFFIX .exe)
set(CMAKE_SHARED_LIBRARY_PREFIX)
set(CMAKE_SHARED_LIBRARY_SUFFIX .dll)
set(CMAKE_STATIC_LIBRARY_PREFIX)
set(CMAKE_STATIC_LIBRARY_SUFFIX .lib)

# Include directories

include_directories(public/crt/inc)
include_directories(public/sdk/inc)

# Subprojects

add_subdirectory(base)
