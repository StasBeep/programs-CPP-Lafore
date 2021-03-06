// ref.cpp
// передача ссылочного механизма передачи аргументов

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	void intfrac(float, float&, float&);			// прототип
	float number, intpart, fracpart;
	do
	{
		cout << "\nВведите вещественное число: ";
		cin >> number;			// ввод числа пользователей
		intfrac(number, intpart, fracpart);		// нахождение целой и дробной части
		cout << "Целая часть равна " << intpart	// вывод результатов
			 << " дробная часть равна " << fracpart << endl;
	} while (number != 0.0);			// выход из цикла, если введён 0
	return 0;
}

// ---------------------------------------------------------------------------------
// вычисляет целую и дробную часть вещественного числа
void intfrac(float n, float& intp, float& fracp)
{
	long temp = static_cast<long>(n);		// преобразование к типу long
	intp = static_cast<float>(temp);		// и обратно во float
	fracp = n - intp;						// вычитаем целую часть
}