@echo off

:: Remove artifacts from previous builds

rmdir /Q /S build
mkdir build

cmake -DBUILD_DLL=ON -B build .
::cmake -B build .
cmake --build build/