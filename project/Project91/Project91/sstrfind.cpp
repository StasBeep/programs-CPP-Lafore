// sstrfind.cpp
// поиск подстрок

#include <iostream>
#include <string>
using namespace std;

// ----- int main() ------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");
	
	string s1 = "В лесу родилась ёлочка, в лесу она росла.";
	int n;

	n = s1.find("ёлочка");
	cout << "Ёлочка найдена: " << n << endl;

	n = s1.find_first_of("умка");
	cout << "Первый из умка: " << n << endl;

	n = s1.find_first_not_of("абвгдAБВГД");
	cout << "Первый не из : " << n << endl;

	return 0;
}