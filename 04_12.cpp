/*
Guia 4 Ejercicio 12
Escriba un algoritmo que lea un número real x, un número entero n y los coeficientes
reales a_i de un polinomio p(x) = a_0*x0+a_1*x1+a_2x2 ... a_n-1*x_n-1
y calcule el valor del polinomio para el x dado. 

Por ejemplo, si x = 2, n = 3
y los coeficientes son 2, -1, 3, el polinomio es p(x) = 2 - x + 3x2, y debe
imprimir el valor 12.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float x, n, valor;
	float polinomio=0;
	cout << "Ingrese el valor de x: "; cin>>x;
	cout << "Ingrese el valor de n: "; cin>>n;
	
	for (int i =0; i < n; i++){
		cout << "Ingrese el valor de a_"<<i<<": "; 
		cin>>valor;
		float pot = pow(x, i);
		polinomio += valor * pot;
	}
	
	cout << endl<< "El polinomio vale: " << polinomio;
	return 0;
}
