// condi.cpp
// ������ ������� 'x' ������ 8 �������
// � ����������� �������� ��������

#include <iostream>
using namespace std;

int main()
{
	for (int j = 0; j < 80; j++)		// ��� ������ �������
	{
		char ch = (j % 8) ? ' ' : 'x';	// ����� ������� ������ 8
		cout << ch;						// � ��������� ������ ch �������� ������
	}
	return 0;
}