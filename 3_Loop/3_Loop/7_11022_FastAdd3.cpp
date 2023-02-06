#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N = 0;
    int ans = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int A = 0;
        int B = 0;
        cin >> A >> B;

        if (A < 0)
            A = 0;
        if (B > 10)
            B = 10;

        ans = A + B;
        cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << ans << "\n";
    }
}