#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N = 0;
    int max = 0;
    vector<int> vNum;
    vector<int> vAns;

    cin >> N >> max;
    for (int i = 0; i < N; i++)
    {
        int tempNum = 0;
        cin >> tempNum;
        vNum.push_back(tempNum);
    }
    for (int i = 0; i < N; i++)
    {
        if (vNum[i] < max)
        {
            cout << vNum[i] << " ";
        }
    }
}