#include<iostream>
#include "ArreglosYMatrices.h"
using namespace std;

void multiplicarMatrices(int matA[MAX][MAX], int matB[MAX][MAX], int (&matC)[MAX][MAX], int n, int m, int p){
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			for(int k=0; k<m; k++){
				matC[i][j]+=matA[i][k]*matB[k][j];
			}
		}
	}
}

int main(){
	int fA, cA, fB, cB;
	int matA[MAX][MAX];
	int matB[MAX][MAX];
	int matC[MAX][MAX];
	cout<<"Ingrese el tamano de matriz A: "; cin>>fA>>cA;
	LeerMatriz(matA, fA, cA);
	cout<<"Ingrese el tamano de matriz B: "; cin>>fB>>cB;
	LeerMatriz(matB, fB, cB);
	inicializarMatrizEnCero(matC, fA, cB);
	if(cA!=fB){
		cout<<"No es posible realizar la multiplicacion de AxB";
	} else {
		multiplicarMatrices(matA, matB, matC, fA, cA, cB);
		cout<<"El resultado de mutiplicar AxB es:"<<endl;
		ImprimirMatriz(matC, fA, cB);
	}
	return 0;
}
