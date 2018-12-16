#include <bits/stdc++.h>
using namespace std;
long long n, m, cnt, ans;
string s[51];
int main()
{
	cin >> n >> m;
	m /= 2;
	for (int i = 1; i <= n; i++)
		cin >> s[i];
	for (int i = n; i >= 1; i--)
	{
		cnt *= 2;
		if (s[i] == "halfplus")
			cnt += 1;
		ans += cnt;
	}
	ans *= m;
	cout << ans << endl;
	return 0;
}