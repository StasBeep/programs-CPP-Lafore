// sstrass.cpp
// ����������� � ���������� ��� �����

#include <iostream>
#include <string>
using namespace std;

// ----- int main() ------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");
	string s1("����");
	string s2 = "����";
	string s3;
	s3 = s1;
	cout << "s3 >> " << s3 << endl;
	s3 = "�� " + s1 + " �� ";
	s3 += s2;
	cout << "s3 >> " << s3 << endl;
	s1.swap(s2);
	cout << s1 << " �� " << s2 << endl;
	return 0;
}