// dayenum.cpp
// ���������� ������������

#include <iostream>
using namespace std;
// ���������� �������������� ����
enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };
/////////////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	days_of_week day1, day2;		// ����������� ����������,
									// �������� ��� ������
	day1 = Mon;				// ������������� ����������
	day2 = Thu;
	int diff = day2 - day1;		// �������������� ��������
	cout << "������� � ����: " << diff << endl;
	cout << "day1 �������� ������, ��� day2\n";
	return 0;
}