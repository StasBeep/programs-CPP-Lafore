// sqrt.cpp
// ������������� ������������ ������� sqrt()

#include <iostream>
#include <cmath>		// ��� sqrt
using namespace std;

int main()
{
	double number, answer;		// ��������� ���� double ��� ������� sqrt()
	cout << "Enter number: ";
	cin >> number;				// ���� �����
	answer = sqrt(number);		// ���������� ����������� �����
	cout << "SQRT equally: " << answer << endl;		// ����� ����������
	return 0;
}