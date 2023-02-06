#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int C;
	vector<float> vAvarageRate;
	cin >> C;
	for (int i = 0; i < C; i++)
	{
		int N = 0;
		float sum = 0;
		float avarage = 0;
		float rate = 0;
		float count = 0;
		vector<float> vScore;

		cin >> N;

		for (int j = 0; j < N; j++)
		{
			int score;
			cin >> score;
			vScore.push_back(score);
			sum += score;
		}

		avarage = sum / N;

		for (int k = 0; k < N; k++)
		{
			if (vScore[k] > avarage)
				count++;
		}

		rate = count / N * 100;
		vAvarageRate.push_back(rate);
	}

	for (int i = 0; i < C; i++)
	{
		cout << fixed;
		cout.precision(3);
		cout << vAvarageRate[i] << "%" << endl;
	}

	return 0;
}
