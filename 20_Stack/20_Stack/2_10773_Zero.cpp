#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

int main() {
	int n;
	int size = 0;
	int ans = 0;
	stack<int> sNum;

	cin >> n;

	while (n--)
	{
		int temp;
		cin >> temp;

		if (temp == 0)
			sNum.pop();
		else
			sNum.push(temp);
	}

	size = sNum.size();

	for (int i = 0; i < size; i++)
	{
		ans += sNum.top();
		sNum.pop();
	}

	cout << ans << "\n";

	return 0;
}