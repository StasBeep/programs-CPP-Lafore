// engldisp.cpp
// передача структурных переменных в функцию

#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////
struct Distance				// длина в английской системе
{
	int feet;
	float inches;
};

/////////////////////////////////////////////////////////////
void engldisp(Distance);		// объ€вление

/////////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	Distance d1, d2;			// объ€вление двух длин
	
	// ввод значений полей d1
	cout << "¬ведите число футов: ";
	cin >> d1.feet;
	cout << "¬ведите число дюймов: ";
	cin >> d1.inches;

	// ввод значений полей d2
	cout << "¬ведите число футов: ";
	cin >> d2.feet;
	cout << "¬ведите число дюймов: ";
	cin >> d2.inches;
	
	cout << "\nd1 = ";
	engldisp(d1);			// вывод значени€ d1
	cout << "\nd2 = ";
	engldisp(d2);			// вывод значени€ d2
	cout << endl;
	return 0;
}

// ----------------------------------------------------------
// функци€ engldisp(), отображающий значени€
// полей структурной переменной типа Distance
void engldisp(Distance dd)		// параметр dd типа Distance
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}