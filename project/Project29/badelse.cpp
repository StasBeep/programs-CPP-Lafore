// badelse.cpp
// ������������ ������������� else � if �� ��������� ����������

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "������� ����� a, b � �: \n";
	cin >> a >> b >> c;
	if (a == b)
		if (b == c)
			cout << "a, b, c �����\n";
		else
			cout << "a � b �� �����\n";
	return 0;
}