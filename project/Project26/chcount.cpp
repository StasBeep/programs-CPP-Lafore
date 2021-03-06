// chcount.cpp
// подсчёт числа слов и символов в строке

#include <iostream>
using namespace std;
#include <conio.h>			// для getche()

int main()
{
	setlocale(LC_ALL, "Russian");
	int chcount = 0;			// число непробельных символов
	int wdcount = 1;			// число пробелов
	char ch = 'a';				// ch должна иметь определённое значение
	cout << "Введите строку: ";
	while (ch != '\r')			// цикл, пока не будет нажата клавиша Enter
	{
		ch = _getche();			// считывание символа
		if (ch == ' ')			// если символ является пробелом,
			wdcount++;			// то инкрементируем число слов
		else					// в противном случае
			chcount++;			// инкриментируем число символов
	}							// вывод результата на экран
	cout << "\nСлов: " << wdcount << endl;
	cout << "Букв: " << (chcount - 1) << endl;
	return 0;
}