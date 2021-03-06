// statdata.cpp
// статические данные класса

#include <iostream>
using namespace std;

////////// class foo //////////////////////////////////////////////////
class foo
{
private:
	static int count;			// общее поле для всех объектов
								// (в смысле "объявления")
public:
	foo()						// инкрементирование при создании объекта
	{
		count++;
	}
	int getcount()				// возвращает значение count
	{
		return count;
	}
};

/////////// int foo::count ////////////////////////////////////////////
// *определение* count
int foo::count = 0;

/////////////// int main() ////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	foo f1, f2, f3;			// создание трёх объектов
	// каждый объект видит одно и то же значение
	cout << "Число объектов: " << f1.getcount() << endl;
	cout << "Число объектов: " << f2.getcount() << endl;
	cout << "Число объектов: " << f3.getcount() << endl;
	return 0;
}