#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int time = 0;
	int ans = 0;
	vector<int> vPerson;

	while (N--)
	{
		int tempTime;
		cin >> tempTime;
		vPerson.push_back(tempTime);
	}

	sort(vPerson.begin(), vPerson.end());

	for (int i = 0; i < vPerson.size(); i++)
	{
		time += vPerson[i];
		ans += time;
	}

	cout << ans << "\n";
}