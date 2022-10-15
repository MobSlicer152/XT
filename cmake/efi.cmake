cmake_minimum_required(VERSION 3.22)

function(target_make_efi target)
    target_compile_definitions(${target} PRIVATE _EFI_=1)
    target_subsystem(${target} EFI_APPLICATION)
    target_entrypoint(${target} EfiEntry)
    target_extension(${target} .efi)
endfunction()
