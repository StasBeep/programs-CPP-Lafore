// divdo.cpp
// применение цикла do
// ¬водим два числа: делимое и делитель, а затем производит целочисленное деление
// с использованием операций / и % и выводит полученное частное и остаток

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long dividend, divisor;
	char ch;
	do              // начало цикла do
	{				// действи€
		cout << "¬ведите делимое: ";
		cin >> dividend;
		cout << "¬ведите делитель: ";
		cin >> divisor;
		cout << "„астное равно: " << dividend / divisor;
		cout << ", остаток равен " << dividend % divisor;
		cout << "\n≈щЄ раз? (y/n): ";
		cin >> ch;
	} while (ch != 'n');	// условие цикла
	return 0;
}