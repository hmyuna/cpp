#include <bits/stdc++.h>
using namespace std;
long long a, n, m;
int main()
{
    cin >> n >> m >> a;
    cout << (long long)((n - 1) / a + 1) * (long long)((m - 1) / a + 1) << endl;
    return 0;
}