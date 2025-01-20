/*
Guia 4 Ejercicio 8:
Utilice ciclos para calcular el valor de la expresión: 
sumatoria desde i=1 hasta n de (Productoria desde j=1 hasta i de: (j^2)) 

*/

#include <iostream>
using namespace std;
int main(){
    int prod = 1, sum = 0, n;
    cout<<"Ingrese el n: "; cin>>n;
    for (int i = 1; i<=n; i++){

        for(int j=1; j<=i; j++){
            prod*=j*j;
        }
        sum = sum + prod;
    }
    cout<<endl<<"El resultado es: "<<sum;

    return 0;
}
