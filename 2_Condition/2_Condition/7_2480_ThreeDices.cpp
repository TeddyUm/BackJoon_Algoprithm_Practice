#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
	int dice1 = 0, dice2 = 0, dice3 = 0;
	cin >> dice1 >> dice2 >> dice3;

	int reward = 0;

	if (dice1 == dice2 && dice2 == dice3 && dice3 == dice1)
	{
		reward = dice1 * 1000 + 10000;
	}
	else if (dice1 != dice2 && dice2 != dice3 && dice3 != dice1)
	{
		if (dice1 > dice2)
		{
			reward = dice1;
		}
		else
		{
			reward = dice2;
		}

		if (reward < dice3)
		{
			reward = dice3;
		}

		reward *= 100;
	}
	else
	{
		if (dice1 == dice2)
		{
			reward = dice1;
			reward = reward * 100 + 1000;
		}
		if (dice2 == dice3)
		{
			reward = dice2;
			reward = reward * 100 + 1000;
		}
		if (dice3 == dice1)
		{
			reward = dice1;
			reward = reward * 100 + 1000;
		}
	}

	cout << reward;
	return 0;
}