#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
    int alpha[26] = { 0, };
    int cnt = 0;
    string input;
    // ascii code : Upper 65~90, lower 97~122

    cin >> input;

    // repeat char check
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] < 97)
            alpha[input[i] - 65]++; //Upper
        else
            alpha[input[i] - 97]++; //Lower
    }

    int max = 0, max_indx = 0;

    for (int i = 0; i < 26; i++)
    {
        if (max < alpha[i]) {
            max = alpha[i];
            max_indx = i;
        }
    }
    //Using Alpabet check
    for (int i = 0; i < 26; i++)
    {
        if (max == alpha[i]) cnt++;
    }
    //Answer print
    if (cnt > 1)
        cout << "?";
    else
        cout << (char)(max_indx + 65);

    return 0;
}