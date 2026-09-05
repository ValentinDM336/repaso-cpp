#include <iostream>
#include <limits>
void limpiarLinea() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int leerEntero(const std::string& msg) {
    int n = 0;
    while (true) {
        std::cout << msg;
        bool ok = static_cast<bool>(std::cin >> n);
        limpiarLinea();
        if (ok) return n;
        std::cout << "Entrada invalida.\n";
    }
}
