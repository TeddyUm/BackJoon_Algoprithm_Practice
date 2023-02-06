#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>

using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b)
{
	if (a.first < b.first)
		return true;

	return false;
}

int main()
{
	int N;
	cin >> N;
	int num = 0;
	vector<pair<int, string>> v_Inf;

	for (int i = 0; i < N; i++)
	{
		int num;
		string str;
		cin >> num >> str;
		v_Inf.push_back(make_pair(num, str));
	}

	stable_sort(v_Inf.begin(), v_Inf.end(), cmp);

	for (int i = 0; i < N; i++)
	{
		cout << v_Inf[i].first << " " << v_Inf[i].second << "\n";
	}
}