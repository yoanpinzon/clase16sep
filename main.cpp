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
    ~Estudiante() { }
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
    Estudiante otro( "tola", 1000, 500 ), c( "carlos");
    a.mostrar();
    b.mostrar();
    otro.mostrar();
    c.mostrar();
    b.edad++;
    a.mostrar();
    b.mostrar();
    a.cumple();
    a.mostrar();
    for (int i = 0; i < 5; i++ ) { b.cumple(); }
    b.mostrar();
    return 0;
}