# /*          Gius Corporation          *\
#  *       All rights are reserved      *
#  *                                    *  
#  *  - Author: Giulio Salvi            *
#  *  - Date: 30.X.2022                 *
#  *  - Last Modified: 30.IX.2024       *
#  *  - Name: Demo-Win.ps1              *
#  *  - Notes: A script to compile      *
#  *     Demo.cpp on Windows platform.  *
# \*                                    */

if (Test-Path "./Demo.exe") {
    Remove-Item "./Demo.exe"
}

Write-Host "Compiling Demo.cpp..."
g++ "Demo.cpp" "-L./Libs" "-lString" "-lArrays" "-lTypes" -o "Demo.exe"

Write-Host "Executable compiled!"

Write-Host "Running Demo.exe"
Write-Host ""
.\Demo