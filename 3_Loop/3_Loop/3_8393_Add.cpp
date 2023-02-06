#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num = 0;
    int ans = 0;
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        ans += i;
    }
    cout << ans;
}