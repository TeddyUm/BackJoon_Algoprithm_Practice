#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	pair<int, int> p[50];

	for (int i = 0; i < t; i++)
	{
		int weight, tall;
		cin >> weight >> tall;
		p[i].first = weight;
		p[i].second = tall;
	}

	for (int i = 0; i < t; i++)
	{
		int count = 1;
		for (int j = 0; j < t; j++)
		{
			if (i != j && p[i].first < p[j].first && p[i].second < p[j].second)
			{
				count++;
			}
		}
		cout << count << " ";
	}


	return 0;
}
