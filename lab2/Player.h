#pragma once
#include "Library.h"
class Player
{
private:
	int libCount;
	Library *library;
public:
	Player();
	void searchTitle();
	void searchActors();
	void searchGenre();
	~Player()
	{
		delete []library;
	}
	friend ostream& operator <<(ostream& os, const Player& player)
	{
		for (int i = 0; i < player.libCount; i++)
		{
			os << player.library[i] << endl;
		}
		return os;
	}
	friend istream& operator >>(istream& is, Player& player)
	{
		for (int i = 0; i < player.libCount; i++)
		{
			is >> player.library[i];
			cout << endl;
		}
		return is;
	}
	
};

