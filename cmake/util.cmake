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

function(target_subsystem target subsystem)
    target_link_options(${target} PRIVATE -subsystem:${subsystem})
endfunction()

function(target_entrypoint target entrypoint)
    target_link_options(${target} PRIVATE -entry:${entrypoint})
endfunction()

function(target_folder target folder)
    set_target_properties(${target} PROPERTIES FOLDER ${folder})
endfunction()

function(target_extension target extension)
    set_target_properties(${target} PROPERTIES SUFFIX ${extension})
endfunction()
