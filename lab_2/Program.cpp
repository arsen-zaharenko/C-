#include "Fraction.h"
#include <iostream>
#include <ctime>

using namespace std;

void print_array(Fraction**, int);
void problem(Fraction**, int);

int main() {
	srand(time(0));

	int n;
	cout << "Enter number of fractions:\n";
	cin >> n;

	Fraction** array = new Fraction* [n];
	for (int i = 0; i < n; i++)
		array[i] = new Fraction(rand() % 11 - 5, rand() % 11 - 5);

	print_array(array, n);
	problem(array, n);

	for (int i = 0; i < n; i++)
		delete array[i];
	delete[] array;
	
	return 0;
}

void print_array(Fraction** array, int size) {
	for (int i = 0; i < size; i++)
		cout << *array[i] << ' ';
	cout << endl;
}

void problem(Fraction** array, int size) {
	for (int i = 0; i < size; i++)
		if (i == size - 1) cout << *array[i];
		else if (i % 2) cout << *array[i] << ", ";
		else if (!(i % 2) && i < size - 1) cout << *array[i] + *array[i+1] << ", ";
}