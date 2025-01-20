#include <iostream>

using namespace std;

int main() {
    int num, aux;

    cout << "Ingrese un numero de 5 digitos: ";
    cin >> num;

    // Invertimos el número
    aux = (num % 10) * 10000;
    aux += ((num / 10) % 10) * 1000;
    aux += ((num / 100) % 10) * 100;
    aux += ((num / 1000) % 10) * 10;
    aux += num / 10000;

    // Comparamos el número original con su inverso
    if (aux == num) {
        cout << "Es capicua" << endl;
    } else {
        cout << "No es capicua" << endl;
    }

    return 0;
}
