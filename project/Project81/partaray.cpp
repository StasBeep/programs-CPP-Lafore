// partaray.cpp
// ������ �� ��������

#include <iostream>
using namespace std;

const int SIZE = 4;

///// struct part /////////////////////////////////////////////////////
struct part
{
	int mnumber;
	int partnumber;
	float cost;
};

///// int main() //////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	part apart[SIZE];

	for (n = 0; n < SIZE; n++)
	{
		cout << endl;
		cout << "������� ����� ������: ";
		cout << apart[n].mnumber;
		cout << "������� ����� �����: ";
		cin >> apart[n].partnumber;
		cout << "������� ���������: ";
		cin >> apart[n].cost;
	}
	cout << endl;
	for (n = 0; n < SIZE; n++)
	{
		cout << "������ " << apart[n].mnumber;
		cout << "����� " << apart[n].partnumber;
		cout << "��������� " << apart[n].cost << endl;
	}
	return 0;
}