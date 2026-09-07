

class Arreglo {
public:
     Arreglo(int n) : n_(n), datos_(new int[n]) {}
     ~Arreglo() { delete[] datos_; }
}
