﻿# CMakeList.txt: ASGI
#
cmake_minimum_required (VERSION 3.8)

project ("ASGI")
add_definitions(-DASGI_EXPORT)

# Use configure_depends to automatically reconfigure on filesystem
# changes at the expense of computational overhead for CMake to
# determine if new files have been added (-DGLOB_USE_CONFIGURE_DEPENDS).
function(asgi_glob_files out_var_name regexes)
    set(files "")
    foreach(arg ${ARGV})
        list(APPEND regexes_only "${arg}")
    endforeach()
    list(POP_FRONT regexes_only)
    if (GLOB_USE_CONFIGURE_DEPENDS)
        file(GLOB_RECURSE files CONFIGURE_DEPENDS ${regexes_only})
    else()
        file(GLOB files ${regexes_only})
    endif()
    set(${ARGV0} "${files}" PARENT_SCOPE)
endfunction()

add_library (ASGI SHARED  "")

asgi_glob_files(ASGI_GPU_INTERFACE_HEADERS GPUInterface/*.h GPUInterface/*.hpp)
asgi_glob_files(ASGI_HEADERS ./*.h ./*.hpp)
asgi_glob_files(ASGI_SRCS ./*.c ./*.cpp)

asgi_glob_files(ASGI_DIRECTX12 DirectX12/*.h DirectX12/*.hpp DirectX12/*.c DirectX12/*.cpp)

target_sources(
    ASGI
    PUBLIC
        ${ASGI_GPU_INTERFACE_HEADERS}
        ${ASGI_HEADERS}
        ${ASGI_SRCS}
    PRIVATE
        ${ASGI_DIRECTX12}
)
