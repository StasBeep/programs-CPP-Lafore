// chcnt2.cpp
// подсчёт числа слов и символов в строке
// программа сокращается на отду строку от программы project26 и демонстрирует
// важные аспекты, касающиеся присваивания и старшинства операций.
// Конструкция программы необычная

#include <iostream>
using namespace std;
#include <conio.h>				// для _getche()

int main()
{
	setlocale(LC_ALL, "Russian");
	int chcount = 0;
	int wdcount = 1;		// пробел между двумя словами
	char ch;
	while ((ch = _getche())  != '\r');	// цикл, пока не нажата клавиша Enter
	{
		if (ch == ' ')				// если введёт пробел
			wdcount++;				// инкрементировать счётчик слов
		else						// иначе
			chcount++;				// инкрементировать число символов
	}								// вывод результата
	cout << "\nСлов: " << wdcount << endl;
	cout << "Букв: " << chcount << endl;
	return 0;
}