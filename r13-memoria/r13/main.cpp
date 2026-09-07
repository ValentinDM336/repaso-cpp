#include <iostream>

class Arreglo {
	int* datos;   int n;
public:
	Arreglo(int tam) : datos(new int[tam]), n(tam) { std::cout << &datos << "\n"; }
	Arreglo(const Arreglo& otro) : datos(new int[otro.n]), n(otro.n) {
   		for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
		std::cout << &datos << "\n";
	}
	Arreglo& operator=(const Arreglo& otro) {
		if (this == &otro) return *this;
		delete[] datos;
		n = otro.n;
		datos = new int[n];
		for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
		std::cout << &datos << "\n";
		return *this;
	}
	~Arreglo() { std::cout << &datos << "\n"; delete[] datos; }
	void set(int i, int v) { datos[i] = v; }
	int get(int i) const { return datos[i]; }
	int tam() const { return n; }
};

int main() {
	Arreglo a(3);   a.set(0, 10);
	Arreglo b = a;  b.set(0,99);
	std::cout << "a[0] = " << a.get(0) << "\n";
	std::cout << "b[0] = " << b.get(0) << "\n" << "fin de main\n";
}
