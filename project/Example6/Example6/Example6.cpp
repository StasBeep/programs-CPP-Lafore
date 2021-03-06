// Example6.cpp
// Программа для всех упражнений

#include <iostream>
#include <cstring>			// для strlen
using namespace std;

// ----- int main() -------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "МЕНЮ" << endl;
	cout << "Первое упражнение" << endl;
	cout << "----------------------------------" << endl;

	cout << "Введите упражнение: ";
	int key;		// ключ для меню
	cin >> key;

	// меню
	cout << "----------------------------------" << endl;
	// Упражнение 1
	if (key == 1)
	{
		// Упражнение 1:


		cout << "Упражнение 1\n" << endl;

		void reversit(char[]);		// прототип
		const int MAX = 80;			// размер массива
		char str[MAX];				// строка
		cout << "Введите строку: ";	// получить строку от
		cin.get(str, MAX);
		reversit(str);				// перевернуть строку
		cout << "Перевёрнутая строка: "; // вывести её
		cout << str << endl;
	}

	return 0;
}

// ----- reversit() -------------------------------------------
// функция переворацивающая строку, переданную в аргументе
void reversit(char s[])
{
	int len = strlen(s);		// найти длину строки
	for (int i = 0; i < len / 2; i++)	// поменять всё
	{									// символы из первой 
										// половины
		char temp = s[i];				// на символы
		s[i] = s[len - i - 1];			// из второй половины
		s[len - i - 1] = temp;
	}
}