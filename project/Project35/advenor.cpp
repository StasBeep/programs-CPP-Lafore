// advenor.cpp
// ���������� �������� ����������� ���

#include <iostream>
using namespace std;
#include <process.h>		// ��� exit()
#include <conio.h>			// ��� _getche()

int main()
{
	setlocale(LC_ALL, "Russian");
	char dir = 'a';
	int x = 10, y = 10;
	while (dir != '\r')				// ����� ��� ������� Enter
	{
		cout << "\n���� ����������: " << x << " , " << y;
		if (x < 5 || x>15)				// ���� � ������ 5 ��� ������ 15
			cout << "\n��������� - �������!";
		cout << "\n�������� ����������� (n,s,e,w): ";
		dir = _getche();				// ����� �����������
		switch (dir)					// ���������� ���������
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
		}					// ����� switch
	}						// ����� while
	return 0;
}				// ����� main()