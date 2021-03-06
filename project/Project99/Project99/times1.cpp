// times1.cpp
// ��������� �������� ������� � 24-�������� ������ ���������
// � 12-��������

#include <iostream>
#include <string>
using namespace std;

// ----- class time12 -----------------------------------------
class time12
{
private:
	bool pm;		// true = pm, false = am
	int hrs;		// 1 - 12
	int mins;		// 0 - 59
public:
	// ���������� ��� ����������
	time12():pm(true),hrs(0),mins(0)
	{ }
	// ����������� � ����� �����������
	time12(bool ap, int h, int m): pm(ap),hrs (h), mins(m)
	{ }
	void display() const	// ������ 23:59
	{
		cout << hrs << " : ";
		if (mins < 10)
			cout << '0';	// �������������� ���� ��� "01"
		cout << mins << ' ';
		string am_pm = pm ? "p.m." : "a.m.";
		cout << am_pm;
	}
};

// ----- class time24 -----------------------------------------
class time24
{
private:
	int hours;		// 0 - 23
	int minutes;	// 0 - 59
	int seconds;	// 0 - 59
public:
	// ����������� ��� ����������
	time24():hours(0),minutes(0),seconds(0)
	{ }
	// ����������� � ����� �����������
	time24(int h, int m,int s):hours(h),minutes(m),seconds(s)
	{ }
	void display() const	// ������: 23:15:01
	{
		if (hours < 10)
			cout << '0';
		cout << hours << ':';
		if (minutes < 10)
			cout << '0';
		cout << minutes << ':';
		if (seconds < 10)
			cout << '0';
		cout << seconds;
	}
	operator time12() const;		// �������� ��������������
};

// ----- time24::operator time12() const ----------------------
time24::operator time12() const		// �������� ��������������
{
	int hrs24 = hours;
	bool pm = hours < 12 ? false : true;  // ����������� am/pm
										  // ���������� ������
	int roundMins = seconds < 30 ? minutes : minutes + 1;
	if (roundMins == 60)			// ��������� ������ ?
	{
		roundMins = 0;
		++hrs24;
		if (hrs24 == 12 || hrs24 == 24)	// ��������� ����
			pm = (pm == true) ? false : true;
	}
	int hrs12 = (hrs24 < 13) ? hrs24 : hrs24 - 12;
	if (hrs12 == 0)
	{
		hrs12 = 12;
		pm = false;
	}
	return time12(pm, hrs12, roundMins);
}

// ----- int main() -------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");

	int h, m, s;
	while (true)
	{
		// ��������� ������� � 24-�� ������� �� ������������
		cout << "������� ����� � 24-������� �������: \n";
		cout << "���� (�� 0 �� 23): "; cin >> h;
		if (h > 23)		// �����, ���� ����� > 23
			return (1);
		cout << "  ������: "; cin >> m;
		cout << "  ������� "; cin >> s;

		time24 t24(h, m, s);	// ������� ����� � 24-�������
								// �������
		cout << "�������� �����: ";
		t24.display();		// ������� �� ����� ����� 

		time12 t12 = t24;

		cout << "\n� 12-������� �������: ";
		t12.display();
		cout << "\n\n";
	}
	return 0;
}