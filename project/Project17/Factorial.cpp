// factor.cpp
// Программа запрашивает значение у пользователя, а затем подсчитывает факториал
// этого цисла
// подсчёт факториала числа с помощью цикла for

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int numb;
	unsigned long fact = 1;				// тип long для результата
	cout << "Введите целое число: ";
	cin >> numb;						// ввод числа
	for (int j = numb; j > 0; j--)		// умножение 1 н
		fact *= j;						// numb, numb-1, ..., 2,1
	cout << "Факториал числа равен " << fact << endl;
	return 0;
}