// ifdemo.cpp
// ���������� ��������� if

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "������� �����: ";
	cin >> x;
	if (x > 100)
		cout << "��� ����� ������, ��� 100\n";
	return 0;
}