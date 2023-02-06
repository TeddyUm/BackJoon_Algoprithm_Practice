#include <iostream>
using namespace std;

void draw(int x, int y, int size)
{
	if ((x / size) % 3 == 1 && (y / size) % 3 == 1)
	{
		cout << " ";
	}
	else
	{
		if (size / 3 == 0)
		{
			cout << "*";
		}
		else
		{
			draw(x, y, size / 3);
		}
	}
}

int main(int argc, char* argv[])
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			draw(i, j, N);
		}
		cout << endl;
	}
	return 0;
}