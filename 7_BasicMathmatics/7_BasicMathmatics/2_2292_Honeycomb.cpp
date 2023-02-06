#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N = 0;
	int cur = 1;
	int ans = 1;
	int inc = 6;
	cin >> N;

	while (1)
	{
		if (N <= cur)
			break;
		ans++;
		cur += inc;
		inc += 6;
	}

	cout << ans << endl;
}
