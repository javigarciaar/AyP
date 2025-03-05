#include <iostream>
using namespace std;
class SintonizadorDigital {
private:
    float frecuencia;

    void limite(float valor) {
        if (valor > 108) this->frecuencia = 80;
        if (valor < 80) this->frecuencia = 108;
    }

public:
    SintonizadorDigital(float frec = 80) : frecuencia(frec) {}

    float display() {
         cout << "frecuencia: " << frecuencia;
        return frecuencia;
    }

    void up() {
        frecuencia += 0.5;
        limite(frecuencia);
    }

    void down() {
        frecuencia -= 0.5;
        limite(frecuencia);
    }
};

int main() {
    // Ejemplo de uso
    SintonizadorDigital sintonizador(108); // Inicializa en 80.0

    sintonizador.display(); // Muestra la frecuencia inicial
     cout <<  endl;

    sintonizador.up(); // Sube la frecuencia
    sintonizador.display(); // Muestra la nueva frecuencia
     cout <<  endl;

    sintonizador.down(); // Baja la frecuencia
    sintonizador.display(); // Muestra la frecuencia después de bajar
     cout <<  endl;
     
     sintonizador.down(); // Baja la frecuencia
    sintonizador.display(); // Muestra la frecuencia después de bajar
     cout <<  endl;
     
     sintonizador.down(); // Baja la frecuencia
    sintonizador.display(); // Muestra la frecuencia después de bajar
     cout <<  endl;

    return 0;
}
