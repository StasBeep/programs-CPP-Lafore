// relat.cpp
// Использование операций сравнения применительно к целым переменными константам
// применение операций отношения

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int numb;
	cout << "Введите число: ";
	cin >> numb;
	cout << "numb < 10 равно " << (numb < 10) << endl;
	cout << "numb > 10 равно " << (numb > 10) << endl;
	cout << "numb == 10 равно " << (numb == 10) << endl;
	return 0;
}