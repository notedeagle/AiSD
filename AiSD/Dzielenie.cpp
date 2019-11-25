#include "Dzielenie.h"

double Dzielenie::dzielenie(double y, double z) {

    r = y;
    q = 0;
    w = z;

    do {
        w = w * 2;
    } while(w <= y);

    do {
        q = q * 2;
        w = w/2;

        if(w <= r) {
            r = r - w;
            q = q + 1;
            a++;
        }
    } while(w > z);

    return q, r;
}

void Dzielenie::run() {
    int y, z;
    cout << "Podaj y: ";
    cin >> y;
    cout << "Podaj z: ";
    cin >> z;
    cout << endl;
    dzielenie(y, z);
    cout << "Wynik z dzielenia: " << q << endl << "Reszta: " << r << endl;
    cout << "Liczba odejmowan: " << a << endl;
}
