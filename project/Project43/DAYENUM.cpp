// dayenum.cpp
// применение перечислений

#include <iostream>
using namespace std;
// объ€вление перечисл€емого типа
enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };
/////////////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	days_of_week day1, day2;		// определение переменных,
									// хран€щих дни недели
	day1 = Mon;				// инициализаци€ переменных
	day2 = Thu;
	int diff = day2 - day1;		// арифметическа€ операци€
	cout << "–азница в дн€х: " << diff << endl;
	cout << "day1 наступит раньше, чем day2\n";
	return 0;
}