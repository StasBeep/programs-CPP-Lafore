// condi.cpp
// печать символа 'x' каждые 8 позиций
// с приминением условной операции

#include <iostream>
using namespace std;

int main()
{
	for (int j = 0; j < 80; j++)		// для каждой позиции
	{
		char ch = (j % 8) ? ' ' : 'x';	// номер позиции кратен 8
		cout << ch;						// в противном случае ch содержит пробел
	}
	return 0;
}