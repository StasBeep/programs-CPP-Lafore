// table.cpp
// demonstrates sin=mple function

#include <iostream>
using namespace std;
void starline();		// ���������� ������� (��������)

int main()
{
	setlocale(LC_ALL, "Russian");
	starline();		// ����� �������
	cout << "��� ������ ��������" << endl;
	starline();		// ����� �������
	cout << "�har -128...127" << endl
		<< "short -32.768...32.767" << endl
		<< "int ��������-���������" << endl
		<< "long -2.147.483.648...2.147.483.647" << endl;
	starline();		// ����� �������
	return 0;
}

// -----------------------------------------------------------
// ����������� ������� starline()
void starline()				// ��������� �������
{
	// ���� �������
	for (int j = 0; j < 45; j++)
		cout << '*';
		cout << endl;
}