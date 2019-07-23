@echo off
set PATH=C:\Qt\Qt5.12.1\5.12.1\mingw73_64\bin;C:/Qt/Qt5.12.1/Tools/mingw730_64\bin;%PATH%
cls
echo Starting...
qmake lsl_manager.pro
mingw32-make
pause
