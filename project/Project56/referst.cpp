// referst.cpp
// �������� ����������� ���������� �� ������

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////
struct Distance
{
	int feet;
	float inches;
};

/////////////////////////////////////////////////////////////////
void scale(Distance&, float);	// �������� �������
void engldisp(Distance);

/////////////////////////////////////////////////////////////////
int main()
{
	Distance d1 = { 12, 6.5 };		// ������������� d1, d2
	Distance d2 = { 10, 5.5 };
	cout << "d1 = "; engldisp(d1);		// ����� �������� �������� d1 � d2
	cout << "\nd2 = "; engldisp(d2);
	scale(d1, 0.5);				// ��������������� d1 � d2
	scale(d2, 0.25);
	cout << "\nd1 = "; engldisp(d1);	// ����� ����� �������� d1 and d2
	cout << "\nd2 = "; engldisp(d2);
	cout << endl;
	return 0;
}

// -- ������� scale() ---------------------------------------------
void scale(Distance& dd, float factor)
{
	float inches = (dd.feet * 12 + dd.inches) * factor; // ������� �����
	// � ����� � ��������� �� �����������
	dd.feet = static_cast<int>(inches / 12);
	dd.inches = inches - dd.feet * 12;
}
// -----------------------------------------------------------------

// -- engldisp -----------------------------------------------------
// ������� engldisp()
// ���������� �������� ���� Distance �� ������
void engldisp(Distance dd)			// �������� dd ���� Distance
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}