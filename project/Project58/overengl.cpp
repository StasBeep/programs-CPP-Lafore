// overengl.cpp
// ������������� ������������� �������

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////
struct Distance					// ����� � ���������� ������� 
{
	int feet;
	float inches;
};

///////////////////////////////////////////////////////////////
void engldisp(Distance);		// ���������
void engldisp(float);

///////////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	Distance d1;			// ����� ���� Distance
	float d2;				// ����� ���� float
	
	// ���� �������� d1
	cout << "\n������� ����� �����: ";
	cin >> d1.feet;
	cout << "������� ����� ������: ";
	cin >> d1.inches;

	// ���� �������� d2
	cout << "������� ����� � ������: ";
	cin >> d2;

	cout << "\nd1 ";
	engldisp(d1);					// ����� �������� d1
	
	cout << "\nd2 ";
	engldisp(d2);					// ����� �������� d2
	cout << endl;
	return 0;
}

// ----- ������� engldisp()-----------------------------------
void engldisp(Distance dd)		// �������� dd ���� Distance
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}

// ----- ������� engldisp() � ���� float ----------------------
// ����� ���������� ���� float � ����� � ������
void engldisp(float dd)			// �������� dd ���� float
{
	int feet = static_cast<int>(dd / 12);
	float inches = dd - feet * 12;
	cout << feet << "\'-" << inches << "\"";
}