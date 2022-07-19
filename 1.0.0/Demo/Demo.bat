@echo off

echo Compiling main.cpp...
g++ Demo.cpp -L./Libs -lString -lArrays -lTypes -o Demo.exe

echo Executable compiled!

echo Running Demo.exe
Demo