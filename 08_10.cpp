#include <iostream>
using namespace std;
class Corredor {
private:
    int energia;

    void verificarEnergia() {
        if (energia < 0) energia = 0;
        if (energia > 100) energia = 100;
    }

public:
    Corredor(int energiaInicial) : energia(energiaInicial) {
        verificarEnergia();
    }

    void recargarEnergia(int valor) {
        energia += valor;
        verificarEnergia();
    }

    bool energiaAgotada() {
        return energia < 10;
    }

    void correr() {
        if (energiaAgotada()) {
            energia = 0;
            cout << "Se llegó al nivel minimo de energía: " << energia << endl;
        } else {
            energia -= 10;
        }
    }

    void entrenar() {
        energia += 15;
        verificarEnergia();
    }
    
    int getEnergia(){
    	return this->energia;
	}
};

int main() {
    // Ejemplo de uso
    Corredor corredor(-990); // Inicializa con 50 de energía

    corredor.correr(); // Corre una vez
    cout << "Energía después de correr: " << corredor.getEnergia() << endl;

    corredor.entrenar(); // Entrena una vez
    cout << "Energía después de entrenar: " << corredor.getEnergia() << endl;

    return 0;
}
