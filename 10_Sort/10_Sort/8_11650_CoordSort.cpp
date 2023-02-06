#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<pair<int, int>> v_Coord(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v_Coord[i].first >> v_Coord[i].second;
	}

	sort(v_Coord.begin(), v_Coord.end());

	for (int i = 0; i < N; i++)
	{
		cout << v_Coord[i].first << " " << v_Coord[i].second << "\n";
	}

	return 0;
}