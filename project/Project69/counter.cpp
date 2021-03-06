// counter.cpp
// счётчик в качестве объекта

#include <iostream>
using namespace std;

//////////// class Counter ///////////////////////////////////////
class Counter
{
private:
	unsigned int count;		// значение счётчика
public:
	Counter() : count(0)		// конструктор
	{ /* пустое тело */ }
	void inc_count()		// инкрементирование счётчика
	{
		count++;
	}
	int get_count()			// получение значения счётчика
	{
		return count;
	}
};

/////////////// int main() ///////////////////////////////////////
int main()
{
	Counter c1, c2;				// определение с инициализацией
	cout << "\nc1 = " << c1.get_count();	// вывод
	cout << "\nc2 = " << c2.get_count();
	c1.inc_count();			// инкрементирование с1
	c2.inc_count();			// инкрементирование с2
	c2.inc_count();			// инкрементирование с2
	cout << "\n-----------------------------\n";
	cout << "\nc1 = " << c1.get_count();	// вывод
	cout << "\nc2 = " << c2.get_count();
	cout << endl;
	return 0;
}