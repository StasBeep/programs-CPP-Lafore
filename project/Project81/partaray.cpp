// partaray.cpp
// массив из структур

#include <iostream>
using namespace std;

const int SIZE = 4;

///// struct part /////////////////////////////////////////////////////
struct part
{
	int mnumber;
	int partnumber;
	float cost;
};

///// int main() //////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	part apart[SIZE];

	for (n = 0; n < SIZE; n++)
	{
		cout << endl;
		cout << "Введите номер модели: ";
		cout << apart[n].mnumber;
		cout << "Введите номер части: ";
		cin >> apart[n].partnumber;
		cout << "Введите стоимость: ";
		cin >> apart[n].cost;
	}
	cout << endl;
	for (n = 0; n < SIZE; n++)
	{
		cout << "Модель " << apart[n].mnumber;
		cout << "Часть " << apart[n].partnumber;
		cout << "Стоимость " << apart[n].cost << endl;
	}
	return 0;
}