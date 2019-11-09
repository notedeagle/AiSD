#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

#ifndef HORNER_HORNER_H
#define HORNER_HORNER_H


class Horner {
public:
    double horner1(double A[], int n, double x);
    double horner2(double A[], int n, double x);
    void run();
};


#endif //HORNER_HORNER_H
