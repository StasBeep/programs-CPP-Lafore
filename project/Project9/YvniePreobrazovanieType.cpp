// cast.cpp
// ��������� ������ �������� ������ � ��������� � �������������� ����������
// ������ �� ��������� � ������������ �����������

#include <iostream>
using namespace std;

int main()
{
	int intVar = 1500000000;			// 1 500 000 000
	intVar = (intVar * 10) / 10;		// ������� ������� ���������
	cout << "Variable intVar equally " << intVar << endl;	// �������� ���������
	intVar = 1500000000;				// ���������� � ���� double
	intVar = (static_cast<double>(intVar) * 10) / 10;
	cout << "Variable intVar equally (Preobrazovanie type) " << intVar << endl;
															// ������ ���������
	return 0;
}