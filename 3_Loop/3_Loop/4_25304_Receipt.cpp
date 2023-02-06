#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
	int stuffNumber = 0;
	int totalPrice = 0;
	int curPrice = 0;

	cin >> totalPrice >> stuffNumber;

	for (int i = 0; i < stuffNumber; i++)
	{
		int price;
		int num;

		cin >> price >> num;
		curPrice += (price * num);
	}

	if (totalPrice == curPrice)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}