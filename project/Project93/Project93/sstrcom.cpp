// sstrcom.cpp
// сравнение строк

#include <iostream>
#include <string>
using namespace std;

// ----- int main() ------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");

	string aName = "Иван";
	string userName;

	cout << "Введите Ваше имя: ";
	cin >> userName;
	if (userName == aName)
		cout << "Привет, Иван\n";
	else if (userName < aName)
		cout << "Выше имя идёт после имени Иван\n";
	else
		cout << "Ваше имя идёт после имени Иван\n";

	int n = userName.compare(0, 2, aName, 0, 2);
	cout << "Первые буква Вашего имени ";
	if (n == 0)
		cout << "совпадают ";
	else if (n < 0)
		cout << "идут до ";
	else
		cout << "идут после ";

	cout << aName.substr(0, 2) << endl;
	return 0;
}