#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int dis1, dis2;
} d[100005];
bool cmp(Node x, Node y)
{
	return x.dis1 < y.dis1;
}
int n, X1, Y1, X2, Y2;
int r2  = 0;
int main()
{
	cin >> X1 >> Y1 >> X2 >> Y2 >> n;
	for (int i = 1; i <= n; i++) {
		int x, y;
		cin >> x >> y;
		d[i].dis1 = (x - X1) * (x - X1) + (y - Y1) * (y - Y1);
		d[i].dis2 = (x - X2) * (x - X2) + (y - Y2) * (y - Y2);
	}
	sort(d + 1, d + n + 1, cmp);
	int ans = d[n].dis1;
	for (int i = n - 1; i >= 1; i--) {
		if (r2 < d[i + 1].dis2)
			r2 = d[i + 1].dis2;
		ans = min(ans, d[i].dis1 + r2);
	}
	cout << ans << endl;
	return 0;
}
