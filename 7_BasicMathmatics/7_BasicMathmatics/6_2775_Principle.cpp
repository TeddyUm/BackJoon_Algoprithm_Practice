#include <iostream>

using namespace std;

int main()
{
	int D[15][15] = { 0, };
	int T;
	cin >> T;

	while (T--)
	{
		int n, m;
		cin >> n >> m;

		for (int i = 1; i <= m; i++)
		{
			D[0][i] = i;
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				D[i][j] = D[i][j - 1] + D[i - 1][j];
			}

		}
		cout << D[n][m] << endl;
	}
}