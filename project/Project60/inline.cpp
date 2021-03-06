// inline.cpp
// применение встроеных функций

#include <iostream>
using namespace std;

// функци€ ibstokg()
// переводит фунты в килограммы
inline float ibstokg(float pounds)
{
	return 0.453592 * pounds;
}

// ----------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");
	float ibs;
	cout << "\n¬ведите вес в фунтах: ";
	cin >> ibs;
	cout << " " << ibstokg(ibs) << endl;
	return 0;
}