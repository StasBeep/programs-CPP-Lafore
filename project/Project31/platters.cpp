// platters.cpp
// применение ветления switch

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int speed;			// скорость вращения грампластинки
	cout << "\nВведите число 33,45 или 78: ";
	cin >> speed;		// ввод скорости пользователем
	switch (speed)		// действия зависящие от выбора скорости
	{
		case 33:			// если пользователь ввёл 33
			cout << "Долгоиграющий формат\n";
			break;

		case 45:			// если пользователь ввёл 45
			cout << "Формат сингла\n";
			break;

		case 78:			// если пользователь ввёл 78
			cout << "Устаревший формат\n";
			break;
	}
	return 0;
}