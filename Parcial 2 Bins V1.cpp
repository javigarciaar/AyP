#include <iostream>
#include "ArreglosYMatrices.h"
#define MAX 100
using namespace std;
// AyP Parcial 2

// 2) Haga una función "Bins" que reciba como parámetro un arreglo
// de N enteros cuyos valores son solo unos y ceros. Si la cantidad
// de unos en el arreglo es par, se deben tomar los valores como si
// fuese un número binario y retornar su equivalente decimal. En caso
// contrario, retornar el número de ceros presentes en el arreglo.

bool cantUnosEsPar(int array[MAX], int size) {
  int cantUnos = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] == 1) {
      cantUnos++;
    }
  }
  return cantUnos % 2 == 0;
}

int Bins(int array[MAX], int size) {
  int num = 0;

  if (cantUnosEsPar(array, size)) {
    for (int i = size - 1, pot = 1; i >= 0; i--, pot *= 2) {
      num += array[i] * pot;
    }
    return num;
	}
	
    for (int i = 0; i < size; i++) {
      if (array[i] == 0) {
        num++;
      }
    }
    return num;
  }

int main(){
	int arrayA[MAX], sizeA, arrayB[MAX], sizeB;
	LeerArreglo(arrayA, sizeA, -1);
	cout<<Bins(arrayA, sizeA)<<endl;
	LeerArreglo(arrayB, sizeB, -1);
	cout<<Bins(arrayB, sizeB);
	return 0;
}

