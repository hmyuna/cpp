#include <bits/stdc++.h>
using namespace std;
int n, m, ans = 100000000;
int a[3001], sum[3001];
int main()
{
	cin >> n >> m;
	sum[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	for (int i = m; i <= n; i++) {
		ans = min(ans, sum[i] - sum[i - m]);
	}
	cout << ans << endl;
	return 0;
}
