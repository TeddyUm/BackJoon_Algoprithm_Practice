#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	vector<int> Num;
	int count = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		Num.push_back(temp);
	}
	sort(Num.begin(), Num.end());
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int temp;
		cin >> temp;
		cout << upper_bound(Num.begin(), Num.end(), temp) - lower_bound(Num.begin(), Num.end(), temp) << "\n";
	}
}