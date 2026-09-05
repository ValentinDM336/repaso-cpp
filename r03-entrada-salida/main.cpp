#include <iostream>
#include "funciones.hpp"
int leerEnRango(const std::string& msg, int lo, int hi){
	int n = 0;
	while (true) {
		std::cout << msg;
		bool ok = static_cast<bool>(std::cin >> n);
		limpiarLinea();
		if(ok && n >= lo && n <= hi) return n;
		std::cout << "Escribe un entero entre " << lo << " y " << hi << ".\n";
	}
}

int main(){
	
	std::cout << leerEnRango("abc", 1, 100) << "\n";
	return 0;
}
