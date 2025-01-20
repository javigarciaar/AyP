/*
Guia 5 Ejercicio 8
Usando la función desarrollada en el problema (7) haga una función que
tome como entrada dos rectángulos y determine si algún vértice del 1er
rectángulo está contenido en el 2do rectángulo..
*/
#include <iostream>
using namespace std;

bool isInRectangle(int Px, int Py, int Rx, int Ry, int h, int w){
	return Px >= Rx && Px <= Rx + w && Py>= Ry - h && Py<=Ry;
}

bool isFirstInSecond(float xA, float yA, float hA, float wA, float xB, float yB, float hB, float wB){
	bool A, B, C, D;
	A = isInRectangle(xA, yA, xB, yB, hB, wB);
	B = isInRectangle(xA, yA - hA, xB, yB, hB, wB);
	C = isInRectangle(xA + wA, yA, xB, yB, hB, wB);
	D = isInRectangle(xA + wA, yA - hA, xB, yB, hB, wB);
	return A || B || C || D;
}

int main() {
	float xA, yA, hA, wA, xB, yB, hB, wB;
    cout<<"Datos del rectangulo A: "<<endl;
    cout<<"Vertice superior izquierdo (x, y): "; cin>>xA>>yA;
    cout<<"Alto y ancho: (h, w): "; cin>>hA>>wA;
    
    cout<<endl<<"Datos del rectangulo B: "<<endl;
    cout<<"Vertice superior izquierdo (x, y): "; cin>>xB>>yB;
    cout<<"Alto y ancho: (h, w): "; cin>>hB>>wB;
    
    cout<<"Resultado: "<<isFirstInSecond(xA, yA, hA, wA, xB, yB, hB, wB);
    
    
}
