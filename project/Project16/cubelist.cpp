// cubelist.cpp
// ��������� �������� � ��� ����� �� 1 �� 10 � �������� ���������� � ���� ��������
// ������� ����� ����� ����� �� 1 �� 10

#include <iostream>
#include <iomanip>		// ��� setw
using namespace std;

int main()
{
	int numb;			// ������� �����
	for (numb = 1; numb <= 10; numb++)		// ���� �� 1 �� 10
	{
		cout << setw(4) << numb;			// ����� ������� �������
		int cube = numb * numb * numb;		// ���������� ����
		cout << setw(6) << cube << endl;	// ����� ������� �������
	}
	return 0;
}