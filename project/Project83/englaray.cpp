// englaray.cpp
// объекты для английских мер

#include <iostream>
using namespace std;

///// class Distance //////////////////////////////////////////////////
class Distance
{
private:
	int feet;
	float inches;
public:
	void getdist()		// получение информации
	{
		cout << "\n Введите футы: ";
		cin >> feet;
		cout << "Введите дюймы: ";
		cin >> inches;
	}
	void showdist() const	// показ информации
	{
		cout << feet << "\'-" << inches << "\"";
	}
};

///// int main() //////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");

	Distance dist[100];			// массив переменных
	int n = 0;					// счётчик данных
	char ans;					// ответ пользователя (y/n)
	
	cout << endl;
	
	do
	{
		cout << "Введите длину номер " << n + 1;
		dist[n++].getdist();
		cout << "Продолжить ввод (y/n)? ";
		cin >> ans;
	} while (ans != 'n');		// продолжить пока не будет введено n

	// показываем всё введённое
	for (int j = 0; j < n; j++)
	{
		cout << "\nДлина номер " << j + 1 << " : ";
		dist[j].showdist();
	}
	cout << endl;
	
	return 0;
}