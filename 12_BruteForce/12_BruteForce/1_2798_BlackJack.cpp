#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int cardNum;
	int goal;
	int closestNum = 0;
	int diff = 1000000;

	vector<int> vNum;

	cin >> cardNum;
	cin >> goal;

	for (int i = 0; i < cardNum; i++)
	{
		int temp;
		cin >> temp;
		vNum.push_back(temp);
	}

	for (int i = 0; i < vNum.size(); i++)
	{
		for (int j = 0; j < vNum.size(); j++)
		{
			for (int k = 0; k < vNum.size(); k++)
			{
				if (i != j && i != k && k != j)
				{
					int tempNum;
					int tempdiff;
					tempNum = vNum[i] + vNum[j] + vNum[k];
					tempdiff = goal - tempNum;

					if (tempdiff >= 0 && tempdiff < diff)
					{
						diff = tempdiff;
						closestNum = tempNum;
					}
				}
			}
		}
	}

	cout << closestNum << endl;
}
