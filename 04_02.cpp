/*
GUIA 4 EJERCICIO 2
Haga un algoritmo que determine si un n�mero es capic�a (pal�ndrome).
Un n�mero es capic�a si se lee igual al derecho y a rev�s
*/
#include <iostream>
using namespace std;

int main(){
	int n, volteado = 0, copia;
	cin >> n;
	for (copia = n; n>0; volteado = volteado * 10 + n%10, n/=10 );
	cout << (copia == volteado ? "Es capicua" : "No es");
	return 0;
}
