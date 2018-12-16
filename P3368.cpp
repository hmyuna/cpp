#include <bits/stdc++.h>
using namespace std;
int n, m, tree[500001];
int a[1000001];
int lowbit(int x)
{
	return x & (-x);
}
void update(int x, int k)
{
	for (; x <= n; x += lowbit(x))
	{
		tree[x] += k;
	}
	return;
}
int query(int x)
{
	int ans = 0;
	for (; x; x -= lowbit(x))
	{
		ans += tree[x];
	}
	return ans;
}
int main(int argc, char const *argv[])
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		update(i, a[i] - a[i - 1]);
	}
	for (int i = 1; i <= m; i++)
	{
		int t;
		cin >> t;
		if (t == 1)
		{
			int x, y, k;
			cin >> x >> y >> k;
			update(x, k);
			update(y + 1, -k);
		}
		else
		{
			int x;
			cin >> x;
			cout << query(x) << endl;
		}
	}
	return 0;
}
