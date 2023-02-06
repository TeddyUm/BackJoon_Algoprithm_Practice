#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
	int N = 0;
	vector<int> vInt;
	int count = 0;
	int pick = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		vInt.push_back(temp);
	}

	cin >> pick;

	for (int i = 0; i < vInt.size(); i++)
	{
		if (vInt[i] == pick)
		{
			count++;
		}
	}

	cout << count;

	return 0;
}