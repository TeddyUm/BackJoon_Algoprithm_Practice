#include <vector>
long long sum(std::vector<int>& a) {
    long long temp = 0;

    for (int i = 0; i < a.size(); i++)
    {
        temp += a[i];
    }

    return temp;
}
