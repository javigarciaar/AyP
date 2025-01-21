#include <iostream>
#include <math.h>
using namespace std;
#define MAX 1000

void imprimirArreglo(int arreglo[MAX]){
	for(int i =0; i<MAX; i++){
		cout<<arreglo[i]<<" ";
	}
}

void cambiarK(int (&arr)[MAX], int tam, int k){
	for ( int i=0; i <= tam; i++){
		float valor = log(i) / log(2);
		if ( valor == (int) valor ){
			arr[i] = k;
		}
	}
}

int main(){
	int arreglo[MAX] = {};
	cambiarK(arreglo, 614, 1);
	imprimirArreglo(arreglo);
}
