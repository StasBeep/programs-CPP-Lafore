// convert.cpp
// демонстрирует механизм возврата значения функцией

#include <iostream>
using namespace std;

float ibstokg(float);			// прототип функции

int main()
{
	setlocale(LC_ALL, "Russian");
	float lbs, kgs;
	cout << "\nВведите вес в фунтах: ";
	cin >> lbs;
	kgs = ibstokg(lbs);
	cout << "Вес в килограммах равен: " << kgs << endl;
	return 0;
}

// -------------------------------------------------------------
// функция ibstokg()
// переводит фунты в килограммы
float ibstokg(float pounds)
{
	float kilograms = 0.453592 * pounds;
	return kilograms;
}