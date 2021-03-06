// retstr.cpp
// ������������� ����������� �������� ����������� ����������

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////
struct Distance						// ����� � ���������� �������
{
	int feet;
	float inches;
};

///////////////////////////////////////////////////////////////////
Distance addengl(Distance, Distance);		// ��������
void engldisp(Distance);

int main()
{
	setlocale(LC_ALL, "Russian");
	Distance d1, d2, d3;		// ��� ����������� ����������
	
	// ���� �������� d1
	cout << "\n������� ����� �����: ";
	cin >> d1.feet;
	cout << "������� ����� ������: ";
	cin >> d1.inches;

	// ���� �������� d2
	cout << "\n������� ����� �����: ";
	cin >> d2.feet;
	cout << "������� ����� ������: ";
	cin >> d2.inches;

	d3 = addengl(d1, d2);		// d3 ����� ����� d1 � d2
	cout << endl;
	engldisp(d1); cout << " + ";	// ����� ���� ����
	engldisp(d2); cout << " = ";
	engldisp(d3); cout << endl;
	return 0;
}

// ------------------------------------------------------------------
// ������� addengl()
// ���������� ��� �������� ���� Distance � ���������� �����
Distance addengl(Distance dd1, Distance dd2)
{
	Distance dd3;		// ���������� ��� �������� ������� �����
	dd3.inches = dd1.inches + dd2.inches;	// �������� ������
	dd3.feet = 0;		// � �����;
	if (dd3.inches >= 12.0)			// ���� ����� ������ ������ 12.0
	{								// �� ��������� ����� ������
		dd3.inches -= 12.0;			// �� 12.0 � �����������
		dd3.feet++;					// ����� ��� �� 1
	}
	dd3.feet += dd1.feet + dd2.feet;// �������� �����
	return dd3;						// ������� ��������
}	// ����� ������� addengl()

// ------------------------------------------------------------------
// ������� engldisp()
// ���������� ���� ����������� ���������� Distance
void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}