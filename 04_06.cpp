/*
Guia 4 Ejercicio 6
Escriba un algoritmo que tome como entrada un n�mero N e imprima
la secuencia de Fibonacci hasta N. La secuencia de Fibonacci comienza
con los n�meros 0 y 1 y se calcula en cada paso sumando los �ltimos dos
n�meros de la secuencia. Por ejemplo, los primeros n�meros de la secuencia
de Fibonacci son 0, 1, 1, 2, 3, 5, 8, 13, . . .
*/
#include <iostream>
using namespace std;

int main() {
    int N, a0, a1, an;
    cin >> N;

    // Inicializaci�n de los primeros dos t�rminos de la secuencia
    a0 = 0;
    a1 = 1;
	if ( N == 0) {
		cout<<a0;
	} else {
		cout<<a0<<" "<<a1<<" "; //Imprime 0 1 (para el caso N >= 1
	}
    // Bucle para generar los t�rminos de la secuencia
    for (int i = 2; i <= N; i++) {
        // C�lculo del siguiente t�rmino
        an = a0 + a1;
        // Actualizaci�n de los t�rminos anteriores
        a0 = a1;
        a1 = an;
        cout<<an<<" ";
    }
}
