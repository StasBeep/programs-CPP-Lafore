// counten.cpp
// inheritance with Counter class

#include <iostream>
using namespace std; 

// ----- class Counter ----------------------------------------
class Counter			// ������� �����
{
protected:
	unsigned int count;		// �������
public:
	// ����������� ��� ����������
	Counter():count(0)
	{ }
	// ����������� � ����� ����������
	Counter(int c):count(c)
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
	Counter operator--()		// ��������� �������� ��������
	{
		return Counter(--count);
	}
};

// ----- int main() -------------------------------------------
int main()
{
	CountDn c1;			// ������ �1
	cout << "\n c1 =" << c1.get_count();	// ����� �� ������
	++c1; ++c1; ++c1;		// ����������� �1 ��� ����
	cout << "\n c1 =" << c1.get_count();	// ����� �� ������
	--c1; --c1;				// ��������� �1 ��� ����
	cout << "\n c1 =" << c1.get_count();	// ����� �� ������
	cout << endl;
	return 0;
}