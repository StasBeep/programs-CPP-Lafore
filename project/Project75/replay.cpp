// replay.cpp
// ����������� � ����� �� ����� ����������, �������� �������������
#include <iostream>
using namespace std;

///// int main() //////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	int age[4];
	for (int j = 0; j < 4; j++)
	{
		cout << "������� �������: ";
		cin >> age[j];
	}
	for (int j = 0; j < 4; j++)
		cout << "�� �����: " << age[j] << endl;
	return 0;
}