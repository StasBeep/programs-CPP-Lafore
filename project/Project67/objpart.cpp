// objpart.cpp
// детали изделия в качестве объектов

#include <iostream>
using namespace std;

//////////// class part ////////////////////////////////////////////
class part			// определение класса
{
private:
	int modelnumber;		// номер изделия
	int partnumber;			// номер детали
	float cost;				// стоимость детали
public:
	void setpart(int mn, int pn, float c)		// установка данных
	{
		modelnumber = mn;
		partnumber = pn;
		cost = c;
	}
	void showpart()		// вывод данных
	{
		cout << " Модель " << modelnumber;
		cout << " , деталь " << partnumber;
		cout << " , стоимость $" << cost << endl;
	}
};

/////////// int main() //////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	part part1;		// определение объекта класса part
	part1.setpart(6244, 373, 217.55F);		// вызов метода
	part1.showpart();						// вызов метода
	return 0;
}