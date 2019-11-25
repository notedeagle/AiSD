#ifndef HORNER_PARAELEMENTOW_H
#define HORNER_PARAELEMENTOW_H

#include <iostream>
#include <random>
#include <ctime>
using namespace std;

class ParaElementow {
    int arr_size;
    int* tab;
    void print_array(int*);
    void merge(int*, int, int, int);
    void merge_sort(int, int);

public:
    void run();
    ParaElementow();
    ~ParaElementow();
};


#endif //HORNER_PARAELEMENTOW_H
