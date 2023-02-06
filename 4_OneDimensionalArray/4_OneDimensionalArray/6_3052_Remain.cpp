#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	int num[10];
	int counter = 0;
	int numArr[10] = { 0 };
	set<int> setNum;

	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
		numArr[i] = num[i] % 42;
		setNum.insert(numArr[i]);
	}

	cout << setNum.size();

	return 0;
}
