// objpart.cpp
// ������ ������� � �������� ��������

#include <iostream>
using namespace std;

//////////// class part ////////////////////////////////////////////
class part			// ����������� ������
{
private:
	int modelnumber;		// ����� �������
	int partnumber;			// ����� ������
	float cost;				// ��������� ������
public:
	void setpart(int mn, int pn, float c)		// ��������� ������
	{
		modelnumber = mn;
		partnumber = pn;
		cost = c;
	}
	void showpart()		// ����� ������
	{
		cout << " ������ " << modelnumber;
		cout << " , ������ " << partnumber;
		cout << " , ��������� $" << cost << endl;
	}
};

/////////// int main() //////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	part part1;		// ����������� ������� ������ part
	part1.setpart(6244, 373, 217.55F);		// ����� ������
	part1.showpart();						// ����� ������
	return 0;
}