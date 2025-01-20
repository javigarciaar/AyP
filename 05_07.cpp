/*
Guia 5 Ejercicio 7
Haga una funci�n para determinar si un punto (X, Y ) est� dentro de un
rect�ngulo. El rect�ngulo es definido por la coordenada del v�rtice superior
izquierdo, su altura y su ancho.
*/
#include <iostream>
using namespace std;

bool isInRectangle(int Px, int Py, int Rx, int Ry, int h, int w){
	return Px >= Rx && Px <= Rx + w && Py>= Ry - h && Py<=Ry;
}

int main() {
	int x, y, h, w, px, py;
    cout<<"Datos del rectangulo: "<<endl;
    cout<<"Vertice superior izquierdo (x, y): "; cin>>x>>y;
    cout<<"Alto y ancho: (h, w): "; cin>>h>>w;
    cout<<"Punto a determinar (x, y): "; cin>>px>>py;
    cout<<"Resultado: "<<isInRectangle(px, py, x, y, h, w);
}
