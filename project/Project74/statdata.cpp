// statdata.cpp
// ����������� ������ ������

#include <iostream>
using namespace std;

////////// class foo //////////////////////////////////////////////////
class foo
{
private:
	static int count;			// ����� ���� ��� ���� ��������
								// (� ������ "����������")
public:
	foo()						// ����������������� ��� �������� �������
	{
		count++;
	}
	int getcount()				// ���������� �������� count
	{
		return count;
	}
};

/////////// int foo::count ////////////////////////////////////////////
// *�����������* count
int foo::count = 0;

/////////////// int main() ////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	foo f1, f2, f3;			// �������� ��� ��������
	// ������ ������ ����� ���� � �� �� ��������
	cout << "����� ��������: " << f1.getcount() << endl;
	cout << "����� ��������: " << f2.getcount() << endl;
	cout << "����� ��������: " << f3.getcount() << endl;
	return 0;
}