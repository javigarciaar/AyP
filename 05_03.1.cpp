/*
Guia 5 Ejercicio 3 Version 1 (Solo devuleve la cant de capicuas)

Haga un algoritmo que permita determinar si un n�mero N de 6 d�gitos
contiene alg�n n�mero de 3 d�gitos capic�a. Por ejemplo, si N = 485992 no
hay n�meros capic�as contenidos, pero N = 106562 si contiene uno (656).
*/
#include <iostream>
using namespace std;

int cont_3_capicua(int N){
	int aux, cent, unid, c=0;
	while (N >= 100){
		aux = N%1000;
		N/=10;
		unid = aux %10;
		cent = aux/100;
		if(unid == cent){
			c++;
		}
		
	}
	return c;
}


int main() {
    cout<<cont_3_capicua(1056565);
}
