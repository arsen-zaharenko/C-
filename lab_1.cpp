#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;
// 9 Вариант
class Bus {
	string name;
	string number;
	int route;
	string mark;
	int exploitation;
	int mileage;

	// SET	
	void set_Name(string);
	void set_Number(string);
	void set_Route(int);
	void set_Mark(string);
	void set_Exploitation(int);
	void set_Mileage(int);

public:
	Bus();
	~Bus();
	void show();

	// GET
	string get_Name();
	string get_Number();
	int get_Route();
	string get_Mark();
	int get_Exploitation();
	int get_Mileage();
};

int main() {
	srand(time(0));
	Bus** array = new Bus*[100];
	
	for (int i = 0; i < 100; i++)
		array[i] = new Bus;
	// Вывод списка автобусов
	/*
	cout << left << setw(20) << "Name" << ' '
		<< left << setw(10) << "Number" << ' '
		<< left << setw(8) << "Route" << ' '
		<< left << setw(10) << "Mark" << ' '
		<< left << setw(10) << "Year" << ' ' << left << setw(10)
		<< left << setw(10) << "Mileage" << endl;
	for (int i = 0; i < 100; i++)
		array[i]->show();
	*/

	// a) Например, список автобусов по маршруту номер 5
	/*
	const int ROUTE = 5;
	cout << left << setw(20) << "Name" << ' '
		<< left << setw(10) << "Number" << ' '
		<< left << setw(8) << "Route" << ' '
		<< left << setw(10) << "Mark" << ' '
		<< left << setw(10) << "Year" << ' ' << left << setw(10)
		<< left << setw(10) << "Mileage" << endl;
	for (int i = 0; i < 100; i++)
		if (array[i]->get_Route() == ROUTE) array[i]->show();
	*/

	// б)
	/*
	cout << left << setw(20) << "Name" << ' '
		<< left << setw(10) << "Number" << ' '
		<< left << setw(8) << "Route" << ' '
		<< left << setw(10) << "Mark" << ' '
		<< left << setw(10) << "Year" << ' ' << left << setw(10)
		<< left << setw(10) << "Mileage" << endl;
	for (int i = 0; i < 100; i++)
		if (2020 - array[i]->get_Exploitation() > 10) array[i]->show();
	*/

	// в)
	/*
	cout << left << setw(20) << "Name" << ' '
		<< left << setw(10) << "Number" << ' '
		<< left << setw(8) << "Route" << ' '
		<< left << setw(10) << "Mark" << ' '
		<< left << setw(10) << "Year" << ' ' << left << setw(10)
		<< left << setw(10) << "Mileage" << endl;
	for (int i = 0; i < 100; i++)
		if (array[i]->get_Mileage() > 10000) array[i]->show();
	*/

	for (int i = 0; i < 100; i++)
		delete array[i];
	delete[] array;

	return 0;
}

Bus::Bus() {
	string n = "";
	string num = "";
	int r;
	string m = "";
	int e;
	int mi;
	
	// Ввод руками
	/*
	cout << "Enter driver name:\n";
	getline(cin, n);
	cout << "Enter bus number:\n";
	cin >> num;
	cout << "Enter route number:\n";
	cin >> r;
	cout << "Enter bus mark:\n";
	cin >> m;
	cout << "Enter year of start of exploitation:\n";
	cin >> e;
	cout << "Enter mileage:\n";
	cin >> mi;
	*/

	// Ввод для примера
	// Random name
	for (int i = 0; i < rand() % 10 + 5; i++)
		n += char(rand() % ('z' - 'a' + 1) + int('a'));
	
	// Random bus number
	for (int i = 0; i < 4; i++) 
		num += char(rand() % ('9' - '0' + 1) + int('0'));
	for (int i = 0; i < 2; i++) 
		num += char(rand() % ('z' - 'a' + 1) + int('a'));

	// Random mark
	for (int i = 0; i < rand() % 5 + 3; i++)
		m += char(rand() % ('z' - 'a' + 1) + int('a'));

	// Random route number
	r = rand() % 10 + 1;

	// Random year
	e = 1980 + rand() % 40;

	// Random mileage
	mi = rand() % 20000;

	set_Name(n);
	set_Number(num);
	set_Route(r);
	set_Mark(m);
	set_Exploitation(e);
	set_Mileage(mi);
}

Bus::~Bus() {}

// SET
void Bus::set_Name(string n) { name = n; };
void Bus::set_Number(string num) { number = num; };
void Bus::set_Route(int r) { route = r; };
void Bus::set_Mark(string m) { mark = m; };
void Bus::set_Exploitation(int e) { exploitation = e; };
void Bus::set_Mileage(int mi) { mileage = mi; };

// GET
string Bus::get_Name() { return name; };
string Bus::get_Number() { return number; };
int Bus::get_Route() { return route; };
string Bus::get_Mark() { return mark; };
int Bus::get_Exploitation() { return exploitation; };
int Bus::get_Mileage() { return mileage; };

void Bus::show() {
	cout << left << setw(20) << name << ' ' 
		 << left << setw(10) << number << ' '
		 << left << setw(8) << route << ' '
		 << left << setw(10) << mark << ' '
		 << left << setw(10) << exploitation << ' ' << left << setw(10)
		 << left << setw(10) << mileage <<  endl;
}