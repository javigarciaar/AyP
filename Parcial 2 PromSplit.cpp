/*
Haga una función "PromSplit" que tome como entrada una matriz A de NxN y un booleano. La función debe retornar el promedio de los 
valores ubicados en las filas pares o impares, dependiendo del booleano.
*/

#include <iostream>
#include "ArreglosYMatrices.h"
#define MAX 100
using namespace std;
float PromSplit (int matriz [MAX][MAX], int N, bool var) {
    int cont=0; //contador
    float promedio=0;
    if (var) { //arbitrariamente digo si var=true, lo tomo para las filas pares.
        for (int i=0; i<N; i+=2){
            for (int j=0 ; j<N; j++){
            	promedio+= matriz[i][j];
                cont++;
            }
		}
    } else{
        for(int i=1; i<N; i+=2){
            for(int j=0; j<N ;j++){
                promedio+= matriz[i][j];
                cont++;
            }
        }
    }
    return promedio/cont;
}

int main(){
	int matrizA[MAX][MAX], n=5;
	LeerMatriz(matrizA, n, n);
	cout<<PromSplit(matrizA, n, 1)<<endl;
	cout<<PromSplit(matrizA, n, 0)<<endl;
	return 0;
}

