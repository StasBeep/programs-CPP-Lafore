// divdo.cpp
// применение оператора continue

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long dividend, divisor;
	char ch;
	do 
	{
		cout << "Введите делимое: ";
		cin >> dividend;
		cout << "Введите делитель: ";
		cin >> divisor;

		if (divisor == 0)		// при попытке 
		{						// деления на ноль
			cout << "Некорректный делитель!\n";		// вывод сообщения
			continue;					// возврат в начало цикла
		}
		cout << "Частное равно: " << dividend / divisor;
		cout << ", остаток равен: " << dividend % divisor;
		cout << "\nЕщё раз? (y\\n); ";
		cin >> ch;
	} while (ch != 'n');
	return 0;
}