#include "Horner.h"
#include "Dzielenie.h"
#include "ParaElementow.h"

void horner() {
    Horner horner;
    horner.run();
}

void dzielenie() {
    Dzielenie dzielenie;
    dzielenie.run();
}

void paraElementow() {
    ParaElementow paraElementow;
    paraElementow.run();
}

int getInput() {
    int choice;
    cin >> choice;
    return choice;
}

void displayMenu() {
    cout << endl;
    cout << "Wybierz algorytm:" << endl;
    cout << "1. Horner" << endl;
    cout << "2. Dzielenie" << endl;
    cout << "3. Para Elementow" << endl;
    cout << "9. Wyjdz" << endl;
    cout << "Wybor: ";
}

int main() {
    int choice;

    do {
        displayMenu();
        choice = getInput();

        switch (choice) {
            case 1:
                horner();
                break;
            case 2:
                dzielenie();
                break;
            case 3:
                paraElementow();
            default:
                break;
        }
    } while (choice != 9);

    return 0;
}
