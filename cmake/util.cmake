cmake_minimum_required(VERSION 3.22)

function(check_toolchain)
    if ("${CMAKE_TOOLCHAIN_FILE}" STREQUAL "")
        message(FATAL_ERROR "No toolchain used, delete the build directory"
  	                    " (${CMAKE_BINARY_DIR}) and set CMAKE_TOOLCHAIN_FILE"
			    " to one of the toolchains in the toolchains folder")
    endif()
    if (NOT "${CMAKE_TOOLCHAIN_FILE}" MATCHES "toolchains[/\\]xt-.*\.cmake")
        message(FATAL_ERROR "Invalid toolchain ${CMAKE_TOOLCHAIN_FILE} used")
    endif()
    if ("${CMAKE_TOOLCHAIN_FILE}" MATCHES "toolchains[/\\]xt-common.cmake")
	message(FATAL_ERROR "${CMAKE_TOOLCHAIN_FILE} contains only shared "
			    "definitions and cannot be used")
    endif()
endfunction()

