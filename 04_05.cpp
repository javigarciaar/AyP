/*
Guia 4 Ejercicio 5
Escriba un algoritmo que tome como entrada una secuencia de números
0 y 1 terminada en -1 que representan un número binario y calcule el
número decimal representado. Por ejemplo, si la secuencia es 1 0 0 1 0 1
-1, su algoritmo debe imprimir 37.
*/
#include <iostream>
using namespace std;

int main() {
    int sec, dec = 0;

	do{
		cin>>sec;
		if (sec == -1){
			break;
		}
		dec = dec * 2 + sec;
	}while (true);

    // Imprime el resultado final
    cout << "El número convertido es: " << dec << endl;
}
