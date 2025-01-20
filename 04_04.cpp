/*
GUIA 4 EJERCICIO 4
Dada una secuencia de números terminada en cero, elaborar un algoritmo
para calcular el porcentaje y la suma de los números impares, el porcentaje
y la suma de los números pares, y la suma de todos los números, y cuántos
números fueron ingresados.
*/
#include <iostream>
using namespace std;

int main() {
    int num, cant_t, cant_p, cant_i, suma_pares = 0, suma_impares = 0, suma_tot;
	float porc_p;
	cout << "Ingrese una secuencia de numeros (0 para salir): ";
    while(true){
        
        cin >> num;

        if (num == 0) {
            break;
        }

        cant_t++;

        if (num % 2 == 0) {
            suma_pares += num;
            cant_p++;
        } else {
            suma_impares += num;
        }
	}
	suma_tot = suma_pares + suma_impares;
	
	cout << "Total ingresados: " << cant_t << endl;
	cout << "Suma Total ingresados: " << suma_tot << endl;
    cout << "Suma pares: " << suma_pares << endl;
    porc_p = (100.0*cant_p/cant_t);
	cout << "Porcentaje de pares: " << porc_p << endl;
    cout << "Suma impares: " << suma_impares << endl;
    cout << "Porcentaje de impares: " << 100 - porc_p << endl;

}
