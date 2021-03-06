// ifelse.cpp
// применение конструкции if...else

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "\n¬ведите число: ";
	cin >> x;
	if (x > 100)
		cout << "Ёто число больше, чем 100\n";
	else
		cout << "Ёто число не больше, чем 100\n";
	return 0;
}