// convert2.cpp
// ����� ���������� ������ ��������� convert 
// (��. ���������� ���������)

#include <iostream>
using namespace std;

float lbstokg(float);		// �������� �������

int main()
{
	setlocale(LC_ALL, "Russian");
	float lbs;
	cout << "\n������� ��� � ������: ";
	cin >> lbs;
	cout << "��� � ����������� �����: " << lbstokg(lbs)
		 << endl;
	return 0;
}

// -----------------------------------------------------------
// ������� lbstokg()
float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}