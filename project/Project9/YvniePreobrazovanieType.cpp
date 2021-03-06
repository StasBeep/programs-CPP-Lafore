// cast.cpp
// Программа решает проблему выхода с диапазона с отрицательными значениями
// работа со знаковыми и беззнаковыми переменными

#include <iostream>
using namespace std;

int main()
{
	int intVar = 1500000000;			// 1 500 000 000
	intVar = (intVar * 10) / 10;		// слишком большой результат
	cout << "Variable intVar equally " << intVar << endl;	// неверный результат
	intVar = 1500000000;				// приведение к типу double
	intVar = (static_cast<double>(intVar) * 10) / 10;
	cout << "Variable intVar equally (Preobrazovanie type) " << intVar << endl;
															// верный результат
	return 0;
}