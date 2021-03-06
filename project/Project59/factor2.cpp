// factor2.cpp
// подсчёт факториала числа с помощю рекурсии

#include <iostream>
using namespace std;

unsigned long factfunc(unsigned long);		// прототип

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;			// число, вводимое пользователем
	unsigned long fact;			// факториал этого числа
	cout << "Введите целое число: ";
	cin >> n;
	fact = factfunc(n);
	cout << "Факториал числа " << n << " равен " << fact << endl;
	return 0;
}

// ----- функция factfunc() ------------------------------------------
// рекурсивно подсчитывает факториал числа
unsigned long factfunc(unsigned long n)
{
	if (n > 1)
		return n * factfunc(n - 1);		// вызов самой себя
	else
		return 1;
}