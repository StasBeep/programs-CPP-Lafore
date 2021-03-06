// counten2.cpp
// конструкторы в производных классах

#include <iostream>
using namespace std;

// ----- class Counter ----------------------------------------
class Counter			// базовый класс
{
protected:
	unsigned int count;		// счётчик
public:
	// Конструктор без аргументов
	Counter() :count()
	{ }
	// Конструктор с одним аргументом
	Counter(int c) :count(c)
	{ }
	unsigned int get_count() const
	{
		return count;
	}
	// увеличение значения
	Counter operator++()
	{
		return Counter(++count);	// счётчика (префикс)
	}
};

// ----- class CountDn ----------------------------------------
class CountDn : public Counter	// производный класс
{
public:
	// Конструктор без параметров
	CountDn(): Counter()
	{ }
	// Конструктор с одним параметром
	CountDn(int c):Counter(c)
	{ }
	Counter operator--()		// уменьшает значение счётчика
	{
		return Counter(--count);
	}
};

// ----- int main() -------------------------------------------
int main()
{
	CountDn c1;			// объект с1
	CountDn c2(100);

	cout << "\n c1 = " << c1.get_count();	// вывод на печать
	cout << "\n c2 = " << c2.get_count();

	++c1; ++c1; ++c1;		// увеличиваем с1 три раза
	cout << "\n c1 = " << c1.get_count();	// вывод на печать

	--c2; --c2;				// уменьшаем с2 два раза
	cout << "\n c2 = " << c2.get_count();	// вывод на печать

	CountDn c3 = c2;
	cout << "\n c3 = " << c3.get_count();
	cout << endl;
	return 0;
}