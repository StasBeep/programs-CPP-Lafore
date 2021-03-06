// stringin.cpp
// простая переменная строка

#include <iostream>
using namespace std;

///// int main() //////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	const int MAX = 80;		// максимальный размер строки
	char str[MAX];			// сама строка
	cout << "Введите строку: ";
	cin >> str;
	cout << "Вы ввели: " << str << endl; // показ результата
	return 0;
}