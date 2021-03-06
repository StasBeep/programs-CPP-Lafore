// cubelist.cpp
// Программа возводит в куб числа от 1 до 10 и печатает результаты в двух столбцах
// подсчёт кубов целых чисел от 1 до 10

#include <iostream>
#include <iomanip>		// для setw
using namespace std;

int main()
{
	int numb;			// счётчик цикла
	for (numb = 1; numb <= 10; numb++)		// цикл от 1 до 10
	{
		cout << setw(4) << numb;			// вывод первого столбца
		int cube = numb * numb * numb;		// вычисление куба
		cout << setw(6) << cube << endl;	// вывод второго столбца
	}
	return 0;
}