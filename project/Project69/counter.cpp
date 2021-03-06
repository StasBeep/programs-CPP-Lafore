// counter.cpp
// ������� � �������� �������

#include <iostream>
using namespace std;

//////////// class Counter ///////////////////////////////////////
class Counter
{
private:
	unsigned int count;		// �������� ��������
public:
	Counter() : count(0)		// �����������
	{ /* ������ ���� */ }
	void inc_count()		// ����������������� ��������
	{
		count++;
	}
	int get_count()			// ��������� �������� ��������
	{
		return count;
	}
};

/////////////// int main() ///////////////////////////////////////
int main()
{
	Counter c1, c2;				// ����������� � ��������������
	cout << "\nc1 = " << c1.get_count();	// �����
	cout << "\nc2 = " << c2.get_count();
	c1.inc_count();			// ����������������� �1
	c2.inc_count();			// ����������������� �2
	c2.inc_count();			// ����������������� �2
	cout << "\n-----------------------------\n";
	cout << "\nc1 = " << c1.get_count();	// �����
	cout << "\nc2 = " << c2.get_count();
	cout << endl;
	return 0;
}