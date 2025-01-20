#include <iostream>
using namespace std;
int main(){
    int dia, mes, dias_t=0;
    cout<<"Escriba una fecha"; 
    cin>>dia>>mes;

    switch (mes)
    {// 5/11 -> 5 dias + 10 meses (todos los anteriores al 11)
    // 5 diciembre nov + oct + .... + feb + ene
    case 12:
        dias_t+=30; //noviembre
    case 11: 
        dias_t+=31; //oct
    case 10: 
        dias_t+=30; //sep
    case 9: 
        dias_t+=31; //ago
    case 8: 
        dias_t+=31; //jul
    case 7: 
        dias_t+=30; //jun
    case 6: 
        dias_t+=31; //may
    case 5:  
        dias_t+=30; //abr
    case 4: 
        dias_t+=31; //mar
    case 3: 
        dias_t += 29; //feb
    case 2: 
        dias_t += 31; //ene
    case 1:
    dias_t += dia;
    }
    cout << "El numero de dias transcurridos es: " << dias_t << endl;
    return 0;
}