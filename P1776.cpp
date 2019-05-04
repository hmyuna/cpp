#include <bits/stdc++.h>
using namespace std;
int _n, m, n = 0;
int v[10010], w[10010];
int f[40010];
int ans = -1;
int main()
{
    cin >> _n >> m;
    for (int i = 1; i <= _n; i++)
    {
        n = 0;
        int _v, _w, num;
        cin >> _v >> _w >> num;
        for (int j = 1; j <= num; j *= 2)
        {
            v[++n] = _v * j;
            w[n]   = _w * j;
            num -= j;
        }
        if (num > 0)
        {
            v[++n] = _v * num;
            w[n]   = _w * num;
        }

        for (int j = 1; j <= n; j++)
        {
            for (int k = m; k >= w[j]; k--)
            { f[k] = max(f[k], f[k - w[j]] + v[j]), ans = max(ans, f[k]); } }
    }
    cout << ans << endl;
    return 0;
}