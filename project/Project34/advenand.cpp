// advenand.cpp
// ���������� ����������� �

#include <iostream>
using namespace std;
#include <process.h>		// ��� exit()
#include <conio.h>			// ��� _getche()

int main()
{
	setlocale(LC_ALL, "Russian");
	char dir = 'a';
	int x = 10, y = 10;
	while (dir != '\r')
	{
		cout << "\n���� ����������: " << x << " , " << y;
		cout << "\n�������� ���� ����������� (n,s,e,w): ";
		dir = _getche();			// ���� �����������
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
		if (x == 7 && y == 11)			// ���� � ����� 7 � � ����� 11
		{
			cout << "\n�� ����� ���������!\n";
			exit(0);					// ����� �� ���������
		}
	}		// ����� �� switch
	return 0;
}			// ����� main()