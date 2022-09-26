#include "Player.h"

Player::Player()
{
	cout << "������ ������� ������: ";
	while (!(cin >> libCount) == true || libCount <= 0)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "ʳ������ ������ �� ���� ���� ����� ��� ���� 0!" << endl;
		cout << "������ ������� ������: ";
	}
	cin.get();
	library = new Library[libCount];
}
void Player::searchTitle()
{
	string tempTitle;
	cout << "����� ������ �� ����������. ������ ���������: ";
	cin >> tempTitle;
	for (int i = 0; i < libCount; i++)
	{
		if (tempTitle == library[i].getTitle())
		{
			cout << library[i] <<endl;
		}
	}
}
void Player::searchActors()
{
	string tempActors;
	cout << "����� ������ �� ��������. ������ ������: ";
	cin >> tempActors;
	for (int i = 0; i < libCount; i++)
	{
		if (tempActors == library[i].getActors())
		{
			cout << library[i] << endl;
		}
	}
}
void Player::searchGenre()
{
	string tempGenre;
	cout << "����� ������ �� ������. ������ ����: ";
	cin >> tempGenre;
	for (int i = 0; i < libCount; i++)
	{
		if (tempGenre == library[i].getGenre())
		{
			cout << library[i] << endl;
		}
	}
}
