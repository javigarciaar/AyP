/*
Guia 4 Ejercicio 7
Escriba un algoritmo que imprima los valores de todas las fichas de domin�
sin repetir.
*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 6; i++) {
        for (int j = i; j <= 6; j++) {
        	cout<<"["<<i<<"|"<<j<<"] ";
    	}
    	cout<<endl;
    }
}
