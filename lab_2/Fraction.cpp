#include "Fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction() : numerator(0), denominator(1) { reduce(); }

Fraction::Fraction(int n) : numerator(n), denominator(1) { reduce(); }

Fraction::Fraction(int n, int d) : numerator(n), denominator(d) { reduce(); }

Fraction::~Fraction() {}

void Fraction::set_numerator(int n) { numerator = n; };
void Fraction::set_denominator(int d) { denominator = d; };
int Fraction::get_numerator() { return numerator; };
int Fraction::get_denominator() { return denominator; };
Fraction Fraction::operator+(Fraction f) {
	if (denominator == f.denominator) return Fraction(numerator + f.numerator, denominator);
	else return Fraction(numerator * f.denominator + f.numerator * denominator, denominator * f.denominator);
}
Fraction Fraction::operator-(Fraction f) {
	if (denominator == f.denominator) return Fraction(numerator - f.numerator, denominator);
	else return Fraction(numerator * f.denominator - f.numerator * denominator, denominator * f.denominator);
}
Fraction Fraction::operator+() { return Fraction(numerator, denominator); }
Fraction Fraction::operator-() { return Fraction(-numerator, denominator); }
Fraction Fraction::operator*(Fraction f) { return Fraction(numerator * f.numerator, denominator * f.denominator); }
Fraction Fraction::operator/(Fraction f) { return Fraction(numerator * f.denominator, denominator * f.numerator); };
Fraction& Fraction::operator=(const Fraction f) { 
	if (this == &f) return *this;
	else {
		numerator = f.numerator;
		denominator = f.denominator;
	}
	return *this;
};
bool Fraction::operator==(const Fraction f) {
	if (1.0 * numerator / denominator == 1.0 * f.numerator / f.denominator) return true;
	return false;
};
bool Fraction::operator>(const Fraction f) {
	if (1.0 * numerator / denominator > 1.0 * f.numerator / f.denominator) return true;
	return false;
};
bool Fraction::operator>=(const Fraction f) {
	if (1.0 * numerator / denominator >= 1.0 * f.numerator / f.denominator) return true;
	return false;
};
bool Fraction::operator<(const Fraction f) {
	if (1.0 * numerator / denominator < 1.0 * f.numerator / f.denominator) return true;
	return false;
};
bool Fraction::operator<=(const Fraction f) {
	if (1.0 * numerator / denominator <= 1.0 * f.numerator / f.denominator) return true;
	return false;
};
bool operator!(const Fraction f) {
	if (!f.numerator) return true;
	return false;
};
bool Fraction::operator!=(const Fraction f) {
	if (1.0 * numerator / denominator == 1.0 * f.numerator / f.denominator) return false;
	return true;
};


std::ostream& operator<< (std::ostream& out, const Fraction& f)
{
	
	if (!f.denominator && f.numerator > 0) out << "Infinity";
	else if (!f.denominator && f.numerator < 0) out << "-Infinity";
	else if (!f.numerator && !f.denominator) out << "unknown";
	else if (!f.numerator && f.denominator) out << 0;
	else if (f.denominator == 1 || f.denominator == -1) out << f.numerator * f.denominator;
	else if (f.denominator < 0) out << -f.numerator << '/' << -f.denominator;
	else out << f.numerator << '/' << f.denominator;

	return out;
}

std::istream& operator>> (std::istream& in, Fraction& f)
{
	cout << "Enter the numerator:\n";
	in >> f.numerator;
	cout << "Enter the denominator:\n";
	in >> f.denominator;

	return in;
}