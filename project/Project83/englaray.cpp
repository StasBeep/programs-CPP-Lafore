// englaray.cpp
// ������� ��� ���������� ���

#include <iostream>
using namespace std;

///// class Distance //////////////////////////////////////////////////
class Distance
{
private:
	int feet;
	float inches;
public:
	void getdist()		// ��������� ����������
	{
		cout << "\n ������� ����: ";
		cin >> feet;
		cout << "������� �����: ";
		cin >> inches;
	}
	void showdist() const	// ����� ����������
	{
		cout << feet << "\'-" << inches << "\"";
	}
};

///// int main() //////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");

	Distance dist[100];			// ������ ����������
	int n = 0;					// ������� ������
	char ans;					// ����� ������������ (y/n)
	
	cout << endl;
	
	do
	{
		cout << "������� ����� ����� " << n + 1;
		dist[n++].getdist();
		cout << "���������� ���� (y/n)? ";
		cin >> ans;
	} while (ans != 'n');		// ���������� ���� �� ����� ������� n

	// ���������� �� ��������
	for (int j = 0; j < n; j++)
	{
		cout << "\n����� ����� " << j + 1 << " : ";
		dist[j].showdist();
	}
	cout << endl;
	
	return 0;
}