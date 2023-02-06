#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;

	cin >> N;
	while (N--)
	{
		int num;
		int priority;
		int trackNum;
		int ans = 0;
		pair<int, int> data;
		queue<pair<int, int>> qNum;
		priority_queue<int> pqNum;

		cin >> num >> trackNum;
		for (int i = 0; i < num; i++)
		{
			cin >> priority;
			data = make_pair(i, priority);
			qNum.push(data);
			pqNum.push(priority);
		}

		while (!qNum.empty())
		{
			int curIdx = qNum.front().first;
			int curPri = qNum.front().second;
			qNum.pop();

			if (pqNum.top() == curPri)
			{
				pqNum.pop();
				ans++;

				if (curIdx == trackNum)
				{
					cout << ans << "\n";
					break;
				}
			}
			else
			{
				qNum.push({ curIdx, curPri });
			}
		}
	}
}