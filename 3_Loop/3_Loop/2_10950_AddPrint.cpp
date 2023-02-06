#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    vector<int> vAns;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int a, b;
        int tempAns;
        cin >> a >> b;
        tempAns = a + b;
        vAns.push_back(tempAns);
    }

    for (int i = 0; i < vAns.size(); i++)
    {
        cout << vAns[i] << endl;
    }
}