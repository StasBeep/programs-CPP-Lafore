// divdo.cpp
// ���������� ��������� continue

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long dividend, divisor;
	char ch;
	do 
	{
		cout << "������� �������: ";
		cin >> dividend;
		cout << "������� ��������: ";
		cin >> divisor;

		if (divisor == 0)		// ��� ������� 
		{						// ������� �� ����
			cout << "������������ ��������!\n";		// ����� ���������
			continue;					// ������� � ������ �����
		}
		cout << "������� �����: " << dividend / divisor;
		cout << ", ������� �����: " << dividend % divisor;
		cout << "\n��� ���? (y\\n); ";
		cin >> ch;
	} while (ch != 'n');
	return 0;
}