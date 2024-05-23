@echo off
REM Borro el directorio build si ya existiera
if exist build (
    rmdir /s /q build
)

REM Creo el directorio build
mkdir build

REM Compilo código objeto
g++ -Wall -std=c++14 -c src\Amp.cpp -Iinclude
g++ -Wall -std=c++14 -c main.cpp -Iinclude

REM Compilo el Binario
g++ -Wall -std=c++14 Amp.o main.o -o build\main.exe

REM Limpio los códigos objeto
del *.o

REM Ejecutar el binario
build\main.exe
