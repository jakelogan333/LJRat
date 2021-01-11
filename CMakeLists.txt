CMAKE_MINIMUM_REQUIRED(VERSION 3.16)
PROJECT(LJRat CXX)

OPTION(BUILD_DLL "Build a dll version" OFF)

if (BUILD_DLL)
    add_library(LJRat_DLL
    src/LJRat.cpp
    )
else(BUILD_DLL)
    add_executable(LJRAT_EXE
    src/LJRat.cpp
    )
endif(BUILD_DLL)