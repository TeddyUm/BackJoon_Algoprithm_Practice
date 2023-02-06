#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	int count = 0;
	int x = 666;
	string str;

	cin >> n;

	while (1)
	{
		str = to_string(x);
		for (int i = 0; i < str.size() - 2; i++)
		{
			if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6')
			{
				count++;
				break;
			}
		}

		if (n == count)
			break;

		x++;
	}

	cout << x << endl;

}