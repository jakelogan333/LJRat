CMAKE_MINIMUM_REQUIRED(VERSION 3.16)
PROJECT(LJRat CXX)

OPTION(BUILD_DLL "Build a dll version" OFF)

if (BUILD_DLL)
    add_library(LJRat_DLL
        SHARED
        src/LJRat.cpp
    )

    target_include_directories(LJRat_DLL
        PUBLIC
        include/
    )

    target_compile_definitions(LJRat_DLL PUBLIC -DBUILD_DLL)

else(BUILD_DLL)
    add_executable(LJRat_EXE
        src/LJRat.cpp
    )

    target_include_directories(LJRat_EXE
        PUBLIC
        include/
    )

endif(BUILD_DLL)