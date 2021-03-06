// staken.cpp
// перегрузка функций базового и производного классов

#include <iostream>
using namespace std;
#include <process.h>		 // для exit()

// ----- class Stack ------------------------------------------
class Stack
{
protected:
	enum{ MAX = 3 };	// размер стека
	int st[MAX];		// данные, хранящиеся в стеке
	int top;			// индекс последнего элемента в стеке
public:
	// Конструктор
	Stack()
	{
		top = -1;
	}
	void push(int var)		// помещение числа в стек
	{
		st[++top] = var;
	}
	int pop()				// извлечение числа из стека
	{
		return st[top--];
	}
};

// ----- class Stack2 -----------------------------------------
class Stack2 :public Stack
{
public:
	void push(int var)		// помещение числа в стек
	{
		if (top >= MAX - 1)	// если стек полон, то ошибка
		{
			cout << "\nОшибка: стек полон";
			exit(1);
		}
		Stack::push(var);	// вызов функции push класса Stack
	}
	int pop()		//  извлечение числа из стека
	{
		if (top < 0)		// если стек пуст, то ошибка
		{
			cout << "\nОшибка: стек пуст\n"; 
			exit(1);
		}
		// вызов функции pop класса Stack (можно без ретурн)
		return Stack::pop();
	}
};

// ----- int main() -------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");

	Stack2 s1;
	
	s1.push(11);			// поместить в стек несколько чисел
	s1.push(22);
	s1.push(33);

	cout << endl << s1.pop();	// забираем числа из стека
	cout << endl << s1.pop();
	cout << endl << s1.pop();
	cout << endl << s1.pop();	// ой, а данных-то больше нет
	cout << endl;
	return 0;
}