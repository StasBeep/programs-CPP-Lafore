// counten2.cpp
// ������������ � ����������� �������

#include <iostream>
using namespace std;

// ----- class Counter ----------------------------------------
class Counter			// ������� �����
{
protected:
	unsigned int count;		// �������
public:
	// ����������� ��� ����������
	Counter() :count()
	{ }
	// ����������� � ����� ����������
	Counter(int c) :count(c)
	{ }
	unsigned int get_count() const
	{
		return count;
	}
	// ���������� ��������
	Counter operator++()
	{
		return Counter(++count);	// �������� (�������)
	}
};

// ----- class CountDn ----------------------------------------
class CountDn : public Counter	// ����������� �����
{
public:
	// ����������� ��� ����������
	CountDn(): Counter()
	{ }
	// ����������� � ����� ����������
	CountDn(int c):Counter(c)
	{ }
	Counter operator--()		// ��������� �������� ��������
	{
		return Counter(--count);
	}
};

// ----- int main() -------------------------------------------
int main()
{
	CountDn c1;			// ������ �1
	CountDn c2(100);

	cout << "\n c1 = " << c1.get_count();	// ����� �� ������
	cout << "\n c2 = " << c2.get_count();

	++c1; ++c1; ++c1;		// ����������� �1 ��� ����
	cout << "\n c1 = " << c1.get_count();	// ����� �� ������

	--c2; --c2;				// ��������� �2 ��� ����
	cout << "\n c2 = " << c2.get_count();	// ����� �� ������

	CountDn c3 = c2;
	cout << "\n c3 = " << c3.get_count();
	cout << endl;
	return 0;
}