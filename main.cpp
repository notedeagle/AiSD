#include <iostream>
#include <time.h>
//#include <windows.h>
#include <iomanip>
using namespace std;

double horner1(double A[], int n, double x){ //algorytm 6
    double v = 0;
    for(int i = n; i >= 0; i--){
        v = A[i] + v * x;
    }
    return v;
}

double horner2(double A[], int n, double x){
    double p = A[0];
    double w;

    for(int i = 1; i <= n; i++){
        w = x;

        for(int j = 1; j <= i-1; j++){
            w *= x;
        }
        p += A[i] * w;
    }

    return p;
}

int main(){
    srand(time(NULL));
    const int WYJSCIE = 0;

    clock_t start1, start2;
    clock_t stop1, stop2;
    int ile = 0;
    int wybor = 0;
    double h1, h2;
    double szyb1, szyb2;
    double* tab = NULL;

    do{
        double punkt = (double)rand() / (double)RAND_MAX;
        cout << setprecision(5);
        cout << "\nWylosowano punkt: " << punkt << endl;

        cout << "1. Caly program\n2. Szybszy algorytm\n3. Wolniejszy algorytm\n>> ";
        cin >> wybor;

        if(wybor == WYJSCIE)
            break;

        cout << "Podaj wielkosc tablicy: ";
        cin >> ile;

        tab = new double[ile];

        for(int i = 0; i < ile; i++){
            tab[i] = (double)rand() / (double)RAND_MAX;
            //cout << tab[i] << ", ";
            //if(!(i % 10) && i)
            //cout << endl;
        }
        //cout << tab[ile - 1] << endl;
        if(wybor != 3){
            start1 = clock();
            horner1(tab, ile, punkt);
            stop1 = clock();
            h1 = horner1(tab, ile, punkt);
        }

        if(wybor != 2){
            start2 = clock();
            horner2(tab, ile, punkt);
            stop2 = clock();
            h2 = horner2(tab, ile, punkt);
        }

        cout << setprecision(20);

        if(wybor != 3){
            cout << "\nWynik 1: " << h1 << endl;
            szyb1 = (double)(stop1 - start1) / (double)CLOCKS_PER_SEC;
            cout << "Szybkosc 1: " << szyb1 << endl;
        }

        if(wybor != 2){
            cout << "\nWynik 2: " << h2 << endl;
            szyb2 = (double)(stop2 - start2) / (double)CLOCKS_PER_SEC;
            cout << "Szybkosc 2: " << szyb2 << endl;
        }

        if(wybor == 1){
            cout << "\nRoznica w wyniku: " << h2 - h1 << endl;
            cout << "Roznica w szybkosci: " << szyb2 - szyb1 << endl;
        }

        delete[] tab;
    }
    while(wybor != WYJSCIE);

    return 0;
}
