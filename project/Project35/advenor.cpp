// advenor.cpp
// применение операции логического ИЛИ

#include <iostream>
using namespace std;
#include <process.h>		// для exit()
#include <conio.h>			// для _getche()

int main()
{
	setlocale(LC_ALL, "Russian");
	char dir = 'a';
	int x = 10, y = 10;
	while (dir != '\r')				// выход при нажатии Enter
	{
		cout << "\nВаши координаты: " << x << " , " << y;
		if (x < 5 || x>15)				// если х меньше 5 или больше 15
			cout << "\nОсторожно - драконы!";
		cout << "\nВыберете направление (n,s,e,w): ";
		dir = _getche();				// выбор направления
		switch (dir)					// обновление координат
		{
		case 'n':
			y--;
			break;
		case 's':
			y++;
			break;
		case 'e':
			x++;
			break;
		case 'w':
			x--;
			break;
		}					// конец switch
	}						// конец while
	return 0;
}				// конец main()