#include "Transport.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {  
    Transport* A = new Auto;
    Transport* B = new Bicycle;
    Transport* C = new Cart;
    int choice;

    cout << "Choose a transport: \n"
         << "1. Auto\n"
         << "2. Bicycle\n"
         << "3. Cart\n";
    cout << "Your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            A->getData();
            break;
        case 2:
            B->getData();
            break;
        case 3:
            C->getData();
            break;
    }

    delete A;
    delete B;
    delete C;

    return 0;
}