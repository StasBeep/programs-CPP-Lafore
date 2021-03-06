// increm.cpp
// применение операции инкрементирования

#include <iostream>
using namespace std;

int main()
{
	int count = 10;
	cout << "count = " << count << endl;		// вывод числа 10
	cout << "count = " << 2 * ++count << endl;		// вывод числа 22 (префиксная форма)
	cout << "count = " << 2 * count++ << endl;		// вывод числа 22 (постфиксная форма)
	return 0;
}