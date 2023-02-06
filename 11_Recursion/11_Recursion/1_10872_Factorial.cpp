#include <iostream>
using namespace std;

int factorial(int N)
{
	int answer;
	int counter = 0;
	if (N == 0)
	{
		return 1;
	}
	else
		return N * factorial(N - 1);
}

int main(int argc, char* argv[])
{
	int N;
	cin >> N;

	cout << factorial(N) << endl;

	return 0;
}