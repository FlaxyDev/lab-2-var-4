#include "Player.h"

Player::Player()
{
	cout << "Введіть кількість фільмів: ";
	while (!(cin >> libCount) == true || libCount <= 0)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Кількість фільмів не може бути менше або рівне 0!" << endl;
		cout << "Введіть кількість фільмів: ";
	}
	cin.get();
	library = new Library[libCount];
}
void Player::searchTitle()
{
	string tempTitle;
	cout << "Пошук фільму за заголовком. Введіть заголовок: ";
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
	cout << "Пошук фільму за акторами. Введіть акторів: ";
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
	cout << "Пошук фільму за темами. Введіть теми: ";
	cin >> tempGenre;
	for (int i = 0; i < libCount; i++)
	{
		if (tempGenre == library[i].getGenre())
		{
			cout << library[i] << endl;
		}
	}
}
