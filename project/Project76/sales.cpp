// sales.cpp
// определение среднего дневного объёма продаж

#include <iostream>
using namespace std;

///// int main() //////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 6;
	double sales[SIZE];
	cout << "Введите объём продаж на каждый из шести дней\n";
	for (int i = 0; i < SIZE; i++)
		cin >> sales[i];
	double total = 0;
	for (int i = 0; i < SIZE; i++)
		total += sales[i];
	double average = total / SIZE;
	cout << "Средний объём: " << average << endl;
	return 0;
}