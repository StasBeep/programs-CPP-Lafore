// sstrchng.cpp
// ��������� ������ ������

#include <iostream>
#include <string>
using namespace std;

// ----- int main() ------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");

	string s1("�� ������, ���������� �������.");
	string s2("���������");
	string s3("����������� ");

	s1.erase(0, 12);			// ������� "�� ������, "
	s1.replace(11, 7, s2);		// �������� "�������" �� 
								// "���������"
	s1.insert(0, s3);			// ��������� "�����������, "
	s1.erase(s1.size() - 1, 1);	// ������� '.'
	s1.append(3, '!');			// ��������� '!!!'

	int x = s1.find(' ');		// ���� �������

	cout << "s1: " << s1 << endl;

	return 0;
}