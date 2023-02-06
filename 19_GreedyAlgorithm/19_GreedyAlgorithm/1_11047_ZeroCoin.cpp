#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, goal;
	int count = 0;
	vector<int> v_Coins;
	bool bEsc = false;
	cin >> N >> goal;

	while (N--)
	{
		int coinVal;
		cin >> coinVal;
		v_Coins.push_back(coinVal);
	}

	while (!bEsc)
	{
		for (int i = v_Coins.size() - 1; i >= 0; i--)
		{
			if (goal >= v_Coins[i])
			{
				goal = goal - v_Coins[i];
				count++;
				break;
			}
		}
		if (goal < v_Coins[0] || goal == 0)
		{
			bEsc = true;
		}
	}

	cout << count << "\n";
}