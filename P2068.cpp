#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct SEG
{
    int l, r;
    ll val, t;
} p[400001];
int n, m;
ll sum[100001];
ll a[100001];
ll ans = 0;
void CREAT(int u, int l, int r)
{
    p[u].l = l, p[u].r = r, p[u].val = 0, p[u].t = 0;
    if (l >= r)
        return;
    int m = (l + r) >> 1;
    CREAT(u << 1, l, m);
    CREAT((u << 1) + 1, m + 1, r);
}
void MODIFY(int u, int l, int r, ll dt)
{
    if (p[u].l == l && p[u].r == r)
    {
        p[u].t += dt;
        return;
    }
    p[u].val += dt * (r - l + 1);
    int m = (p[u].l + p[u].r) >> 1;
    if (r <= m)
    {
        MODIFY(u << 1, l, r, dt);
    }
    else if (l > m)
    {
        MODIFY((u << 1) + 1, l, r, dt);
    }
    else
    {
        MODIFY(u << 1, l, m, dt);
        MODIFY((u << 1) + 1, m + 1, r, dt);
    }
}
void QUERY(int u, int l, int r)
{
    p[u].val += p[u].t * (p[u].r - p[u].l + 1);
    if (p[u].l < p[u].r)
    {
        p[(u << 1)].t += p[u].t;
        p[(u << 1) + 1].t += p[u].t;
    }
    p[u].t = 0;
    if (p[u].l == l && p[u].r == r)
    {
        ans += p[u].val;
        return;
    }
    int m = (p[u].l + p[u].r) >> 1;
    if (r <= m)
    {
        QUERY(u << 1, l, r);
    }
    else if (l > m)
    {
        QUERY((u << 1) + 1, l, r);
    }
    else
    {
        QUERY(u << 1, l, m);
        QUERY((u << 1) + 1, m + 1, r);
    }
}
int main()
{
    cin >> n >> m;
    memset(sum, 0, sizeof(sum));
    CREAT(1, 1, n);
    for (int i = 1; i <= m; i++)
    {
        char type;
        cin >> type;
        if (type == 'x')
        {
            int x, y;
            cin >> x >> y;
            MODIFY(1, x, x, y);
        }
        else
        {
            int x, y;
            ans = 0;
            cin >> x >> y;
            QUERY(1, x, y);
            cout << ans + sum[y] - sum[x - 1] << endl;
        }
    }
    return 0;
}