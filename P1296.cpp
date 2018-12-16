#include <bits/stdc++.h>
using namespace std;
int a[1000001], n, f, i, j, k;
int main()
{
    cin >> n >> f;
    for (i = 1; i <= n; ++i)
        cin >> a[i];
    k = 0;
    sort(a + 1, a + (n + 1));
    for (i = 1; i < n; ++i)
        for (j = i + 1; j <= n; ++j)
        {
            if (a[j] - a[i] > f)
                break;
            ++k;
        }
    cout << k;
    return 0;
}
