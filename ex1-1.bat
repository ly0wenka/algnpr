@echo off
cl /EHsc ex1-1.cpp >nul
echo Test 1
echo 5 3.2 -1.1 0 7.4 2.5 | ex1-1
echo.
echo Test 2
echo 3 9 0 5 | ex1-1
echo.
pause