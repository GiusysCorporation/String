@REM /*          Gius Corporation          *\
@REM  *       All rights are reserved      *
@REM  *                                    *  
@REM  *  - Author: Giulio Salvi            *
@REM  *  - Date: 30.X.2022                 *
@REM  *  - Name: Demo-Win.bat              *
@REM  *  - Notes: A script to compile      *
@REM  *     Demo.cpp on Windows platform.  *
@REM \*                                    */

@echo off

echo Compiling main.cpp...
g++ Demo.cpp -L./Libs -lString -lArrays -lTypes -o Demo.exe

echo Executable compiled!

echo Running Demo.exe
Demo