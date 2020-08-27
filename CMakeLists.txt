cmake_minimum_required(VERSION 3.13)
project(altv)

set(CMAKE_CXX_STANDARD 20)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++")
endif()

add_subdirectory(external EXCLUDE_FROM_ALL)

add_library(altv
        SHARED
            include/CScriptRuntime/CScriptRuntime.h
            src/CScriptRuntime/CScriptRuntime.cpp
            include/CResourceImpl/CResourceImpl.h
            src/CResourceImpl/CResourceImpl.cpp
            src/altv-module.cpp
)

target_include_directories(altv PUBLIC include)
target_link_libraries(altv
        PRIVATE
            fmt
)
