// retref.cpp
// ����������� �������� �� ������

#include <iostream>
using namespace std;

int x;						// ���������� ����������

////////////////////////////////////////////////////////////////////////
int& setx();				// �������� �������

////////////////////////////////////////////////////////////////////////
int main()
{							// ������������ �������� x ���
	setx() = 92;			// ������ ������ ������� �����
	cout << "x = " << x << endl;	// ����� ������ �������� �
	return 0;
} 

// ----- ������� int& setx() -------------------------------------------
int& setx()
{
	return x;			// ���������� ��������, ������� ����� ��������
}