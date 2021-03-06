// varaddr.cpp
// адрес переменной

#include <iostream>
using namespace std;

// ----- int main() -------------------------------------------
int main()
{
	int var1 = 11;			// определим три переменных
	int var2 = 22;			// и присвоим им некотрые значения
	int var3 = 33;

	cout << &var1 << endl	// печатаем адреса этих переменных
		<< &var2 << endl
		<< &var3 << endl;

	return 0;
}