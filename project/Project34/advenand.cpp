// advenand.cpp
// применение логического И

#include <iostream>
using namespace std;
#include <process.h>		// для exit()
#include <conio.h>			// для _getche()

int main()
{
	setlocale(LC_ALL, "Russian");
	char dir = 'a';
	int x = 10, y = 10;
	while (dir != '\r')
	{
		cout << "\nВаши координаты: " << x << " , " << y;
		cout << "\nВыберите ваше направление (n,s,e,w): ";
		dir = _getche();			// ввод направления
		switch (dir)
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
		}
		if (x == 7 && y == 11)			// если х равно 7 и у равно 11
		{
			cout << "\nВы нашли сокровище!\n";
			exit(0);					// выход из программы
		}
	}		// выход из switch
	return 0;
}			// конец main()