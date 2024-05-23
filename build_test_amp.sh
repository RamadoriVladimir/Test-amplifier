#!/bin/bash
##Borro el directorio build si ya existiera
if [ -d "./build" ];
	then rm -r ./build;
fi

##Creo el directorio build
mkdir ./build

## Compilo código objeto
g++ -Wall -std=c++14 -c ./src/Amp.cpp -I./include/ 
g++ -Wall -std=c++14 -c main.cpp -I./include/ 

# ## Compilo el Binario
g++ -Wall -std=c++14 Amp.o main.o -o ./build/main.bin 

## Limpio los códigos objeto
rm ./*.o

# ## Permisos de Ejecución para el binario
chmod +x ./build/main.bin

#ejecutar:
./build/main.bin