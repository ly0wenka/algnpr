@echo off
REM Компіліція C++ файлу
cl /EHsc ex1-2.cpp >nul

REM --- Test 1 ---
echo Test 1
REM w = 2.5, n = 6, масив = 5 3.2 -1.1 0 7.4 2.5
(echo 2.5
echo 6
echo 5
echo 3.2
echo -1.1
echo 0
echo 7.4
echo 2.5) | ex1-2
echo.

REM --- Test 2 ---
echo Test 2
REM w = 4, n = 4, масив = 3 9 0 5
(echo 4
echo 4
echo 3
echo 9
echo 0
echo 5) | ex1-2
echo.

pause
