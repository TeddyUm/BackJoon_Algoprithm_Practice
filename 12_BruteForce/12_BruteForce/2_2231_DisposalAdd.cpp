#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int findCreator(int _N)
{
	int creator = 1; //1���� ����
	while (1)
	{
		int copy = creator;
		int sum = creator; //���� �����ڿ� �������� �� �ڸ� ������ ��

		while (copy) //�� �ڸ� ������ ���� ���Ѵ�
		{
			sum += copy % 10;
			copy /= 10;
		}
		//���� ������ Ȥ�� �����ڰ� ���� ���
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
