#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>

using namespace std;

bool cmp(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	return
		a.length() < b.length();

}

int main()
{
	int N;
	cin >> N;

	vector<string> v_Str;
	string temp;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		v_Str.push_back(str);
	}

	sort(v_Str.begin(), v_Str.end(), cmp);

	for (int i = 0; i < N; i++)
	{

		if (temp == v_Str[i])
			continue;
		cout << v_Str[i] << '\n';
		temp = v_Str[i];
	}
}