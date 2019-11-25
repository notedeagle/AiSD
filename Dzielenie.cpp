#include "Dzielenie.h"

double Dzielenie::dzielenie(double y, double z) {
    cout << "y: " << y << endl << "z: " << z << endl;

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
    cout << "Podaj y: " << endl;
    cin >> y;
    cout << "Podaj z: " << endl;
    cin >> z;
    dzielenie(y, z);
    cout << "Wynik z dzielenia: " << q << endl << "Reszta: " << r << endl << endl;
}
