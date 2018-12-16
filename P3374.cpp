#include <bits/stdc++.h>
using namespace std;
int n, m, tree[500001];
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
		int a;
		cin >> a;
		update(i, a);
	}
	for (int i = 1; i <= m; i++)
	{
		int t;
		cin >> t;
		if (t == 1)
		{
			int x, k;
			cin >> x >> k;
			update(x, k);
		}
		else
		{
			int x, y;
			cin >> x >> y;
			cout << query(y) - query(x - 1) << endl;
		}
	}
	return 0;
}
