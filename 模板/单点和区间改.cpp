#include <bits/stdc++.h>
#define MAXN 500010
#define lowbit(i) i & -i
using namespace std;

int n, m;

int  a[MAXN], tree[MAXN];
void add(int x, int a)
{
    for (int i = x; i <= n; i += lowbit(i)) tree[i] += a;
}
int sum(int x)
{
    int ans = 0;
    for (int i = x; i != 0; i -= lowbit(i)) ans += tree[i];
    return ans;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        add(i, a[i] - a[i - 1]);
    }
    for (int i = 1; i <= m; i++)
    {
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            int x, y, z;
            cin >> x >> y >> z;
            add(x, z);
            add(y + 1, -z);
        }
        else
        {
            int x;
            cin >> x;
            cout << sum(x) << endl;
        }
    }
    return 0;
}