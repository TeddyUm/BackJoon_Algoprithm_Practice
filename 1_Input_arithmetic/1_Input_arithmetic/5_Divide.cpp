#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double sum1;
    long double sum2;
    cin >> sum1 >> sum2;
    cout << setprecision(10) << sum1 / sum2;
}