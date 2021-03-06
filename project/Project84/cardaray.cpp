// cardaray.cpp
// ����� ��������� ����

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Suit { clubs, diamonds, hearts, spades };
// �� 2 �� 10 ������� �����
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

///// class card //////////////////////////////////////////////////////
class card
{
private:
	int number;
	Suit suit;
public:
	card()	// �����������
	{ }
	void set(int n, Suit s)		// ��������� ��������
	{
		suit = s;
		number = n;
	}
	void display();			// ����� ����� 
};

///// int main() //////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");

	card deck[52];
	int j;
	cout << endl;
	for (j = 0; j < 52; j++)	// ������ ������������� ������ ����
	{
		int num = (j % 13) + 2;
		Suit su = Suit(j / 13);
		deck[j].set(num, su);
	}
	// ���������� �������� ������
	cout << "�������� ������:\n";
	for (j = 0; j < 52; j++)
	{
		deck[j].display();
		cout << "  ";
		// �������� ����� ������ ����� ������ 13-� �����
		if (!((j + 1) % 13))
			cout << endl;
	}
	srand(time(NULL));	// �������������� ��������� ��������� �����
	for (j = 0; j < 52; j++)
	{
		int k = rand() % 52;	// �������� ��������� �����
		card temp = deck[j];	// � ������ � � �������
		deck[j] = deck[k];
		deck[k] = temp;
	}
	// ���������� ������������ ������
	cout << "\n������������ ������:\n";
	for (j = 0; j < 52; j++)
	{
		deck[j].display();
		cout << "  ";
		if (!((j + 1) % 13)) // �������� ����� ������ ����� 13-� �����
			cout << endl;
	}
	return 0;
}

///// void card::display() ////////////////////////////////////////////
void card::display()
{
	if (number >= 2 && number <= 10)
		cout << number;
	else
	{
		switch (number)
		{
		case jack:
			cout << 'J';
			break;
		case queen:
			cout << 'Q';
			break;
		case king:
			cout << 'K';
			break;
		case ace:
			cout << 'A';
			break;
		}
	}
	switch (suit)
	{
	case clubs: 
		cout << static_cast<char>(5);
		break;
	case diamonds:
		cout << static_cast<char>(4);
		break;
	case hearts:
		cout << static_cast<char>(3);
		break;
	case spades:
		cout << static_cast<char>(6);
		break;
	}
}