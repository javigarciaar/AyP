#include <iostream>
#include "ArreglosYMatrices.h"
using namespace std;

bool esPrimo(int num) {
	int i;
    for(i =2; i<=num; i++){
    	if(num%i==0){
    		break;
		}
	}
	return num==i;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}
bool maxb(int a, int b) {
    return (a > b) ? true : false;
}
int MaxPrim(int matriz[MAX][MAX], int fil, int col) {
    //int maximoPrimo = -1;
	int maxIndexX = 0;
	int maxIndexY = 0;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (esPrimo(matriz[i][j])) {
                //maximoPrimo = max(maximoPrimo, matriz[i][j]);
				if( matriz[i][j] > matriz[maxIndexX][maxIndexY]){
					maxIndexX = i;
					maxIndexY = j;
				}
            }
        }
    }
    return maxIndexY;
}

int main(){
	int matriz[MAX][MAX];
	int filas;
	int columnas;
	cout<<"Ingrese la cantidad de filas: "; cin>>filas;
	cout<<"Ingrese la cantidad de columnas: "; cin>>columnas;
	LeerMatriz(matriz, filas, columnas);
	cout<<endl;
	ImprimirMatriz(matriz, filas, columnas);
	cout<<"Resultado: ";
	cout<<MaxPrim(matriz, filas, columnas);
}
