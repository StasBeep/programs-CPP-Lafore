// sstrio.cpp
// ���� � ����� ��� ������ srting

#include <iostream>
#include <string>
using namespace std;

// ----- int main() ------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");

	string full_name, nickname, address;
	string greeting("������������, ");
	cout << "������� ���� ���: ";
	getline(cin, full_name);
	cout << "���� ���: " << full_name << endl;

	cout << "������� ��� ���������: ";
	cin >> nickname;

	greeting += nickname;
	cout << greeting << endl;
	cout << "������� ��� ����� � ��������� �����\n";
	cout << "��������� ����� ������ '$'\n";
	getline(cin, address, '$');
	cout << "��� �����: " << address << endl;

	return 0;
}