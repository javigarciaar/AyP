#include <iostream>
#include "ArreglosYMatrices.h"
using namespace std;
#define MAX 100

int copiarEnArreglo(int matriz[MAX][MAX], int fil, int col, bool flag, int (&array)[MAX]){
	if(flag){
		for(int i=0; i<col; i++){
			array[i]=matriz[fil][i];
		}
	} else {
		for(int j=0; j<fil; j++){
			array[j]=matriz[j][col];
		}
	}
}

int calcularElemento(int filaA[MAX], int colB[MAX], int m){
	int valor=0;
	for(int i=0; i<m; i++){
		valor+=filaA[i]*colB[i];
	}
	return valor;
}

void multiplicarMatrices(int matA[MAX][MAX], int matB[MAX][MAX], int (&matC)[MAX][MAX],int fA, int cA, int fB, int cB, 
int (&arrayA)[MAX],int (&arrayB)[MAX]){
	int m=cA;
	if(cA!=fB){
		return;
	}
	
	for(int i=0; i<fA; i++){
		copiarEnArreglo(matA, i, m, 1, arrayA);
		for(int j=0; j<cB; j++){
			copiarEnArreglo(matB, m, j, 0, arrayB);
			matC[i][j]=calcularElemento(arrayA, arrayB, m);
		}
		
	}
	
}

int main(){
	int matA[MAX][MAX]={{2,3,-1}, {5,1,3}};
	int matB[MAX][MAX]={{-4,2,3}, {5,1,0}, {3,7,5}};
	int matC[MAX][MAX]={{0,0,0}, {0,0,0}};
	int arrA[MAX];
	int arrB[MAX];
	multiplicarMatrices(matA, matB, matC, 2, 3, 3, 3, arrA, arrB);
	ImprimirMatriz(matC, 2, 3);
}
