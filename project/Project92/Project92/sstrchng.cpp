// sstrchng.cpp
// изменение частей строки

#include <iostream>
#include <string>
using namespace std;

// ----- int main() ------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");

	string s1("Всё хорошо, прекрасная маркиза.");
	string s2("принцесса");
	string s3("Приветствую ");

	s1.erase(0, 12);			// убираем "Всё хорошо, "
	s1.replace(11, 7, s2);		// заменяем "маркиза" на 
								// "принцесса"
	s1.insert(0, s3);			// вставляем "Приветствую, "
	s1.erase(s1.size() - 1, 1);	// убираем '.'
	s1.append(3, '!');			// добавляем '!!!'

	int x = s1.find(' ');		// ищем пробелы

	cout << "s1: " << s1 << endl;

	return 0;
}