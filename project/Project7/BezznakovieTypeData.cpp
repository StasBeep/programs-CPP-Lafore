// signtest.cpp
// ���� � ���� ��������, ������ 1 500 000 000, � ���������� signedVar ���� int
// � unsignVar ���� unsigned int

// ������ �� ��������� / ������������ �����������

#include <iostream>
using namespace std;

int main()
{
	int signedVar = 1500000000;				// �������� ����������
	unsigned int unsignVar = 1500000000;	// ����������� ����������
	signedVar = (signedVar * 2) / 3;		// ����� �� ������� ���������
	unsignVar = (unsignVar * 2) / 3;		// ���������� ������ ���������
	cout << "The signed variable is equal to " << signedVar << endl;		// ����� ����������� ����������
	cout << "An unsigned variable is equal to " << unsignVar << endl;		// ����� ������������� ����������
	return 0;
}