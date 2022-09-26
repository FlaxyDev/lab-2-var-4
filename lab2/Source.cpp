#include "Player.h"
#include "windows.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Player pPlayer;
	cin >> pPlayer;
	cout << "----------------------------------------------------------" <<endl;
	cout << pPlayer;
	cout << "----------------------------------------------------------" << endl;
	pPlayer.searchTitle();
	cout << "----------------------------------------------------------" << endl;
	pPlayer.searchActors();
	cout << "----------------------------------------------------------" << endl;
	pPlayer.searchGenre();
	return 0;
}