/*
Guia 5 Ejercicio 2 Version 2
Haga un algoritmo para una función que reciba dos parámetros N y
K y que retorne los K dígitos más a la izquierda de N. Por ejemplo,
extraerDigitos(542207, 2) debe retornar 54.
*/
#include <iostream>
#include <cmath>
using namespace std;

int invertirNumero(int num){
	int reverso=0;
	for(; num >0; reverso = reverso*10 + num%10, num/=10);
	return reverso;
}

int extraerDigitosDerecha(int N, int k){
	return N % int(pow(10, k));
}

int main() {
	int num, k;
	cout<<"Numero: "; cin>>num;
	cout<<"cantidad k: "; cin>>k;
	cout<<"Reverso:"<<invertirNumero(num)<<endl;
    cout<<"los k digitos mas a la iquierda son: "<<extraerDigitosDerecha(invertirNumero(num), k);
}
