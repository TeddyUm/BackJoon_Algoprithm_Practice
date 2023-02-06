#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int H;
    int M;

    cin >> H;
    cin >> M;

    M -= 45;
    if (M < 0)
    {
        int temp;
        temp = 60 + M;
        M = temp;

        if (H != 0)
        {
            H -= 1;
        }
        else
        {
            H = 23;
        }
    }

    cout << H << " " << M;
}