// prime.cpp
// применение цикла if для определения простых чисел

#include <iostream>
using namespace std;
#include <process.h>		// для exit()

int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned long n, j;
	cout << "Введите число: ";
	cin >> n;						// ввод проверяемого числа
	for (j = 2; j <= n / 2; j++)	// деление на целые числа
	{
		if (n % j == 0)				// начиная с 2, если остаток
		{
			cout << "Число не простое: делится на " << j << endl;
			exit(0);
		}
	}
	cout << "Число является простым\n";
	return 0;
}