#include <bits/stdc++.h>
using namespace std;
long long b, p, k;
template <typename T>
long long Pow(T b, T p, T k)
{
    T result = 1;
    if (k == 1)
    {
        return 0;
    }
    long long _ = b, __ = p, ___ = k;
    result = 1;
    while (p != 0)
    {
        if (p % 2 == 1)
        {
            result = result * b % k;
        }
        p /= 2;
        b = b * b % k;
    }
    return result;
}
int main()
{
    cin >> b >> p >> k;
    printf("%d^%d mod %d=%d", b, p, k, Pow(b, p, k));
    return 0;
}