#include <iostream>
#include <string>

using namespace std;

class Estudiante {
public:
    string nombre;
    int id;
    int edad;
    void mostrar() {
        cout << "[ " << nombre << ", " << id << ", " << edad << " ]" << endl;
        return;
    }
    void cumple() {
        edad++;
    }
};


int main() {
    Estudiante a, b;
    a.nombre = "pedro";
    a.id = 100;
    a.edad = 17;
    b.nombre = "maria";
    b.id = 200;
    b.edad = 18;
    b.edad++;

    a.mostrar();
    b.mostrar();
    a.cumple();
    a.mostrar();
    for (int i = 0; i < 5; i++ ) { b.cumple(); }
    b.mostrar();
    return 0;
}