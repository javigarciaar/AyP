/*
Guia 5 Ejercicio 2 Version 1
Haga un algoritmo para una funci�n que reciba dos par�metros N y
K y que retorne los K d�gitos m�s a la izquierda de N. Por ejemplo,
extraerDigitos(542207, 2) debe retornar 54.
*/
#include <iostream>
using namespace std;

int extraerDigitos(int N, int K){
	int copia = N, c = 0;
	while (copia != 0){
		copia/=10;
		c++;
	}
	while(c>k){
		N/=10;
		c--;
	}
	return N;
}


int main() {
    cout<<extraerDigitos(542207, 2);
}
