// divdo.cpp
// ���������� ����� do
// ������ ��� �����: ������� � ��������, � ����� ���������� ������������� �������
// � �������������� �������� / � % � ������� ���������� ������� � �������

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long dividend, divisor;
	char ch;
	do              // ������ ����� do
	{				// ��������
		cout << "������� �������: ";
		cin >> dividend;
		cout << "������� ��������: ";
		cin >> divisor;
		cout << "������� �����: " << dividend / divisor;
		cout << ", ������� ����� " << dividend % divisor;
		cout << "\n��� ���? (y/n): ";
		cin >> ch;
	} while (ch != 'n');	// ������� �����
	return 0;
}