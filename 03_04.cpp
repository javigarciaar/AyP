#include <iostream>

using namespace std;

int main() {
    int hh1, mm1, hh2, mm2, t1, t2, dif, costo, k, m;
	//Se asume que el usuario siempre ingresara horas validas.
    cout << "Ingrese hora entrada (HH:mm): ";
    cin >> hh1 >> mm1;

    cout << endl << "Ingrese hora salida (HH:mm): ";
    cin >> hh2 >> mm2;

    t1 = hh1 * 60 + mm1;
    t2 = hh2 * 60 + mm2;
    dif = t2 - t1; //En formato 24h, el t2 siempre sera mayor al t1.

    costo = 100; //Se asume que Hentrada nunca va a ser igual a Hsalida. Por ende el minimo costo es 100.
    if (dif > 60) {
        k = (dif - 60) / 60;
        m = (dif - 60) % 60;
        if (m == 0){
        	costo += k * 80;
		} else {
			costo += (k + 1) * 80;
		}
    }

    cout << "El costo es: " << costo << endl;

    return 0;
}
