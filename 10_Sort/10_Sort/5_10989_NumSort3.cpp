#include <iostream>
using namespace std;

int mycount[10000];
int N;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; ++i)
	{
		int num;
		scanf("%d", &num);

		// 0부터 시작이므로 num-1 인덱스를 1 추가 한다.

		mycount[num - 1]++;
	}

	for (int i = 0; i < 10000; ++i) {

		// 개수가 0 이상이면 개수만큼 i+1 출력 해준다.

		if (mycount[i] != 0)
		{
			for (int j = 0; j < mycount[i]; ++j)
			{
				printf("%d \n", i + 1);
			}
		}
	}

	return 0;

}