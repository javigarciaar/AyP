/*
GUIA 4 EJERCICIO 1
Escriba un algoritmo que lea un n�mero N y calcule e imprima el n�mero
de d�gitos de N
*/
#include <iostream>
using namespace std;

int main(){
	int n, cant = 0;
	cin >> n;
	for (cant =0; n>0; n/=10, cant++);
	cout << cant;
	return 0;
}
