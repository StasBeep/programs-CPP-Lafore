// stringin.cpp
// ������� ���������� ������

#include <iostream>
using namespace std;

///// int main() //////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	const int MAX = 80;		// ������������ ������ ������
	char str[MAX];			// ���� ������
	cout << "������� ������: ";
	cin >> str;
	cout << "�� �����: " << str << endl; // ����� ����������
	return 0;
}