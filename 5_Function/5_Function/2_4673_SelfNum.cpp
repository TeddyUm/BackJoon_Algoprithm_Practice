#include <iostream>
#include <vector>

using namespace std;

bool num[10001];
int selfNumCheck(int n)
{
	int sum = n;
	while (n != 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int main()
{
	for (int i = 1; i < 10001; i++)
	{
		int idx = selfNumCheck(i);
		num[idx] = true;
	}

	for (int i = 1; i < 10001; i++)
	{
		if (!num[i])
			cout << i << endl;
	}
}
