#include <iostream>

class Fraction {
	int numerator;
	int denominator;
	void set_numerator(int);
	void set_denominator(int);
	static int nod(int a, int b)
	{
		return b == 0 ? a : nod(b, a % b);
	}
	void reduce() {
		int nod = Fraction::nod(numerator, denominator);
		numerator /= nod;
		denominator /= nod;
	}
public:
	Fraction();
	Fraction(int);
	Fraction(int, int);
	~Fraction();
	int get_numerator();
	int get_denominator();
	Fraction operator+(Fraction);
	Fraction operator-(Fraction);
	Fraction operator+();
	Fraction operator-();
	Fraction operator*(Fraction);
	Fraction operator/(Fraction);
	Fraction& operator=(const Fraction);
	bool operator==(const Fraction);
	bool operator>(const Fraction);
	bool operator>=(const Fraction);
	bool operator<(const Fraction);
	bool operator<=(const Fraction);
	friend bool operator!(const Fraction);
	bool operator!=(const Fraction);
	friend std::ostream& operator<< (std::ostream& out, const Fraction& point);
	friend std::istream& operator>> (std::istream& in, Fraction& point);
};
