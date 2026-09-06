#include <iostream>
#include <vector>

void pedirNotas(double n[], int cuantas);
double calcularPromedio(const double n[], int cuantas);
void decidirPromedio(double p);

int main() {
	double notas[3];
	pedirNotas(notas, 3);
	double prom = calcularPromedio(notas, 3);
	std::cout << "Promedio: " << prom << '\n';
	decidirPromedio(prom);
	return 0;
}

void pedirNotas(double n[], int cuantas) {
	for (int i = 0; i < cuantas; i++) {
		std::cout << "Nota " << i + 1 << ": ";
		std::cin >> n[i];
	}
}

double calcularPromedio(const double n[], int cuantas){
	int suma = 0;
	for (int i = 0; i < cuantas; i++) {suma += n[i];}
	return suma / cuantas;
}
 
void decidirPromedio(double p) {
	if (p >= 70) std::cout << "Aprobado\n";
	else 	     std::cout << "Reprobado\n";
}
