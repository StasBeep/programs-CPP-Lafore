// sqrt.cpp
// испольщование библиотечной функции sqrt()

#include <iostream>
#include <cmath>		// для sqrt
using namespace std;

int main()
{
	double number, answer;		// аргументы типа double для функции sqrt()
	cout << "Enter number: ";
	cin >> number;				// ввод числа
	answer = sqrt(number);		// извлечение квадратного корня
	cout << "SQRT equally: " << answer << endl;		// вывод результата
	return 0;
}