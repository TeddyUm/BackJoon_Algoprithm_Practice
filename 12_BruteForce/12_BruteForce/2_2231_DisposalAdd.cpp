#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int findCreator(int _N)
{
	int creator = 1; //1부터 시작
	while (1)
	{
		int copy = creator;
		int sum = creator; //합은 생성자와 생성자의 각 자리 숫자의 합

		while (copy) //각 자리 숫자의 합을 구한다
		{
			sum += copy % 10;
			copy /= 10;
		}
		//조건 성립시 혹은 생성자가 없을 경우
		if (creator == _N || sum == _N)
			break;
		creator++;
	}

	return creator;
}

int main(void)
{
	int N;
	cin >> N;
	int result = findCreator(N);
	if (result == N)
		cout << 0 << endl;
	else
		cout << result << endl;
	return 0;
}
