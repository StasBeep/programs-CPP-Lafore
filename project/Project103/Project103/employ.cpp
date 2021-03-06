// employ.cpp
// ������ ��������� ���� ������ ����������� � �������������� 
// ������������

#include <iostream>
using namespace std;
const int LEN = 80;			// ������������ ����� �����

// ----- class employee ---------------------------------------
class employee				// ����� ���������
{
private:
	char name[LEN];			// ��� ����������
	unsigned long number;	// ����� ����������
public:
	void getdata()
	{
		cout << "\n  ������� �������: "; 
		cin >> name;
		cout << "  ������� �����:  ";
		cin >> number;
	}
	void putdata() const
	{
		cout << "\n  �������: " << name;
		cout << "\n  �����: " << number;
	}
};

// ----- class manager ----------------------------------------
class manager :public employee	// ��������
{
private:
	char title[LEN];			// ���������, �������� ����-���������
	double dues;				// ����� ������� � �����-����
public:
	void getdata()
	{
		employee::getdata();
		cout << "  ������� ���������: ";
		cin >> title;
		cout << "  ������� ����� ������� � �����-����: ";
		cin >> dues;
	}
};

// ----- class scientist --------------------------------------
class scientist :public employee		// ������
{
private:
	int pubs;			// ���������� ����������
public:
	void getdata()
	{
		employee::getdata();
		cout << "  ������� ���������� ����������: ";
		cin >> pubs;
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n  ���������� ����������: " << pubs;
	}
};

// ----- class laborer ----------------------------------------
class laborer :public employee		// �������
{

};

// ----- int main() -------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");

	manager m1, m2;
	scientist s1;
	laborer l1;

	// ����� ���������� � ���������� �����������
	cout << endl;
	cout << "\n���� ���������� � ������ ���������";
	m1.getdata();

	cout << "\n���� ���������� � ������ ���������";
	m2.getdata();

	cout << "\n���� ���������� � ������ ������";
	s1.getdata();

	cout << "\n���� ���������� � ������ �������";
	l1.getdata();

	// ������� ���������� ���������� �� �����
	cout << "\n���������� � ������ ���������";
	m1.putdata();

	cout << "\n���������� � ������ ���������";
	m2.putdata();

	cout << "\n���������� � ������ ������";
	s1.putdata();

	cout << "\n���������� � ������ �������";
	l1.putdata();

	cout << endl;
	return 0;
}