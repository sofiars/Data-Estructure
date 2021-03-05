// main.cpp
// Autor: El Tigre
// Descripci�n: Determina si una frase es un pal�ndrome de manera recursiva

#include <iostream>
#include <string>
#include <algorithm>

bool es_palindrome(std::string);

int main() {
	std::string cadena = "anita lava la tina";

	// Eliminamos los espacios en blanco de la cadena antes de enviarla a la funci�n
	cadena.erase(std::remove_if(cadena.begin(), cadena.end(), std::isspace), cadena.end());

	(es_palindrome(cadena)) ? std::cout << "TRUE" : std::cout << "FALSE" << std::endl;

	return 0;
}

// Determina si una palabra es pal�ndrome
bool es_palindrome(std::string str) {
	// Si la palabra tiene una letra o menos, es un pal�ndrome
	if (str.length() <= 1)
		return true;

	// Verificamos si la primera y �ltima letra son diferentes, en cuyo caso
	// no ser�a un pal�ndrome
	if (str[0] != str[str.length() - 1])
		return false;
	
	// Eliminamos la primera y �ltima letra de la frase
	str = str.substr(1, str.length() - 2);

	// Llamada recursiva con la nueva cadena 
	return es_palindrome(str);
}