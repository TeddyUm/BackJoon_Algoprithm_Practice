#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
	bool aAttend[31] = { 0, };
	int att = 0;

	for (int i = 1; i <= 28; i++)
	{
		cin >> att;
		aAttend[att] = true;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (!aAttend[i])
		{
			cout << i << endl;
		}
	}

	return 0;
}