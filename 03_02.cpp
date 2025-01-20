#include <iostream>

using namespace std;

int main() {
    int hh, mm, ss, h_tot;
    bool meridiano;

    cout << "Ingrese hora HH:MM:SS: ";
    cin >> hh >> mm >> ss;

    cout << "Marque 0 para AM y 1 para PM: ";
    cin >> meridiano;

    // Calculamos los segundos totales
    if (!meridiano) { // AM
        h_tot = 3600 * hh + 60 * mm + ss;
    } else { // PM
        h_tot = 3600 * hh + 60 * mm + ss + 12 * 3600;
    }

    cout << "Las horas transcurridas son " << h_tot << endl;

    return 0;
}