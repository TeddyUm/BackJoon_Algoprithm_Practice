#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	int idx;
	cin >> N >> idx;

	queue<int> qNum;

	for (int i = 1; i <= N; i++)
	{
		qNum.push(i);
	}
	cout << "<";
	while (qNum.size())
	{
		if (qNum.size() == 1)
		{
			cout << qNum.front() << ">";
			qNum.pop();
			break;
		}
		for (int i = 1; i < idx; i++)
		{
			qNum.push(qNum.front());
			qNum.pop();
		}
		cout << qNum.front() << ", ";
		qNum.pop();
	}
	cout << "\n";
}