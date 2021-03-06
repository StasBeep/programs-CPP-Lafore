// strpart.cpp
// использование строк в классе

#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
using namespace std;

// ----- class part ------------------------------------------
class part
{
private:
	char partname[30];	// название
	int partnumber;		// номер
	double cost;		// цена
public:
	void setpart( const char pname[], int pn, double c)
	{
		// Порядок записи справа налево напоминает формат 
		// обыкновенного присваивания: переменная справа ко-
		// пирует в переменную слева
		strcpy(partname, pname);
		partnumber = pn;
		cost = c;
	}
	void showpart()
	{
		cout << "\nНазвание = " << partname;
		cout << ", номер = " << partnumber;
		cout << ", цена = $ " << cost;
	}
};

// ----- int main() ------------------------------------------
int main()
{
	setlocale(LC_ALL, "Russian");

	part part1, part2;

	part1.setpart("муфта", 4473, 217.55);
	part2.setpart("вороток", 9924, 419.25);
	cout << "\nПервая деталь: "; part1.showpart();
	cout << "\nВторая деталь: "; part2.showpart();
	cout << endl;
	return 0;
}