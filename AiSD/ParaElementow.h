#ifndef HORNER_PARAELEMENTOW_H
#define HORNER_PARAELEMENTOW_H

#include <iostream>
#include <random>
#include <ctime>
#include <algorithm>
using namespace std;

class ParaElementow {
    int arr_size;
    int* tab;
    int n;
    int a, b;
    void print_array(int*);
    void merge(int*, int, int, int);
    void merge_sort(int, int);
    bool sprawdzanieElementow(int*, int, int);

public:
    void run();
    ParaElementow();
    ~ParaElementow();
};


#endif //HORNER_PARAELEMENTOW_H
