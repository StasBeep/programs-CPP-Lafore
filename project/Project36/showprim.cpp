// showprim.cpp
// ���������� ������������� ������� �����

#include <iostream>
using namespace std;
#include <conio.h>			// ��� _getche()

int main()
{
	const unsigned char WHITE = 219;	// ����� ���� ��� ������� �����
	const unsigned char GRAY = 176;		// ����� ���� ��� ��������� �����
	unsigned char ch;
	// �������� ��� ������ ������ � ������
	for (int count = 0; count < 80 * 25 - 1; count++)
	{
		ch = WHITE;				// ������������, ��� ����� �������
		for (int j = 2; j < count; j++)		// ����� �� ������ �����, ������ 2
			if (count % j == 0)				// ���� ������� ����� 0
			{
				ch = GRAY;					// �� ����� �� �������
				break;						// ����� �� ����������� �����
			}
		cout << ch;						// ����� ������� �� �����
	}
	_getch();							// �������� ����������� �����������
	return 0;
}