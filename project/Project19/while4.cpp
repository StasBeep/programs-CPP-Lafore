// while4.cpp
// ���������� � �������� ������ ����� �����

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int pow = 1;			// ������ ���������� ����� ����� 1
	int numb = 1;			// 1 � 4-� ������� ����� 1
	while (pow < 10000)			// ����, ���� � �������
		// �� ����� 4 ����
	{
		cout << setw(2) << numb;	// ����� �����
		cout << setw(5) << pow << endl;	// � ��� 4-� �������
		++numb;
		pow = numb * numb * numb * numb; // ���������� 4-� �������
	}
	cout << endl;
	return 0;
}