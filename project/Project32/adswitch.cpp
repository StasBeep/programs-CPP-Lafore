// adswitch.cpp
// приключенческая игра с использованием switch

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	char dir = 'a';
	int x = 10, y = 10;
	while (dir != '\r')
	{
		cout << "\nВаши координаты: " << x << " , " << y;
		cout << "\nВыберите направления (n,s,e,w): ";
		dir = _getche();			// Ввод переменной
		switch (dir)				// switch с переменной dir
		{
		case 'n':					// движение на север
			y--;
			break;

		case 's':					// движение на юг
			y++;
			break;

		case 'e':					// движение на восток
			x++;
			break;

		case 'w':					// движение на запад
			x--;
			break;

		case '\r':					// выход из программы (на Enter)
			cout << "Выход...\n";
			break;

		default:					// нажатие на друих клавиш
			cout << "\nПопробуйте ещё\n";
		}			// конец switch
	}				// конец while
	return 0;
}					// конец main()