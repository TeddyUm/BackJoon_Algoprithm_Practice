#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
	if (p1.second != p2.second)
		return p1.second < p2.second;
	return p1.first < p2.first;
}

int main()
{
	int N;
	cin >> N;

	vector<pair<int, int>> v_Coord(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v_Coord[i].first >> v_Coord[i].second;
	}

	sort(v_Coord.begin(), v_Coord.end(), cmp);

	for (int i = 0; i < N; i++)
	{
		cout << v_Coord[i].first << " " << v_Coord[i].second << "\n";
	}

	return 0;
}