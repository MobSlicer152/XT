cmake_minimum_required(VERSION 3.22)

set(CMAKE_SYSTEM_NAME Generic)

set(CMAKE_SYSTEM_VERSION 0.0)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang)
set(CMAKE_LINKER lld-link)

set(CLANGWARNINGS "-Wno-microsoft-enum-forward-reference -Wno-incompatible-pointer-types -Wno-visibility -Wno-pragma-pack -Wno-gnu-folding-constant -Wno-inconsistent-dllimport -Wno-ignored-pragma-intrinsic -Wno-parentheses -Wno-implicit-int -Wno-pointer-sign -Wno-microsoft-anon-tag -Wno-ignored-pragma-optimize -Wno-shift-count-negative -Wno-shift-count-overflow -Wno-microsoft-static-assert")
set(CMAKE_C_FLAGS_INIT "-std=gnu2x -fms-compatibility ${CLANGWARNINGS} --target=${CLANGARCH} ${ARCHDEFS} -Xclang -ffreestanding")
set(CMAKE_CXX_FLAGS_INIT "-std=gnu2x -fms-compatibility ${CLANGWARNINGS} --target=${CLANGARCH} ${ARCHDEFS} -Xclang -ffreestanding")

set(CMAKE_C_LINK_EXECUTABLE "<CMAKE_LINKER> -nodefaultlib -errorlimit:0 <LINK_FLAGS> <OBJECTS> <LINK_LIBRARIES>")
set(CMAKE_CXX_LINK_EXECUTABLE "<CMAKE_LINKER> -nodefaultlib -errorlimit:0 <LINK_FLAGS> <OBJECTS> <LINK_LIBRARIES>")
set(CMAKE_C_CREATE_SHARED_LIBRARY "<CMAKE_LINKER> -nodefaultlib -errorlimit:0 <LINK_FLAGS> <OBJECTS> <LINK_LIBRARIES> -dll")
set(CMAKE_CXX_CREATE_SHARED_LIBRARY "<CMAKE_LINKER> -nodefaultlib -errorlimit:0 <LINK_FLAGS> <OBJECTS> <LINK_LIBRARIES> -dll")
set(CMAKE_AR llvm-ar)

set(CMAKE_C_COMPILER_WORKS TRUE)
set(CMAKE_CXX_COMPILER_WORKS TRUE)
