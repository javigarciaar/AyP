#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Ingrese un numero menor a 100: ";
    cin >> num;

    if (num < 2) {
        cout << "No es primo" << endl;
    } else if (num == 2 || num == 3 || num == 5 || num == 7) {
        cout << "Es primo" << endl;
    } else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {
        cout << "No es primo" << endl;
    } else {
        cout << "Es primo" << endl;
    }

    return 0;
}
