// cardobj.cpp
// ��������� ����� � �������� ��������

#include <iostream>
using namespace std;

enum Suit { clubs, diamods, hearts, spades };
// ���������� ����������� ����
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

////////////// class card /////////////////////////////////////////////
class card
{
private:
	int number;			// ����������� �����
	Suit suit;			// �����
public:
	card()				// ����������� ��� ����������
	{ }
						// ����������� � ����� �����������
	card (int n, Suit s): number(n),suit(s)
	{ }
	void display();		// ����� ����� �� �����
	bool isEqual(card); // ��������� ���������� ����
};

// ----- void card::display() -----------------------------------------
void card::display()		// ����� ����� �� �����
{
	if (number >= 2 && number <= 10)
		cout << number << " ";
	else
		switch (number)
		{
		case jack: 
			cout << "����� ";
			break;
		case queen:
			cout << "���� ";
			break;
		case king:
			cout << "������ ";
			break;
		case ace:
			cout << "��� ";
			break;
		}
	switch (suit)
	{
	case clubs:
		cout << "����";
		break;
	case diamods:
		cout << "�����";
		break;
	case hearts:
		cout << "������";
		break;
	case spades:
		cout << "���";
		break;
	}
}

// ----- bool card::isEqual (card c2) ---------------------------------
// ��������� ���� ����
bool card::isEqual(card c2)
{
	return (number == c2.number && suit == c2.suit) ? true : false;
}

////////////// int main() /////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
	card temp, chosen, prize;		// ��� �����
	int position;
	card card1(7, clubs);			// ����������� � ������������� card1
	cout << "\n����� 1: ";
	card1.display();				// ����� ����� 1
	card card2(jack, hearts);		// ����������� � ������������� card2
	cout << "\n����� 2: ";
	card2.display();				// ����� ����� 2
	card card3(ace, spades);		// ����������� � ������������� card3
	cout << "\n����� 3: ";
	card3.display();				// ����� ����� 3
	prize = card3;			// ����� prize ����� ���������� �������
	cout << "\n������ ������� ����� 1 � 3 ...";
	temp = card3; card3 = card1; card1 = temp;
	cout << "\n������ ������� ����� 2 � 3 ...";
	temp = card3; card3 = card2; card2 = temp;
	cout << "\n������ ������� ����� 1 � 2 ...";
	temp = card2; card2 = card1; card1 = temp;
	cout << "\n�� ����� ������� (1,2 ��� 3) ������ ";
	prize.display();				// ����������� �����
	cout << "?";
	cin >> position;				// ���� ������� �������
	switch (position)
	{								// chosen - ����� �� �������
	case 1:
		chosen = card1;
		break;
	case 2:
		chosen = card2;
		break;
	case 3:
		chosen = card3;
		break;
	}
	if (chosen.isEqual(prize))		// ��������� ����
		cout << "���������! �� ��������!";
	else
		cout << "�������. �� ���������.";
	cout << "�� ������ ����� ";
	chosen.display();				// ����� ��������� �����
	cout << endl;
	return 0;
}