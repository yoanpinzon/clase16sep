#include <iostream>
#include <string>

using namespace std;

class Estudiante {
public:
    string nombre;
    int id;
    int edad;
    Estudiante() : nombre( "sin nombre"), id(0), edad(0) {}
    Estudiante(string nom) : nombre(nom), id(0), edad(0) {};
    Estudiante(string nom, int i, int d) : nombre(nom), id(i), edad(d) {};
    ~Estudiante() {
        cout << "Destruyendo el objeto" << endl;
    }
    void mostrar() {
        cout << "[ " << nombre << ", " << id << ", " << edad << " ]" << endl;
        return;
    }
    void cumple() {
        edad++;
    }
};


int main() {
    Estudiante a("pedro", 100, 17), b("maria", 200, 18);
    {
        Estudiante x;
        x.mostrar();
    }
    a.mostrar();
    b.mostrar();
    return 0;
}