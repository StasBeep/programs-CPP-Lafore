// fahren.cpp
// ���� ���������� ����� ������� � �������� ����� ����
// ��������� ������ ������������ ������ �������� ����������� �� ����������,
// ����� ��������� ��� �������� � ����� ������� � ���������� ��������� �� ������.
// "� ��������� ������������ ���������� ������ ����" (���������� cin � \n)

#include <iostream>
using namespace std;

int main()
{
	int ftemp;		// ����������� �� ����������
	cout << "Enter Farengeit temperatyre: ";
	cin >> ftemp;
	int ctemp = (ftemp - 32) * 5 / 9;		// ����������� � ��������
	int ktemp = ctemp + 273;				// ����������� � ���������
	cout << "Temperatyre to Chelsia = " << ctemp << endl;	// ����� ���������� � ��������
	cout << "Temperatyre to Kelvin = " << ktemp << endl;	// ����� ���������� � ���������
	return 0;
}