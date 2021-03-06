// postfix.cpp
// префиксная и постфиксная операции ++ для нашего класса

#include <iostream>
using namespace std;

// ----- class Counter ----------------------------------------
class Counter
{
private:
	unsigned int count;
public:
	Counter():count(0)
	{ }
	Counter(int c) :count(c)
	{ }
	unsigned int get_count()
	{
		return count;
	}
	Counter operator++()
	{
		return Counter(++count);
	}
	Counter operator++(int)
	{
		return Counter(count++);
	}
};

// ----- int main() -------------------------------------------
int main()
{
	Counter c1, c2;				// определение переменных

	cout << "\nc1 = " << c1.get_count();	// выводим на экран
	cout << "\nc2 = " << c2.get_count();

	++c1;				// увеличиваем с1
	c2 = ++c1;			// с1 = 2б с2 = 2

	cout << "\nc1 = " << c1.get_count(); // выводим на экран ещё
	cout << "\nc2 = " << c2.get_count(); // раз

	c2 = c1++;

	cout << "\nc1 = " << c1.get_count();	// и снова
	cout << "\nc2 = " << c2.get_count();

	return 0;
}