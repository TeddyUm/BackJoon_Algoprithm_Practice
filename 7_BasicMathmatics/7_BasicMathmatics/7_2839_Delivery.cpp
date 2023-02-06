#include <iostream>
using namespace std;

int main()
{
	int N;
	int num_5 = -1;
	int num_3 = 0;
	cin >> N;

	if (N % 5 == 0)
	{
		num_5 = N / 5;
		cout << num_5;
	}
	else
	{
		for (int i = N / 5; i >= 0; i--)
		{
			if ((N - 5 * i) % 3 == 0)
			{
				num_5 = i;
				num_3 = (N - 5 * i) / 3;
				break;
			}
		}
		cout << num_5 + num_3 << endl;
	}
}
