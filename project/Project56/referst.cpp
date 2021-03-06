// referst.cpp
// передача структурной переменной по ссылке

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////
struct Distance
{
	int feet;
	float inches;
};

/////////////////////////////////////////////////////////////////
void scale(Distance&, float);	// прототип функций
void engldisp(Distance);

/////////////////////////////////////////////////////////////////
int main()
{
	Distance d1 = { 12, 6.5 };		// инициализация d1, d2
	Distance d2 = { 10, 5.5 };
	cout << "d1 = "; engldisp(d1);		// вывод исходных значений d1 и d2
	cout << "\nd2 = "; engldisp(d2);
	scale(d1, 0.5);				// Масштабирование d1 и d2
	scale(d2, 0.25);
	cout << "\nd1 = "; engldisp(d1);	// вывод новых значений d1 and d2
	cout << "\nd2 = "; engldisp(d2);
	cout << endl;
	return 0;
}

// -- функция scale() ---------------------------------------------
void scale(Distance& dd, float factor)
{
	float inches = (dd.feet * 12 + dd.inches) * factor; // перевод футов
	// в дюймы и умножение на коэффициент
	dd.feet = static_cast<int>(inches / 12);
	dd.inches = inches - dd.feet * 12;
}
// -----------------------------------------------------------------

// -- engldisp -----------------------------------------------------
// функция engldisp()
// отображает значение типа Distance на экране
void engldisp(Distance dd)			// параметр dd типа Distance
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}