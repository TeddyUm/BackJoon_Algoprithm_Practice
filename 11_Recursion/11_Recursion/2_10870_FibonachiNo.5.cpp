#include <iostream>
using namespace std;

int Fibo(int N)
{
	int answer;
	if (N == 0)
	{
		return 0;
	}
	else if (N == 1)
	{
		return 1;
	}
	else
		answer = Fibo(N - 1) + Fibo(N - 2);

	return answer;
}

int main(int argc, char* argv[])
{
	int N;
	cin >> N;

	cout << Fibo(N) << endl;

	return 0;
}