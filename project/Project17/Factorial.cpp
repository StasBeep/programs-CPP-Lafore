// factor.cpp
// ��������� ����������� �������� � ������������, � ����� ������������ ���������
// ����� �����
// ������� ���������� ����� � ������� ����� for

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int numb;
	unsigned long fact = 1;				// ��� long ��� ����������
	cout << "������� ����� �����: ";
	cin >> numb;						// ���� �����
	for (int j = numb; j > 0; j--)		// ��������� 1 �
		fact *= j;						// numb, numb-1, ..., 2,1
	cout << "��������� ����� ����� " << fact << endl;
	return 0;
}