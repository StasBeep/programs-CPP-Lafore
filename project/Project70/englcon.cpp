// englcon.cpp
// constructors, adds object using member function

#include <iostream>
using namespace std;

////////// class Distance ////////////////////////////////////////////
class Distance							// длина в английской системе
{
private:
	int feet;
	float inches;
public:			// конструктор без аргумента
	Distance() : feet(0), inches(0.0)
	{ }
	// конструктор с двум€ аргументами
	Distance(int ft, float in):feet(ft),inches(in)
	{ }
	void getdist()		// ввод длины пользователем
	{
		cout << "\n¬ведите число футов: ";
		cin >> feet;
		cout << "¬ведите число дюймов: ";
		cin >> inches;
	}
	void showdist()		// вывод длины на экран
	{
		cout << feet << "\'-" << inches << "\"";
	}
	void add_dist(Distance, Distance);		// прототип
};
// ------------------------------------------------------------------
// сложение длин d1 и d2
void Distance::add_dist(Distance dd1, Distance dd2)
{
	inches = dd1.inches + dd2.inches;	// сложение дюймов
	feet = 0;							// с возможным заЄмом
	if (inches >= 12)		// если число дюймов больше 12.0,
	{						// то уменьшаем число дюймов
		inches -= 12;		// на 12.0 и увеличиваем
		feet++;				// число футов на 1
	}
	feet += dd1.feet + dd2.feet;	// сложение футов
}

///////////// int main() /////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	Distance dist1, dist3;		// две длины
	Distance dist2(11, 6.25);	// определение и инициализаци€
	dist1.getdist();			// ввод длины dist1
	dist3.add_dist(dist1, dist2);	// dist1 + dist2
	// вывод всех длин
	cout << "\ndist1 = ";
	dist1.showdist();
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << "\ndist3 = ";
	dist3.showdist();
	cout << endl;
	return 0;
}