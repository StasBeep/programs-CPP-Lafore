// Example6.cpp
// ��������� ��� ���� ����������

#include <iostream>
#include <cstring>			// ��� strlen
using namespace std;

// ----- int main() -------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "����" << endl;
	cout << "������ ����������" << endl;
	cout << "----------------------------------" << endl;

	cout << "������� ����������: ";
	int key;		// ���� ��� ����
	cin >> key;

	// ����
	cout << "----------------------------------" << endl;
	// ���������� 1
	if (key == 1)
	{
		// ���������� 1:


		cout << "���������� 1\n" << endl;

		void reversit(char[]);		// ��������
		const int MAX = 80;			// ������ �������
		char str[MAX];				// ������
		cout << "������� ������: ";	// �������� ������ ��
		cin.get(str, MAX);
		reversit(str);				// ����������� ������
		cout << "����������� ������: "; // ������� �
		cout << str << endl;
	}

	return 0;
}

// ----- reversit() -------------------------------------------
// ������� ���������������� ������, ���������� � ���������
void reversit(char s[])
{
	int len = strlen(s);		// ����� ����� ������
	for (int i = 0; i < len / 2; i++)	// �������� ��
	{									// ������� �� ������ 
										// ��������
		char temp = s[i];				// �� �������
		s[i] = s[len - i - 1];			// �� ������ ��������
		s[len - i - 1] = temp;
	}
}