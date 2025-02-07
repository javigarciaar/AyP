#include <iostream>
#define MAX 100
using namespace std;

bool esFeliz(int array[MAX], int size) {
    float countPar = 0, countImpar = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            countPar += array[i];
        } else {
            countImpar += array[i];
        }
    }
    return (countPar / size) > (countImpar / size);
}

bool esCompleto(int array[MAX], int size) {
    int s_pos_par = 0, s_pos_impar = 0;
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            s_pos_par += array[i];
        } else {
            s_pos_impar += array[i];
        }
    }
    return s_pos_par == s_pos_impar;
}

bool isStable(int array[MAX], int size) {
    return esFeliz(array, size) && esCompleto(array, size);
}

int main() {
    int array[MAX] = {3, 5, 1, 8, 2, 4};
    int size = 6;

    if (isStable(array, size)) {
        cout << "El arreglo es estable" << endl;
    } else {
        cout << "El arreglo es inestable" << endl;
    }
    
    int array2[MAX] = {5,4,3,6,2};
    int size2 = 5;
    if (isStable(array2, size2)) {
        cout << "El arreglo es estable" << endl;
    } else {
        cout << "El arreglo es inestable" << endl;
    }
}
