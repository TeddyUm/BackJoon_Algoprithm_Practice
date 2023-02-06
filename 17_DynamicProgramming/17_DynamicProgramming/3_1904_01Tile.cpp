#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int N;
	vector<long long> vTiles;

	cin >> N;

	vTiles.push_back(0);
	vTiles.push_back(1);
	vTiles.push_back(2);

	for (int i = 3; i <= N; i++)
	{
		vTiles.push_back((vTiles[i - 1] + vTiles[i - 2]) % 15746);
	}

	cout << vTiles[N] << endl;

	return 0;
}