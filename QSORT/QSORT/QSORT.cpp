// QSORT.cpp
// ������� QSORT() ��������� ������ ������ � ������� ��������-
// ��� � �������������� ��������� ������� ����������. ��� ����-
// ��� ���������� ������� ���������, ����� ����������, ����� 
// ������� ������/������ �������.

#include <iostream>
#include <cstdlib>
using namespace std;

// ----- ������� campare_ints ---------------------------------
// ������� ���������
int compare_ints(const void* a, const void* b)
{
	int* arg1 = (int*)a;
	int* arg2 = (int*)b;
	if (*arg1 < *arg2)
		return -1;
	else if (*arg1 == *arg2)
		return 0;
	else
		return 1;
}

// ----- int main() -------------------------------------------
int main()
{
	int a1[] = { 10,35,24,33,8,22 };
	int size = sizeof(a1) / sizeof(a1[0]);
	// ������������� qsort � ������� ���������
	qsort(a1, size, sizeof(int), compare_ints);
	for (int i = 0; i < size; i++)
		cout << a1[i] << " ";
	cout << '\n';
	return 0;
}