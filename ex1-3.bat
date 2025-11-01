REM @echo off
REM Компіліція файлу
cl /EHsc ex1-3.cpp >nul

REM --- Test 1 ---
echo Test 1
REM n = 6, arr = 5 4 3 6 2 1
(
echo 6
echo 5
echo 4
echo 3
echo 6
echo 2
echo 1
) | ex1-3
echo.

REM --- Test 2 ---
echo Test 2
REM n = 5, arr = 1 2 3 4 5 (немає убування)
(
echo 5
echo 1
echo 2
echo 3
echo 4
echo 5
) | ex1-3
echo.

REM --- Test 3 ---
echo Test 3
REM n = 7, arr = 9 7 5 6 4 3 2
(
echo 7
echo 9
echo 7
echo 5
echo 6
echo 4
echo 3
echo 2
) | ex1-3
echo.

pause
