#include <iostream> 
#include <string> 
using namespace std;

int main(void)
{
	string str;
	cin >> str;
	const int ALPHA = 26;
	int alphabet[ALPHA];
	fill_n(alphabet, ALPHA, -1);
	for (int i = 0; i < str.length(); i++)
		if (alphabet[str[i] - 'a'] == -1)
		{
			alphabet[str[i] - 'a'] = i;
		}
	for (int i = 0; i < ALPHA; i++)
	{
		cout << alphabet[i] << " ";
	}
	return 0;
}
