// circarea.cpp
// ������ � ����������� ������������� ����
// ������������ ������������ ������ ������ ����������, � ��������� ������������� � �������
// �� ����� ������� �����, ������������� ������ �����������.

#include <iostream>		//��� cout � �.�.
using namespace std;

int main()
{
	float rad;						// ���������� ������������� ����
	const float PI = 3.14159F;		// ������������ ��������� 
	cout << "Enter radius circle: "; // ������
	cin >> rad;						// ��������� ������� ����� �������
	float area = PI * rad * rad;	// ���������� ������� �����
	cout << "Square circle equally: " << area << endl; // ����� ���������� �� �����
	return 0;
}