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
	while (N--)
	{
		int temp;
		cin >> temp;
		vNum.push_back(temp);
	}

	for (int i = vNum.size() - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (vNum[j] > vNum[j + 1])
			{
				swap(vNum[j], vNum[j + 1]);
			}
		}
	}

	for (int i = 0; i < vNum.size(); i++)
	{
		cout << vNum[i] << endl;
	}

	return 0;
}