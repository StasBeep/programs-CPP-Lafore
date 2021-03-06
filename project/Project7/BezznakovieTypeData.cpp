// signtest.cpp
// Одно и тоже значение, равное 1 500 000 000, в переменных signedVar типа int
// и unsignVar типа unsigned int

// работа со знаковыми / беззнаковыми переменными

#include <iostream>
using namespace std;

int main()
{
	int signedVar = 1500000000;				// знаковая переменная
	unsigned int unsignVar = 1500000000;	// беззнаковая переменная
	signedVar = (signedVar * 2) / 3;		// выход за границы диапазона
	unsignVar = (unsignVar * 2) / 3;		// вычисление внитри диапазона
	cout << "The signed variable is equal to " << signedVar << endl;		// вывод правильного результата
	cout << "An unsigned variable is equal to " << unsignVar << endl;		// вывод некорректного результата
	return 0;
}