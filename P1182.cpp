#include <bits/stdc++.h>
using namespace std;
long long n, M, a[100001];
long long l = -1, r;
int check(int T)
{
	int sum = 0, cnt = 1;
	for (int i = 1; i <= n; i++)
	{
		if (sum + a[i] <= T)
		{
			sum += a[i];
		}
		else
		{
			cnt++;
			sum = a[i];
		}
	}
	return cnt;
}
int main()
{
	cin >> n >> M;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		l = max(a[i], l);
		r += a[i];
	}
	while (l + 3 < r)
	{
		int m = (l + r) / 2;
		if (check(m) <= M)
		{
			r = m;
		}
		else
		{
			l = m;
		}
	}
	for (int i = l; i <= r; i++)
	{
		if (check(i) <= M)
		{
			cout << i << endl;
			return 0;
		}
	}
}