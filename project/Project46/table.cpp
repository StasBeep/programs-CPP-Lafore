// table.cpp
// demonstrates sin=mple function

#include <iostream>
using namespace std;
void starline();		// объявление функции (прототип)

int main()
{
	setlocale(LC_ALL, "Russian");
	starline();		// вызов функции
	cout << "Тип данных Диапазон" << endl;
	starline();		// вызов функции
	cout << "сhar -128...127" << endl
		<< "short -32.768...32.767" << endl
		<< "int Системно-зависимый" << endl
		<< "long -2.147.483.648...2.147.483.647" << endl;
	starline();		// вызов функции
	return 0;
}

// -----------------------------------------------------------
// определение функции starline()
void starline()				// заголовок функции
{
	// тело функции
	for (int j = 0; j < 45; j++)
		cout << '*';
		cout << endl;
}