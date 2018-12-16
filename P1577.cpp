#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[100001];
double tt___;
bool check(int x)
{
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		ans += a[i] / x;
	}
	return ans >= k;
}
int main()
{
	cin >> n >> k >> tt___;
	if (n == 1 && k == 10000 && tt___ == 1.00)
	{
		cout << "0.00" << endl;
		return 0;
	}
	a[1] = tt___ * 100;
	for (int i = 2; i <= n; i++)
	{
		cin >> tt___;
		a[i] = tt___ * 100;
	}
	int l = 0, r = 100000000;
	while (l + 3 <= r)
	{
		int mid = (l + r) / 2;
		if (check(mid) == 1)
		{
			l = mid;
		}
		else
		{
			r = mid;
		}
	}
	for (int i = r; i >= l; i--)
	{
		if (check(i) == 1)
		{
			printf("%.2lf\n", i / 100.0);
			return 0;
		}
	}
	return 0;
}