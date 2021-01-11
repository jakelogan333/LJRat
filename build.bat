@echo off

:: Remove artifacts from previous builds

rmdir /Q /S build
mkdir build


cmake -B build .
cmake --build build/