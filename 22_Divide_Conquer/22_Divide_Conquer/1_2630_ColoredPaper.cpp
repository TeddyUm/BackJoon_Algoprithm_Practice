#include <iostream>
#include <string>

using namespace std;

int map[129][129];
int white = 0;
int blue = 0;

void DivConq(int n, int startX, int startY)
{
	int color = map[startX][startY];
	for (int i = startX; i < startX + n; i++)
	{
		for (int j = startY; j < startY + n; j++)
		{
			if (map[i][j] != color)
			{
				DivConq(n / 2, startX, startY);
				DivConq(n / 2, startX + n / 2, startY);
				DivConq(n / 2, startX, startY + n / 2);
				DivConq(n / 2, startX + n / 2, startY + n / 2);
				return;
			}
		}
	}

	if (color == 1)
		blue++;
	else
		white++;
}


int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}

	DivConq(N, 0, 0);
	cout << white << endl << blue << endl;
}