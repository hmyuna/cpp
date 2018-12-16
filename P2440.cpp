#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[100001], cnt = 0, l, r;
int check(int m)
{
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		cnt += a[i] / m;
	}
	return cnt;
}
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		cnt += a[i];
	}
	if (cnt < k)
	{
		cout << "0" << endl;
		return 0;
	}
	sort(a + 1, a + 1 + n);
	l = 1, r = cnt;
	while (l + 3 < r)
	{
		int m = (l + r) >> 1;
		if (check(m) < k)
		{
			r = m;
		}
		else
		{
			l = m;
		}
	}
	for(int i = r; i >= l; i--){
		if(check(i) >= k){
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}