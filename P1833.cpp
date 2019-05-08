#include <bits/stdc++.h>
using namespace std;
int h1, min1, h2, min2;
int _n, m, w[10001], v[10001], f[10001];
int main()
{
    scanf("%d:%d %d:%d %d", &h1, &min1, &h2, &min2, &_n);
    m = (h2 - h1) * 60 + min2 - min1;
    for (int i = 1; i <= _n; i++)
    {
        int _w, _v, _p, n = 0;
        scanf("%d %d %d", &_w, &_v, &_p);
        if (_p == 0) _p = int(m / _w) + 1;
        for (int j = 1; j <= _p; j *= 2)
        {
            w[++n] = _w * j;
            v[n]   = _v * j;
            _p -= j;
        }
        if (_p > 0)
        {
            w[++n] = _w * _p;
            v[n]   = _v * _p;
        }
        for (int j = 1; j <= n; j++)
            for (int k = m; k >= w[j]; k--)
                f[k] = max(f[k], f[k - w[j]] + v[j]);
    }
    cout << f[m] << endl;
    return 0;
}