// convert.cpp
// ������������� �������� �������� �������� ��������

#include <iostream>
using namespace std;

float ibstokg(float);			// �������� �������

int main()
{
	setlocale(LC_ALL, "Russian");
	float lbs, kgs;
	cout << "\n������� ��� � ������: ";
	cin >> lbs;
	kgs = ibstokg(lbs);
	cout << "��� � ����������� �����: " << kgs << endl;
	return 0;
}

// -------------------------------------------------------------
// ������� ibstokg()
// ��������� ����� � ����������
float ibstokg(float pounds)
{
	float kilograms = 0.453592 * pounds;
	return kilograms;
}