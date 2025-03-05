#include <iostream>
#include <string>

using namespace std;

class Nombre {
private:
     string primerNombre;
     string segundoNombre;
     string apellido;

public:
    Nombre(string pn,  string sn,  string ap) 
        : primerNombre(pn), segundoNombre(sn), apellido(ap) {}

    // Getters para acceder a los nombres si es necesario
     string getPrimerNombre() const { return primerNombre; }
     string getSegundoNombre() const { return segundoNombre; }
     string getApellido() const { return apellido; }
};

class Vendedor {
private:
    string cedula;
    Nombre nombre;
    string zonaDeVenta;
    float ventasMensuales[12];
    float totalAnual;
    float comision;

public:
    Vendedor(string c, string n1, string n2,  string ap, string zv) 
        : nombre(n1, n2, ap), cedula(c) , zonaDeVenta(zv), totalAnual(0), comision(0) {
        for (int i = 0; i < 12; ++i) {
            this->ventasMensuales[i] = 0.0f; // Inicializar ventasMensuales
        }
    }

    void ingresarVentasMes(int mes, float valor) {
        if (mes >= 1 && mes <= 12) { // Validar el mes
            this->ventasMensuales[mes - 1] = valor; 
        } else {
             cerr << "Mes inválido." <<  endl;
        }
    }

    void calcularTotalAnual() {
        //totalAnual = 0; // Reiniciar el total
        for (int i = 0; i < 12; ++i) {
            this->totalAnual += ventasMensuales[i];
        }
    }

    float getTotalAnual() {
        calcularTotalAnual();
        return this->totalAnual;
    }

    void calcularComision() {
    	calcularTotalAnual();
        if (this->totalAnual < 50000) {
            this->comision = 0;
        } else if (this->totalAnual < 70500) {
            this->comision = this->totalAnual * 0.15;
        } else if (this->totalAnual < 10000){
            this->comision = this->totalAnual * 0.20;
        } else {
            this->comision = this->totalAnual * 0.30;
        }
    }

    float getComision() {
        calcularComision();
        return this->comision;
    }
};

int main() {
    // Ejemplo de uso
    
    Vendedor vendedor("12345678", "Juan", "Carlos", "Pérez", "Zona Norte");

for(int i=0; i<12; i++){
	cout<<"Ingrese las ventas del mes (mes, cantidad)";
	int mes;
	float cant;
	cin>>mes>>cant;
	vendedor.ingresarVentasMes(mes, cant);
}
    
    // ... ingresar ventas para otros meses

     cout << "Total anual de ventas: " << vendedor.getTotalAnual() <<  endl;
     cout << "Comisión: " << vendedor.getComision() <<  endl;

    return 0;
}
