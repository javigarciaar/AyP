#include <iostream>
#include <string>
using namespace std;
class Producto {
private:
    int codigo;
    string nombre;
    string descripcion;
    float precio;
    float IVA;
    string fecha;

public:
    Producto( string n = "",  string d = "", float p = 0.0f,  string f = "")
        : nombre(n), descripcion(d), precio(p), fecha(f), IVA(0.12) { // IVA = 12%
        // El código se inicializa automáticamente a 0 o con un valor asignado externamente.
    }

    void setIVA(float iva) {
        this->IVA = iva;
    }

    void setNuevoPrecio(float precioNuevo) {
        this->precio = precioNuevo;
    }

     string getNombre() const {
        return this->nombre;
    }

     string getDescripcion() const {
        return this->descripcion;
    }

    float getPrecio() const {
        return this->precio + (this->precio * this->IVA); // Precio con IVA incluido
    }

     string getFecha() const {
        return this->fecha;
    }
};

int main() {
    // Ejemplo de uso
    Producto producto1("Laptop", "Laptop para programar", 1200.0f, "2023-10-27");

     cout << "Nombre: " << producto1.getNombre() <<  endl;
     cout << "Descripción: " << producto1.getDescripcion() <<  endl;
     cout << "Precio con IVA: " << producto1.getPrecio() <<  endl;
     cout << "Fecha: " << producto1.getFecha() <<  endl;

    producto1.setNuevoPrecio(1300.0f);
     cout << "Nuevo precio con IVA: " << producto1.getPrecio() <<  endl;

    return 0;
}
