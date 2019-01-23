#include <bits/stdc++.h>
using namespace std;
int m, n;
long long acm(int m, int n)
{
    if (n == 0)
        return acm(m - 1, 1);
    else if (m == 0)
        return n + 1;
    else if (m == 1)
        return n + 2;
    else if (m == 2)
        return 2 * n + 3;
    else if (m == 3)
        return acm(m, n - 1) * 2 + 3;
}
int main()
{
    cin >> m >> n;
    cout << acm(m, n) << endl;
    return 0;
}

