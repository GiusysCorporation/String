# /*                                    *\
#  *          Gius Corporation          *
#  *      All rights are reserved.      *
#  *                                    *
#  *  - Author: Giulio Salvi            *
#  *  - Date: 30.X.2022                 *
#  *  - Last Modified: 30.IX.2024       *
#  *  - Name: Build.ps1                 *
#  *  - Notes: A script to build the    *
#  *     library on Windows platform.   *
# \*                                    */

Write-Host "Compiling into objects..."
Set-Location "Objects"

g++ -c "../../Source/String.cpp" -o "String.o"

Write-Host "Linking objects dynamically..."
g++ -shared "String.o" -o "../Dynamic/String.dll" "-L./../../Libs/Builds/Dynamic" "-lArrays" "-lTypes"

Write-Host "Linking objects staticly..."
ar rcs "../Static/String.lib" "String.o"

Write-Host "Copying static library for the Demo..."
Set-Location "../Static"
if (Test-Path "../../Demo/Libs/String.lib") {
    Remove-Item "../../Demo/Libs/String.lib"
}
Copy-Item "String.lib" "../../Demo/Libs/String.lib"

Set-Location ".."