// englcon.cpp
// constructors, adds object using member function

#include <iostream>
using namespace std;

////////// class Distance ////////////////////////////////////////////
class Distance							// ����� � ���������� �������
{
private:
	int feet;
	float inches;
public:			// ����������� ��� ���������
	Distance() : feet(0), inches(0.0)
	{ }
	// ����������� � ����� �����������
	Distance(int ft, float in):feet(ft),inches(in)
	{ }
	void getdist()		// ���� ����� �������������
	{
		cout << "\n������� ����� �����: ";
		cin >> feet;
		cout << "������� ����� ������: ";
		cin >> inches;
	}
	void showdist()		// ����� ����� �� �����
	{
		cout << feet << "\'-" << inches << "\"";
	}
	void add_dist(Distance, Distance);		// ��������
};
// ------------------------------------------------------------------
// �������� ���� d1 � d2
void Distance::add_dist(Distance dd1, Distance dd2)
{
	inches = dd1.inches + dd2.inches;	// �������� ������
	feet = 0;							// � ��������� �����
	if (inches >= 12)		// ���� ����� ������ ������ 12.0,
	{						// �� ��������� ����� ������
		inches -= 12;		// �� 12.0 � �����������
		feet++;				// ����� ����� �� 1
	}
	feet += dd1.feet + dd2.feet;	// �������� �����
}

///////////// int main() /////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	Distance dist1, dist3;		// ��� �����
	Distance dist2(11, 6.25);	// ����������� � �������������
	dist1.getdist();			// ���� ����� dist1
	dist3.add_dist(dist1, dist2);	// dist1 + dist2
	// ����� ���� ����
	cout << "\ndist1 = ";
	dist1.showdist();
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << "\ndist3 = ";
	dist3.showdist();
	cout << endl;
	return 0;
}