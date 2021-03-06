// fordemo.cpp
// демонстрирует работу простейшего цикла for

#include <iostream>
using namespace std;

int main()
{
	int j;			// определение счётчика цикла
	for (j = 0; j < 15; j++)		// счётчик меняется от 0 до 14
		cout << j * j << " ";		// квадрат значения j выводится на экран
	cout << endl;
	return 0;
}