// inline.cpp
// ���������� ��������� �������

#include <iostream>
using namespace std;

// ������� ibstokg()
// ��������� ����� � ����������
inline float ibstokg(float pounds)
{
	return 0.453592 * pounds;
}

// ----------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");
	float ibs;
	cout << "\n������� ��� � ������: ";
	cin >> ibs;
	cout << " " << ibstokg(ibs) << endl;
	return 0;
}