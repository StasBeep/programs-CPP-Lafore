// chcnt2.cpp
// ������� ����� ���� � �������� � ������
// ��������� ����������� �� ���� ������ �� ��������� project26 � �������������
// ������ �������, ���������� ������������ � ����������� ��������.
// ����������� ��������� ���������

#include <iostream>
using namespace std;
#include <conio.h>				// ��� _getche()

int main()
{
	setlocale(LC_ALL, "Russian");
	int chcount = 0;
	int wdcount = 1;		// ������ ����� ����� �������
	char ch;
	while ((ch = _getche())  != '\r');	// ����, ���� �� ������ ������� Enter
	{
		if (ch == ' ')				// ���� ����� ������
			wdcount++;				// ���������������� ������� ����
		else						// �����
			chcount++;				// ���������������� ����� ��������
	}								// ����� ����������
	cout << "\n����: " << wdcount << endl;
	cout << "����: " << chcount << endl;
	return 0;
}