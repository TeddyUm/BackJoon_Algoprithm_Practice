#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    for (int i = 1; i < 10; i++)
    {
        int temp = number;
        temp = i * number;
        cout << number << " * " << i << " = " << temp << "\n";
    }
}