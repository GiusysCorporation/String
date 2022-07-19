@echo off

echo Compiling into objects...
cd Objects

g++ -c ../../Source/String.cpp -o String.o

echo Linking objects dynamicly...
g++ -shared String.o -o ../Dynamic/String.dll -L./../../Libs/Builds/Static -lArrays -lTypes

echo Linking objects staticly...
ar rcs ../Static/String.lib String.o

cd ..