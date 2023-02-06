#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
	int curHour = 0, curMinute = 0, cookingTime = 0;

	cin >> curHour >> curMinute;
	cin >> cookingTime;

	curMinute += cookingTime;
	while (curMinute >= 60)
	{
		curMinute -= 60;
		curHour += 1;
		if (curHour >= 24)
		{
			curHour -= 24;
		}
	}

	cout << curHour << " " << curMinute;

	return 0;
}