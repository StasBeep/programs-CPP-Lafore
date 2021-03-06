// counten.cpp
// inheritance with Counter class

#include <iostream>
using namespace std; 

// ----- class Counter ----------------------------------------
class Counter			// базовый класс
{
protected:
	unsigned int count;		// счётчик
public:
	// Конструктор без аргументов
	Counter():count(0)
	{ }
	// Конструктор с одним аргументом
	Counter(int c):count(c)
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
	Counter operator--()		// уменьшает значение счётчика
	{
		return Counter(--count);
	}
};

// ----- int main() -------------------------------------------
int main()
{
	CountDn c1;			// объект с1
	cout << "\n c1 =" << c1.get_count();	// вывод на печать
	++c1; ++c1; ++c1;		// увеличиваем с1 три раза
	cout << "\n c1 =" << c1.get_count();	// вывод на печать
	--c1; --c1;				// уменьшаем с1 два раза
	cout << "\n c1 =" << c1.get_count();	// вывод на печать
	cout << endl;
	return 0;
}