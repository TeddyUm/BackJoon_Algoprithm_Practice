#include <iostream> 
#include <string> 
#include <vector>
using namespace std;

int main(void)
{
	int test;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		int num;
		string s;
		cin >> num >> s;
		vector<char> p;
		for (int j = 0; j < s.size(); j++)
		{
			for (int k = 0; k < num; k++)
			{
				p.push_back(s[j]);
			}
		}
		for (int i = 0; i < p.size(); i++)
		{
			cout << p[i];
		}
		cout << "\n";
		p.clear();
	}
}
