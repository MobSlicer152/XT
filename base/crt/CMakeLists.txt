cmake_minimum_required(VERSION 3.22)

set(KERNEL_CRT_SOURCES stdio/snprintf.c

                       string/memcpy.c
                       string/memmove.c
                       string/strlen.c)

add_library(kernel_crt STATIC ${KERNEL_CRT_HEADERS} ${KERNEL_CRT_SOURCES})
target_compile_definitions(kernel_crt PRIVATE _XTSYSTEM_=1 _CRTBLD=1)
target_folder(kernel_crt "C Runtime")
