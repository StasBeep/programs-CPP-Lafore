// chcount.cpp
// ������� ����� ���� � �������� � ������

#include <iostream>
using namespace std;
#include <conio.h>			// ��� getche()

int main()
{
	setlocale(LC_ALL, "Russian");
	int chcount = 0;			// ����� ������������ ��������
	int wdcount = 1;			// ����� ��������
	char ch = 'a';				// ch ������ ����� ����������� ��������
	cout << "������� ������: ";
	while (ch != '\r')			// ����, ���� �� ����� ������ ������� Enter
	{
		ch = _getche();			// ���������� �������
		if (ch == ' ')			// ���� ������ �������� ��������,
			wdcount++;			// �� �������������� ����� ����
		else					// � ��������� ������
			chcount++;			// �������������� ����� ��������
	}							// ����� ���������� �� �����
	cout << "\n����: " << wdcount << endl;
	cout << "����: " << (chcount - 1) << endl;
	return 0;
}