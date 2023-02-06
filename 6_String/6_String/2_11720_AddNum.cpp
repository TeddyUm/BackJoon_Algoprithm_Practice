#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	int N = 0;
	string str;
	int sum = 0;
	cin >> N;
	cin >> str;
	vector<int> vAns;

	for (int i = 0; i < N; i++)
	{
		sum += str[i] - '0';
	}

	cout << sum;

}