// assign.cpp
// ���������� �������������� �������� � �������������

#include <iostream>
using namespace std;

int main()
{
	int ans = 27;
	cout << "ans = " << ans << endl;
	ans += 10;					// ���� �����,��� � ans = ans + 10;
	cout << "ans + 10 = " << ans << endl;	//37
	ans -= 7;					// ���� �����,��� � ans = ans - 7;
	cout << "ans - 7 = " << ans << endl;	//30
	ans *= 2;					// ���� �����,��� � ans = ans * 2;
	cout << "ans * 2 = " << ans << endl;	//60
	ans /= 3;					// ���� �����,��� � ans = ans / 3;
	cout << "ans / 3 = " << ans << endl;	//20
	ans %= 3;					// ���� �����,��� � ans = ans % 3;
	cout << "ans % 3 = " << ans << endl;	//2

	// ���������
	++ans;
	cout << "+1 = " << ans;
	return 0;
}