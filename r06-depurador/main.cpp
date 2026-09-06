#include <iostream>
#include "suma.cpp"
#include "pares.cpp"
#include "maximo.cpp"

int main() {
	int numEl = 5, vector[numEl] = {1,2,3,4,5};
	std::cout << suma(vector, numEl) << ".\n";
	std::cout << pares(vector, numEl) << ".\n";
	std::cout << maximo(vector, numEl) << ".\n";
	return 0;
}
