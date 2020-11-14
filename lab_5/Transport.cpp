#include "Transport.h"
#include <iostream>
#include <iomanip>

using namespace std;

//	Auto

void Auto::showTime() {
	cout << "Time: " << fixed << setprecision(2) << time << endl;
};

void Auto::showCost() {
	cout << "Cost: " << cost << endl;
	cout << "Cost without luggage: " << fixed << setprecision(2) << cost * 0.8 << endl;
};

void Auto::setTime(double time_) { time = time_; };

void Auto::setCost(int cost_) { cost = cost_; };

double Auto::getTime() { return time; };

int Auto::getCost() { return cost; };

std::ostream& operator<< (std::ostream& out, Auto* a) {
	out << "Time: " << fixed << setprecision(2) << a->getTime() << endl
		<< "Cost: " << a->getCost() << endl
		<< "Cost without luggage: " << fixed << setprecision(2) << a->getCost() * 0.8 << endl;
		
	return out;
}

std::istream& operator>> (std::istream& in, Auto* a) {
	cout << "Enter the time(HH.MM):\n";
	in >> a->time;
	cout << "Enter the cost:\n";
	in >> a->cost;

	return in;
}



//	Bicycle

void Bicycle::showTime() {
	cout << "Time: " << fixed << setprecision(2) << time << endl;
};

void Bicycle::showCost() {
	cout << "Cost: " << cost << endl;
};

void Bicycle::setTime(double time_) { time = time_; };

void Bicycle::setCost(int cost_) { cost = cost_; };

double Bicycle::getTime() { return time; };

int Bicycle::getCost() { return cost; };

std::ostream& operator<< (std::ostream& out, Bicycle* b) {
	out << "Time: " << fixed << setprecision(2) << b->getTime() << endl
		<< "Cost: " << b->getCost() << endl;

	return out;
}

std::istream& operator>> (std::istream& in, Bicycle* b) {
	cout << "Enter the time(HH.MM):\n";
	in >> b->time;
	cout << "Enter the cost:\n";
	in >> b->cost;

	return in;
}



//	Cart

void Cart::showTime() {
	cout << "Time: " << fixed << setprecision(2) << time << endl;
};

void Cart::showCost() {
	cout << "Cost: " << cost << endl;
	cout << "Cost without luggage: " << fixed << setprecision(2) << cost * 0.6 << endl;
};

void Cart::setTime(double time_) { time = time_; };

void Cart::setCost(int cost_) { cost = cost_; };

double Cart::getTime() { return time; };

int Cart::getCost() { return cost; };

std::ostream& operator<< (std::ostream& out, Cart* c) {
	out << "Time: " << fixed << setprecision(2) << c->getTime() << endl
		<< "Cost: " << c->getCost() << endl
		<< "Cost without luggage: " << fixed << setprecision(2) << c->getCost() * 0.6 << endl;

	return out;
}

std::istream& operator>> (std::istream& in, Cart* c) {
	cout << "Enter the time(HH.MM):\n";
	in >> c->time;
	cout << "Enter the cost:\n";
	in >> c->cost;

	return in;
}
