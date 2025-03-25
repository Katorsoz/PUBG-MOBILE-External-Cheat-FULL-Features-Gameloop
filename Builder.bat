@echo off
setlocal EnableDelayedExpansion
set "msbuild=C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\amd64\MSBuild.exe"
set "solution_file=PUBGM Cheat.sln"
title PUBGM Cheat Builder
color 0A
mode con cols=80 lines=25
echo.
echo =================================
echo       PUBGM Cheat Builder
echo =================================
echo.
echo  [*] Build process is starting...
echo.
for /L %%i in (1,1,10) do (
    ping -n 1 127.0.0.1 >nul
    set /A "percent=%%i*10"
    cls
    echo.
    echo =================================
    echo       PUBGM Cheat Builder
    echo =================================
    echo.
    echo  [*] Build process is in progress...
    echo.
)
"%msbuild%" "%solution_file%" -m /property:Configuration=Release /property:Platform=x64 /clp:ErrorsOnly
if %errorlevel%==0 (
    echo.
    echo  [*] Build completed successfully!
    echo.
    start "" "x64\Release"
) else (
    echo.
    echo  [ X ] An error occurred during the build process!
    echo.
)
echo =================================
echo        Process Completed
echo =================================
echo.
pause
