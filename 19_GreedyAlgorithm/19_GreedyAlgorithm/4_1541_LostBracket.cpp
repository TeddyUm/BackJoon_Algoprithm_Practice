#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	string str;
	string tmp = "";
	cin >> str;

	int ans = 0;
	bool sub = false;

	for (int i = 0; i <= str.size(); i++)
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '\0')
		{
			if (sub)
				ans -= stoi(tmp);
			else
				ans += stoi(tmp);
			tmp = "";
			if (str[i] == '-')
				sub = true;
			continue;
		}
		else
		{
			tmp += str[i];
		}
	}

	cout << ans << endl;

	return 0;
}