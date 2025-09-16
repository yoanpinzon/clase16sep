#include <iostream>
#include <string>
#include <vector>

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
    vector<Producto> tienda;
    tienda.push_back( a );
    tienda.push_back( b );
    tienda.emplace_back("huevos", 100, 800 );
    tienda.emplace_back("arroz", 50, 20000 );
    for ( auto& p : tienda ) {
        p.mostrar();
    }
    int suma = 0;
    for ( auto& p : tienda ) {
        suma += p.getCantidad() * p.getPrecio();
    }
    cout << "Total invetario=" << suma << endl;
    tienda[3].setPrecio(2000);
    suma = 0;
    for (auto& p : tienda) {
        suma += p.getCantidad() * p.getPrecio();
    }
    cout << "Total invetario=" << suma << endl;

    return 0;
}
