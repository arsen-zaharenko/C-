#include "Transport.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Auto::getData() {
    char luggage;
    double distance;
    cout << "Enter trip distance: ";
    cin >> distance;
    cout << "Have you got a luggage?(y/n) ";
    cin >> luggage;
    if (luggage == 'y') {
        cout << "Trip time: " << fixed << setprecision(1) << distance / speed << " h" << endl;
        cout << "Trip cost with a luggage: " << (cost + 20) * distance / 10 << '$' << endl;
    }
    else {
        cout << "Trip time: " << fixed << setprecision(1) << distance / speed << " h" << endl;
        cout << "Trip cost: " << fixed << setprecision(1) << cost * distance / 10 << '$' << endl;
    }
}

void Bicycle::getData() {
    char luggage;
    double distance;
    cout << "Enter trip distance: ";
    cin >> distance;
    cout << "Have you got a luggage?(y/n) ";
    cin >> luggage;
    if (luggage == 'y') {
        cout << "Sorry, not enough space. You or a luggage?(m/l) ";
        cin >> luggage;
        if (luggage == 'm') {
            cout << "Trip time: " << fixed << setprecision(1) << distance / (speed - 30) << " h" << endl;
            cout << "Trip cost: " << fixed << setprecision(1) << (cost - 15) * distance / 10 << '$' << endl;
        }
        else {
            cout << "Trip time: " << fixed << setprecision(1) << distance / (speed - 30) << " h" << endl;
            cout << "Trip cost with a luggage: " << 0 << '$' << endl;
            cout << "Thanks for the luggage!\n";
        }
    }
    else {
        cout << "Trip time: " << fixed << setprecision(1) << distance / (speed - 30) << " h" << endl;
        cout << "Trip cost: " << fixed << setprecision(1) << (cost - 15) * distance / 10 << '$' << endl;
    }
}

void Cart::getData() {
    char luggage;
    double distance;
    cout << "Enter trip distance: ";
    cin >> distance;
    cout << "Have you got a luggage?(y/n) ";
    cin >> luggage;
    if (luggage == 'y') {
        cout << "Trip time: " << fixed << setprecision(1) << distance / (speed - 20) << " h" << endl;
        cout << "Trip cost with a luggage: " << cost * distance / 10 << '$' << endl;
    }
    else {
        cout << "Trip time: " << fixed << setprecision(1) << distance / (speed - 20) << " h" << endl;
        cout << "Trip cost: " << fixed << setprecision(1) << (cost - 10) * distance / 10 << '$' << endl;
    }
}