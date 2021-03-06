// countpp1.cpp
// увеличение переменной операцией ++

#include <iostream>
using namespace std;

// ----- class Counter ----------------------------------------
class Counter
{
private:
	unsigned int count;		// значение счётчика
public:
	Counter(): count(0)		// конструктор
	{ }
	unsigned int get_count()	// получить значение
	{
		return count;
	}
	void operator++()	// увеличить значение
	{
		++count;
	}
};

// ----- int main() -------------------------------------------
int main()
{
	Counter c1, c2;			// определение переменных
	cout << "\nc1 = " << c1.get_count();	// вывод на экран
	cout << "\nc2 = " << c2.get_count();
	++c1;
	++c2;
	++c2;
	cout << "\nc1 = " << c1.get_count();	// снова показываем
	cout << "\nc2 = " << c2.get_count() << endl;
	return 0;
}