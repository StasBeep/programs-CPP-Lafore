// parts.cpp
// ��������� ��� �������� ���������� � ������� �������

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////
struct part        // ���������� ���������
{
    int modelnumber;    // ����� ������ �������
    int partnumber;     // ����� ������ 
    float cost;         // ��������� ������
 };
//////////////////////////////////////////////////////

int main()
{
    setlocale(LC_ALL, "Russian");
    part part1;   // ���������� ����������� ����������
    part1.modelnumber = 6244;   // ������������� �����
    part1.partnumber = 373;     // ���������� part1
    part1.cost = 217.55F; 
    // ����� �������� ����� �� �����
    cout << " ������ " << part1.modelnumber;
    cout << " , ������ " << part1.partnumber;
    cout << " , ��������� $ " << part1.cost << endl;
    return 0;
}