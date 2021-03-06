// convert2.cpp
// более компактная версия программы convert 
// (см. предыдущую программу)

#include <iostream>
using namespace std;

float lbstokg(float);		// прототип функции

int main()
{
	setlocale(LC_ALL, "Russian");
	float lbs;
	cout << "\nВведите вес в фунтах: ";
	cin >> lbs;
	cout << "Вес в килограммах равен: " << lbstokg(lbs)
		 << endl;
	return 0;
}

// -----------------------------------------------------------
// функция lbstokg()
float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}