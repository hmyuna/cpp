#include <bits/stdc++.h>
using namespace std;
struct P
{
	int x, y, w, t;
};
P	p[401];
int  n, m, k, _ = 1;
bool cmp(P a, P b)
{
	return a.w > b.w;
}
int ans = 0;
int main()
{
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			int T;
			cin >> T;
			if (T > 0)
			{
				p[_].x = i;
				p[_].y = j;
				p[_].t = 0;
				p[_].w = T;
				_++;
			}
		}
	}
	sort(p + 1, p + 1 + _, cmp);
	for (int i = 1; i <= _; i++)
	{
		if (i == 1)
			p[i].t = p[i].x + 1;
		else
			p[i].t = p[i - 1].t + abs(p[i].x - p[i - 1].x) +
					 abs(p[i].y - p[i - 1].y) + 1;
		if (p[i].t + p[i].x <= k) ans += p[i].w;
	}
	cout << ans << endl;
	return 0;
}