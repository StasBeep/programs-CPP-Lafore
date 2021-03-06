// salefunc.cpp
// передача массива в виде параметра

#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICTS = 4;	// размеры массива
const int MONTHS = 3;

///// прототип ////////////////////////////////////////////////////////
void display(double[DISTRICTS][MONTHS]);

///// int main() //////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");

	double sales[DISTRICTS][MONTHS] =
	{
		{ 1432.07, 234.50, 654.01},
		{322.00,13838.32,17589.88},
		{9328.34,934.00,4492.30},
		{12838.29,2332.63,32.93}
	};
	
	display(sales);
	cout << endl;
	return 0;
}


///// void display ////////////////////////////////////////////////////
// функци€ дл€ вывода на экран массива
// display()
void display(double funsales[DISTRICTS][MONTHS])
{
	int d, m;

	cout << "\n\n";
	cout << "                 ћес€ц\n";
	cout << "             1          2         3";
	for (d = 0; d < DISTRICTS; d++)
	{
		cout << "\nќтдел " << d + 1;
		for (m = 0; m < MONTHS; m++)
		{
			cout << setw(10) << setiosflags(ios::fixed)
				<< setiosflags(ios::showpoint) << setprecision(2)
				<< funsales[d][m];
		}
	}
}