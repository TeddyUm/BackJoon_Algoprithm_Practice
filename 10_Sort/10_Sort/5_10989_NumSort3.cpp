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

		// 0���� �����̹Ƿ� num-1 �ε����� 1 �߰� �Ѵ�.

		mycount[num - 1]++;
	}

	for (int i = 0; i < 10000; ++i) {

		// ������ 0 �̻��̸� ������ŭ i+1 ��� ���ش�.

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