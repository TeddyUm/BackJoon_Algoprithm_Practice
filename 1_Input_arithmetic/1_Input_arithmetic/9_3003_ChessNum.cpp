#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
	int king = 1;
	int queen = 1;
	int luke = 2;
	int bishop = 2;
	int knight = 2;
	int pawn = 8;
	cin >> king >> queen >> luke >> bishop >> knight >> pawn;

	if (king != 1)
	{
		king = 1 - king;
	}
	else
	{
		king = 0;
	}

	if (queen != 1)
	{
		queen = 1 - queen;
	}
	else
	{
		queen = 0;
	}

	if (luke != 2)
	{
		luke = 2 - luke;
	}
	else
	{
		luke = 0;
	}

	if (bishop != 2)
	{
		bishop = 2 - bishop;
	}
	else
	{
		bishop = 0;
	}

	if (knight != 2)
	{
		knight = 2 - knight;
	}
	else
	{
		knight = 0;
	}

	if (pawn != 8)
	{
		pawn = 8 - pawn;
	}
	else
	{
		pawn = 0;
	}
	cout << king << " " << queen << " " << luke << " " << bishop << " " << knight << " " << pawn << endl;

	return 0;
}