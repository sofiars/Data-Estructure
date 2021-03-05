// main.cpp
// Autor: El Tigre
// Descripci�n: Suma los d�gitos de un n�mero de manera recursiva

#include <iostream>

int sumaDigitos(int);

int main() {
	int x = 1234;

	std::cout << "Numero original: " << x << std::endl;
	std::cout << "Suma de digitos: " << sumaDigitos(x);
	std::cout << std::endl << std::endl;
}

int sumaDigitos(int n) {
	// Caso base
	if (n == 0)
		return n;
	else
		return sumaDigitos(n / 10) + (n % 10);
}