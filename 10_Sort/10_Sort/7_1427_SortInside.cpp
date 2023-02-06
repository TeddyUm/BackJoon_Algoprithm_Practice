#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> vNum;
	vector<int> vAns;

	while (N)
	{
		int temp;
		temp = N % 10;
		N /= 10;

		vNum.push_back(temp);
	}

	sort(vNum.begin(), vNum.end());

	for (int i = vNum.size() - 1; i >= 0; i--)
	{
		vAns.push_back(vNum[i]);
	}

	for (int i = 0; i < vAns.size(); i++)
	{
		cout << vAns[i];
	}

	return 0;
}