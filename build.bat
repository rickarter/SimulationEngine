@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"
if not exist build mkdir build
pushd build
cl ../main.c ../src/se_main.c
popd