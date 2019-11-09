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
        }
    } while(w > z);

    cout << "Wynik z dzielenia: " << q << endl << "Reszta: " << r << endl << endl;

    return q, r;
}

void Dzielenie::run() {
    dzielenie(45, 6);
}
