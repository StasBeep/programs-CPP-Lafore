// adswitch.cpp
// ��������������� ���� � �������������� switch

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
		cout << "\n���� ����������: " << x << " , " << y;
		cout << "\n�������� ����������� (n,s,e,w): ";
		dir = _getche();			// ���� ����������
		switch (dir)				// switch � ���������� dir
		{
		case 'n':					// �������� �� �����
			y--;
			break;

		case 's':					// �������� �� ��
			y++;
			break;

		case 'e':					// �������� �� ������
			x++;
			break;

		case 'w':					// �������� �� �����
			x--;
			break;

		case '\r':					// ����� �� ��������� (�� Enter)
			cout << "�����...\n";
			break;

		default:					// ������� �� ����� ������
			cout << "\n���������� ���\n";
		}			// ����� switch
	}				// ����� while
	return 0;
}					// ����� main()