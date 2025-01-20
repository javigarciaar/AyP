#include <iostream>
#include <math.h>
using namespace std;

int extraerDigitos(int N, int K){
	int longitud, copia;
	for(longitud =0, copia = N; N>0; longitud++, N/=10);
	return K > longitud ? copia : copia/pow(10, longitud - K);
}

int main(){
	cout<<extraerDigitos(123456, 3)<<endl;
	cout<<extraerDigitos(123456, 10)<<endl;
	cout<<extraerDigitos(123456, 1)<<endl;
}
