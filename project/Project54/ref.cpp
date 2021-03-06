// ref.cpp
// �������� ���������� ��������� �������� ����������

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	void intfrac(float, float&, float&);			// ��������
	float number, intpart, fracpart;
	do
	{
		cout << "\n������� ������������ �����: ";
		cin >> number;			// ���� ����� �������������
		intfrac(number, intpart, fracpart);		// ���������� ����� � ������� �����
		cout << "����� ����� ����� " << intpart	// ����� �����������
			 << " ������� ����� ����� " << fracpart << endl;
	} while (number != 0.0);			// ����� �� �����, ���� ����� 0
	return 0;
}

// ---------------------------------------------------------------------------------
// ��������� ����� � ������� ����� ������������� �����
void intfrac(float n, float& intp, float& fracp)
{
	long temp = static_cast<long>(n);		// �������������� � ���� long
	intp = static_cast<float>(temp);		// � ������� �� float
	fracp = n - intp;						// �������� ����� �����
}