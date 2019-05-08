#include <bits/stdc++.h>
using namespace std;
int n, a[201], f[201][201], _f[201][201];  // f -> max _f -> min
int ans_max = -1, ans_min = INT_MAX;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i + n] = a[i];
    }
    int m = 2 * n - 1;
    for (int i = 1; i <= m; i++)
    {
        f[i][i]  = 0;
        _f[i][i] = 0;
    }
    for (int i = m; i >= 1; i--)
        for (int j = i + 1; j <= m; j++)
        {
            _f[i][j] = 0x3f3f3f3f;
            for (int k = i; k + 1 <= j; k++)
                f[i][j]  = max(f[i][j], f[i][k] + f[k + 1][j]),
                _f[i][j] = min(_f[i][j], _f[i][k] + _f[k + 1][j]);
            for (int k = i; k <= j; k++)
            {
                f[i][j] += a[k];
                _f[i][j] += a[k];
            }
        }
    for (int i = 1; i <= n; i++)
        ans_max = max(f[i][i + n - 1], ans_max),
        ans_min = min(_f[i][i + n - 1], ans_min);

    cout << ans_min << endl << ans_max << endl;
    return 0;
}