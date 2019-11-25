#include "ParaElementow.h"

ParaElementow::ParaElementow() {

    cout << "Podaj wielkosc tablicy: ";
    cin >> arr_size;
    tab = new int[arr_size];
}

ParaElementow::~ParaElementow() {
    delete[] tab;
}

void ParaElementow::print_array(int* tabPtr) {
    if(arr_size <= 10) {
        for (int i = 0; i <arr_size; i++) {
            cout << tabPtr[i] << " ";
        }
    } else {
        cout << "Wyswietalnie tablicy wylaczone z powodu duzej wielkosci";
    }
    cout << endl;
}

void ParaElementow::merge(int* arr, int l, int m, int r) {
    int i, j, k, nl, nr;

    nl = m - l + 1;
    nr = r - m;
    int* larr = new int[nl];
    int* rarr = new int[nr];

    for (i = 0; i < nl; i++) {
        larr[i] = arr[l + i];
    }
    for (j = 0; j < nr; j++) {
        rarr[j] = arr[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while (i < nl && j < nr) {
        if (larr[i] <= rarr[j]) {
            arr[k] = larr[i];
            i++;
        } else {
            arr[k] = rarr[j];
            j++;
        }
        k++;
    }

    while (i < nl) {
        arr[k] = larr[i];
        i++; k++;
    }
    while (j < nr) {
        arr[k] = rarr[j];
        j++; k++;
    }

    delete[] larr;
    delete[] rarr;
}

void ParaElementow::merge_sort(int p, int r) {
    int m;
    if (p < r) {
        m = p + (r - p) / 2;

        merge_sort(p, m);
        merge_sort(m + 1, r);
        merge(tab, p, m, r);
    }
}

void ParaElementow::run() {
    random_device rd;
    mt19937 generator(rd());

    srand((unsigned int)time(nullptr));
    for (int i = 0; i < arr_size; i++)
    {
        tab[i] = rand() % 100 + 1;
    }

    cout << endl << "Wylosowana tablica: " << endl;
    print_array(tab);
    cout << endl << "Sortowanie..." << endl;
    merge_sort(0, arr_size - 1);
    cout << endl << "Posortowana tablica: " << endl;
    print_array(tab);
}