#include <bits/stdc++.h>
using namespace std;
struct SEG
{
    int l, r;
    long long val, t;
};
long long ans = 0;
SEG p[400001];
long long a[100001], sum[100001];
int n, m;
void CREAT(int u, int l, int r)
{
    p[u].l = l;
    p[u].r = r;
    p[u].val = 0;
    p[u].t = 0;
    if (l >= r)
        return;
    int m = (l + r) / 2;
    CREAT(u * 2, l, m);
    CREAT(u * 2 + 1, m + 1, r);
}
void MODIFY(int u, int l, int r, long long dt)
{
    if (p[u].l == l && p[u].r == r)
    {
        p[u].t += dt;
        return;
    }
    p[u].val += dt * (r - l + 1);
    int m = (p[u].l + p[u].r) / 2;
    if (r <= m)
    {
        MODIFY(u * 2, l, r, dt);
    }
    else if (l > m)
    {
        MODIFY(u * 2 + 1, l, r, dt);
    }
    else
    {
        MODIFY(u * 2, l, m, dt);
        MODIFY(u * 2 + 1, m + 1, r, dt);
    }
}
void QUERY(int u, int l, int r)
{
    p[u].val += p[u].t * (p[u].r - p[u].l + 1);
    if (p[u].l < p[u].r)
    {
        p[u * 2].t += p[u].t;
        p[u * 2 + 1].t += p[u].t;
    }
    p[u].t = 0;
    if (l == p[u].l && r == p[u].r)
    {
        ans += p[u].val;
        return;
    }
    int m = (p[u].l + p[u].r) / 2;
    if (r <= m)
    {
        QUERY(u * 2, l, r);
    }
    else if (l > m)
    {
        QUERY(u * 2 + 1, l, r);
    }
    else
    {
        QUERY(u * 2, l, m);
        QUERY(u * 2 + 1, m + 1, r);
    }
}
int main()
{
    cin >> n >> m;
    memset(sum, 0, sizeof(sum));
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = a[i] + sum[i - 1];
    }
    CREAT(1, 1, n);
    for (int i = 1; i <= m; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x, y, z;
            cin >> x >> y >> z;
            MODIFY(1, x, y, z);
        }
        else
        {
            int x, y;
            cin >> x >> y;
            ans = 0;
            QUERY(1, x, y);
            cout << ans + sum[y] - sum[x - 1] << endl;
        }
    }
    return 0;
}