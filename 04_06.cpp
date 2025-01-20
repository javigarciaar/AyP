/*
Guia 4 Ejercicio 6
Escriba un algoritmo que tome como entrada un número N e imprima
la secuencia de Fibonacci hasta N. La secuencia de Fibonacci comienza
con los números 0 y 1 y se calcula en cada paso sumando los últimos dos
números de la secuencia. Por ejemplo, los primeros números de la secuencia
de Fibonacci son 0, 1, 1, 2, 3, 5, 8, 13, . . .
*/
#include <iostream>
using namespace std;

int main() {
    int N, a0, a1, an;
    cin >> N;

    // Inicialización de los primeros dos términos de la secuencia
    a0 = 0;
    a1 = 1;
	if ( N == 0) {
		cout<<a0;
	} else {
		cout<<a0<<" "<<a1<<" "; //Imprime 0 1 (para el caso N >= 1
	}
    // Bucle para generar los términos de la secuencia
    for (int i = 2; i <= N; i++) {
        // Cálculo del siguiente término
        an = a0 + a1;
        // Actualización de los términos anteriores
        a0 = a1;
        a1 = an;
        cout<<an<<" ";
    }
}
