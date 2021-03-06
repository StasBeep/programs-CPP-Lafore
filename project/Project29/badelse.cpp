// badelse.cpp
// неправильное сопоставление else и if во вложенных ветвлениях

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите числа a, b и с: \n";
	cin >> a >> b >> c;
	if (a == b)
		if (b == c)
			cout << "a, b, c равны\n";
		else
			cout << "a и b не равны\n";
	return 0;
}