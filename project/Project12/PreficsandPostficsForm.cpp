// increm.cpp
// ���������� �������� �����������������

#include <iostream>
using namespace std;

int main()
{
	int count = 10;
	cout << "count = " << count << endl;		// ����� ����� 10
	cout << "count = " << 2 * ++count << endl;		// ����� ����� 22 (���������� �����)
	cout << "count = " << 2 * count++ << endl;		// ����� ����� 22 (����������� �����)
	return 0;
}