// relat.cpp
// ������������� �������� ��������� ������������� � ����� ����������� ����������
// ���������� �������� ���������

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int numb;
	cout << "������� �����: ";
	cin >> numb;
	cout << "numb < 10 ����� " << (numb < 10) << endl;
	cout << "numb > 10 ����� " << (numb > 10) << endl;
	cout << "numb == 10 ����� " << (numb == 10) << endl;
	return 0;
}