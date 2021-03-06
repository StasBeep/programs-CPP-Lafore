// fahren.cpp
// Ввод информации через консоль и операции между ними
// Программа просит пользователя ввести значение температуры по Фаренгейту,
// затем переволит это значение в шкалу Цельсия и отображает результат на экране.
// "В программе используются переменные целого типа" (применение cin и \n)

#include <iostream>
using namespace std;

int main()
{
	int ftemp;		// Температура по Фаренгейту
	cout << "Enter Farengeit temperatyre: ";
	cin >> ftemp;
	int ctemp = (ftemp - 32) * 5 / 9;		// температура в Цельсиях
	int ktemp = ctemp + 273;				// температура в Кельвинах
	cout << "Temperatyre to Chelsia = " << ctemp << endl;	// вывод результата в Цельсиях
	cout << "Temperatyre to Kelvin = " << ktemp << endl;	// вывод результата в Кельвинах
	return 0;
}