#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	deque<int> dqNum;
	bool esc = false;
	int ans = 0;
	int temp = 0;

	for (int i = 1; i <= N; i++)
	{
		dqNum.push_front(i);
	}

	while (!esc)
	{
		if (dqNum.size() > 1)
		{
			dqNum.pop_back();
			dqNum.push_front(dqNum.back());
			dqNum.pop_back();
		}
		else if (dqNum.size() == 1)
		{
			ans = dqNum.front();
			esc = true;
		}
	}

	cout << ans << endl;
}