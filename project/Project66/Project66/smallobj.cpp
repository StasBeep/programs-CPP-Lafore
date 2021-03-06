// smallobj.cpp
// ������������� ������� ��������� ������

#include <iostream>
using namespace std;

//////////////// class smallobj ///////////////////////////////////////////
class smallobj			// ����������� ������
{
private:
	int somedata;		// ���� ������
public:
	void setdata (int d)		// ����� ������, ���������� �������� ����
	{
		somedata = d;
	}
	void showdata()			// ����� ������, ������������ �������� ����
	{
		cout << "�������� ���� ����� " << somedata << endl;
	}
};

/////////////// int main() ///////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	smallobj s1, s2;	// ����������� ���� �������� ������ smallobj
	s1.setdata(1066);	// ����� ������ setdata()
	s2.setdata(1776);
	s1.showdata();		// ����� ������ showdata()
	s2.showdata();
	return 0;
}