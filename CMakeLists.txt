cmake_minimum_required(VERSION 3.17)
project(altv)

set(CMAKE_CXX_STANDARD 20)

add_library(altv SHARED
        include/CScriptRuntime/CScriptRuntime.h
        src/CScriptRuntime/CScriptRuntime.cpp
        include/CResourceImpl/CResourceImpl.h
        src/CResourceImpl/CResourceImpl.cpp
)
target_include_directories(altv PUBLIC include)
