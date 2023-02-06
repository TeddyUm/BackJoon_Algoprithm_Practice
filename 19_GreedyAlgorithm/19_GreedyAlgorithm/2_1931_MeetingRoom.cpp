#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int > >vec;

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int start, end;
		cin >> start >> end;
		vec.push_back({ end,start });
	}


	sort(vec.begin(), vec.end());

	int last = 0;
	int count = 0;

	for (int i = 0; i < vec.size(); i++)
	{
		int st = vec[i].second;
		int ed = vec[i].first;

		if (last <= st)
		{
			last = ed;
			count++;
		}
	}

	cout << count << endl;


}