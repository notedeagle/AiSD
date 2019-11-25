#ifndef HORNER_DZIELENIE_H
#define HORNER_DZIELENIE_H

#include <iostream>
using namespace std;

class Dzielenie {

    double q, r, w;
    int a = 0;

public:
    double dzielenie(double y, double z);
    void run();
};

#endif //HORNER_DZIELENIE_H
