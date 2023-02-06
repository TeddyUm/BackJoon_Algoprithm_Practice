#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int num = 0;
    int ans = 0;
    vector<int> vAns;
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        int a = 0;
        int b = 0;
        cin >> a >> b;
        ans = a + b;
        vAns.push_back(ans);
    }

    for (int i = 0; i < num; i++)
    {
        cout << vAns[i] << "\n";
    }
}