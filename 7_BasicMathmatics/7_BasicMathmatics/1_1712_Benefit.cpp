#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int cost;
	cost = C - B;
	if (cost <= 0) cout << "-1" << endl;
	else cout << A / cost + 1;
}