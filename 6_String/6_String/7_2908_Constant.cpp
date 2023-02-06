#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;

	int ans1 = 0;
	int ans2 = 0;

	cin >> num1 >> num2;

	while (num1 > 0)
	{
		ans1 += num1 % 10;
		num1 /= 10;
		ans1 *= 10;
	}
	while (num2 > 0)
	{
		ans2 += num2 % 10;
		num2 /= 10;
		ans2 *= 10;
	}

	ans1 /= 10;
	ans2 /= 10;

	if (ans1 > ans2)
	{
		cout << ans1;
	}
	else
	{
		cout << ans2;
	}

	return 0;
}