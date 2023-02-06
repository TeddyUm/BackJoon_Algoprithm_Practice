#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N = 0;
	int count = 0;
	cin >> N;

	while (N > 0)
	{
		count++;
		N -= count;
	}

	if (count % 2 == 0)
		cout << count + N << "/" << 1 + (-N);
	else
	{
		cout << 1 + (-N) << "/" << count + N;
	}
}
