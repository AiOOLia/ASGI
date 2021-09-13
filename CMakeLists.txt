# CMakeList.txt: ASGI 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("ASGI")


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

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量


# 将源代码添加到此项目的可执行文件。
add_library (ASGI SHARED  "")

asgi_glob_files(ASGI_GPU_INTERFACE_HEADERS GPUInterface/*.h GPUInterface/*.hpp)
asgi_glob_files(ASGI_SRCS ./*.cpp)

target_sources(
    ASGI
    PUBLIC
        ${ASGI_GPU_INTERFACE_HEADERS}
        ${ASGI_SRCS}
)

# TODO: 如有需要，请添加测试并安装目标。
