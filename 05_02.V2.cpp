#include <iostream>
#include <math.h>
using namespace std;

int voltearNumero(int num){
	int reverso;
	for(reverso =0; num>0; reverso=reverso*10+num%10, num/=10);
	return reverso;
}
int extraerDigitos(int N, int K){
	int aux = voltearNumero(N), copia=0;
	for(int i=1; i<=K && aux !=0; i++, copia = copia*10 + aux%10, aux/=10);
	return copia;
}
int main(){
	cout<<extraerDigitos(123456, 3)<<endl;
	cout<<extraerDigitos(123456, 10)<<endl;
	cout<<extraerDigitos(123456, 1)<<endl;
	cout<<extraerDigitos(103456, 3)<<endl;
	cout<<extraerDigitos(100006, 10)<<endl;
	cout<<extraerDigitos(023456, 1)<<endl;
}
