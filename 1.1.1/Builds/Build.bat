@REM /*                                    *\
@REM  *          Gius Corporation          *
@REM  *      All rights are reserved.      *
@REM  *                                    *
@REM  *  - Author: Giulio Salvi            *
@REM  *  - Date: 30.X.2022                 *
@REM  *  - Name: Build.bat                 *
@REM  *  - Notes: A script to build the    *
@REM  *     library on Windows platform.   *
@REM \*                                    */

@echo off

echo Compiling into objects...
cd Objects

g++ -c ../../Source/String.cpp -o String.o

echo Linking objects dynamically...
g++ -shared String.o -o ../Dynamic/String.dll -L./../../Libs/Builds/Dynamic -lArrays -lTypes

echo Linking objects staticly...
ar rcs ../Static/String.lib String.o

cd ..
