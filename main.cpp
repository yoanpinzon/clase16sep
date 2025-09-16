#include <iostream>
#include <string>

using namespace std;

class Producto {
private:
    string nombre;
    int cantidad;
    int precio;

public:
    int getPrecio() const { return precio; }
    int getCantidad() const { return cantidad; }
    string getNombre() const { return nombre; }
    void setNombre(const string& nom) { nombre = nom; };

    void setCantidad(int cant) {
        if (cant < 0) {
            cout << "Bruto, como se le ocurre" << endl;
            return;
        }
        cantidad = cant;
    }

    void setPrecio(int p) { precio = p; }

    void aumentarPrecio(int valor) {
        precio += valor;
    }

    void aumentarPrecioPorcentaje(float porc) {
        precio *= (1 + porc / 100.0);
    }

    Producto() : nombre("sin nombre"), cantidad(0), precio(0) {
    }

    Producto(string nom, int cant, int p) : nombre(nom), cantidad(cant), precio(p) {
    }

    void mostrar() {
        cout << "[nombre=" << nombre << ", cantidad=" << cantidad << ", precio=" << precio << "]" << endl;
    }
};

int main() {
    Producto a("papas", 40, 100);
    Producto b("churros", 10, 2000);
    a.mostrar();
    b.mostrar();
    cout << a.getPrecio() << endl;
    b.setPrecio(4000);
    b.mostrar();
    a.setCantidad(-100);
    a.mostrar();
    b.mostrar();
    a.aumentarPrecio(40);
    b.aumentarPrecio(40);
    a.mostrar();
    b.mostrar();
    a.aumentarPrecioPorcentaje(10);
    b.aumentarPrecioPorcentaje(80);
    a.mostrar();
    b.mostrar();

    return 0;
}
