// width1.cpp
// Программа печатающая названия городов и их численность населения в виде двух столбцов  

// width2.cpp
// Программа печатающая названия городов и их численность населения в виде двух столбцов с выравниванием

// демонстрирются необходимость применения манипулятора setw


// width1 and width2
#include <iostream>
// width2
#include <iomanip>		// для использования setw
// width1 and width2
using namespace std;

// width1 and width2
int main()
{
	// width1 and width2
	long pop1 = 4789426, pop2 = 274124, pop3 = 9761;
	// width1
	cout << "City " << "Population" << endl
		 << "Moscow " << pop1 << endl
		 << "Kirov " << pop2 << endl
		 << "Ygrumovka " << pop3 << endl << endl << endl;
	// width2
	cout << setw(9) << "City" << setw(12)
		<< "Population" << endl
		<< setw(9) << "Moscow" << setw(12) << pop1 << endl
		<< setw(9) << "Kirov" << setw(12) << pop2 << endl
		<< setw(9) << "Ygrumovka" << setw(12) << pop3 << endl;
	return 0;
}