/*
Guia 4 Ejercicio 5
Escriba un algoritmo que tome como entrada una secuencia de n�meros
0 y 1 terminada en -1 que representan un n�mero binario y calcule el
n�mero decimal representado. Por ejemplo, si la secuencia es 1 0 0 1 0 1
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
    cout << "El n�mero convertido es: " << dec << endl;
}
