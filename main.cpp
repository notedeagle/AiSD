#include "Horner.h"

void horner() {
    Horner horner;
    horner.run();
}

int getInput() {
    int choice;
    cin >> choice;
    return choice;
}

void displayMenu() {
    cout << "Wybierz algorytm:" << endl;
    cout << "1. Horner" << endl;
    cout << "Wybor: " << endl;
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
            default:
                break;
        }
    } while (choice != 9);

    return 0;
}
