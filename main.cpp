#include "Horner.h"
#include "Dzielenie.h"

void horner() {
    Horner horner;
    horner.run();
}

void dzielenie() {
    Dzielenie dzielenie;
    dzielenie.run();
}

int getInput() {
    int choice;
    cin >> choice;
    return choice;
}

void displayMenu() {
    cout << "Wybierz algorytm:" << endl;
    cout << "1. Horner" << endl;
    cout << "2. Dzielenie" << endl;
    cout << "3. Wyjdz" << endl;
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
            case 2:
                dzielenie();
                break;
            case 3:
                return 0;
            default:
                break;
        }
    } while (choice != 9);

    return 0;
}
