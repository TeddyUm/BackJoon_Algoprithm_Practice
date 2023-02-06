#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int N = 0;
	int count = 0;
	cin >> A >> B >> N;

	count = (N - B - 1) / (A - B) + 1;

	cout << count << endl;
}
