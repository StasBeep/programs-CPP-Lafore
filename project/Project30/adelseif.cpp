// adelseif.cpp
// приключенческая игра с применением else...if

#include <iostream>
using namespace std;
#include <conio.h>				// для _getche()

int main()
{
	setlocale(LC_ALL, "Russian");
	char dir = 'a';
	int x = 10, y = 10;
	cout << "Нажмите Enter для выхода... \n";
	while (dir != '\r')
	{
		cout << "\nВаши координаты: " << x << " , " << y;
		cout << "\nВыберите направления (n,s,e,w): ";
		dir = _getche();		// ввод символа
		if (dir == 'n')			// движение на север
			y--;
		else if (dir == 's')	// движение на юг
			y++;
		else if (dir == 'e')	// движение на запад
			x++;
		else if (dir == 'w')	// движение на запад
			x--;
	}
	return 0;
}