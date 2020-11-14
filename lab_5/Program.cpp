#include "Transport.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {  
    Auto* A = new Auto(2.45, 300);
    Bicycle* B = new Bicycle(11.15, 40);
    Cart* C = new Cart(5.35, 180);
    
    cout << "AUTO\n" << A
         << "\nBICYCLE:\n" << B
         << "\nCART:\n" << C << endl;

    cin >> C; // for example, let's rewrite time and cost of CART

    cout << "\nNEW CART\n" << C; // CART with new data 

    delete A;
    delete B;
    delete C;

    return 0;
}
