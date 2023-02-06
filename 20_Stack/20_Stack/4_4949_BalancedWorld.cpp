#include <iostream>
#include <stack>
#include <string>
using namespace std;
string solution(string str)
{
	int size = str.length();
	bool no = false;
	//[] , () 담을 스택
	stack<char> s;
	for (int i = 0; i < size; i++)
	{
		if (str[i] == '[' || str[i] == '(') s.push(str[i]);
		else if (str[i] == ']')
		{
			//비어있지 않고, top값이 [여야 함
			if (!s.empty() && s.top() == '[') s.pop();
			else
			{
				no = true;
				break;
			}
		}
		else if (str[i] == ')')
		{
			//비어있지 않고, top값이 (여야 함
			if (!s.empty() && s.top() == '(') s.pop();
			else
			{
				no = true;
				break;
			}
		}
	}
	return (!no && s.empty()) ? "yes" : "no";
}
int main()
{
	string input = "";
	while (1)
	{
		getline(cin, input);
		if (input == ".") break;
		else cout << solution(input) << endl;
	}
	return 0;
}