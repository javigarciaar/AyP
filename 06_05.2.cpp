#include <iostream>
using namespace std;
#define MAX 600
bool esPotenciaDeDos(int num){
	int pot = 1; //elemento neutro dela multiplicacion
	while(pot <=num){ //mientras haya un potencia mas peq que num
		if(pot == num){ // primero pregunto (para el caso 1)
			return true;
		} 
		pot *= 2; //multiplico por 2
	}
	return false;
}

void CambiarNumeroPorK(int (&array)[MAX], int tam, int k){
	for ( int i =0; i<tam; i++){
		if(esPotenciaDeDos(i)){
			array[i]=k;
		}
	}
}

void imprimirArray(int array[MAX], int tam = MAX){
	for ( int i =0; i<tam; i++){
		cout<<array[i]<<" ";
	}

}

int main(){
	int arreglo[MAX]={};
	imprimirArray(arreglo);
	cout<<endl;
	CambiarNumeroPorK(arreglo, 70, 13);
	imprimirArray(arreglo);
}
