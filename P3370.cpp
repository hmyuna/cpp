#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int						   P = 10000019, n, f;
int						   head[10000019], nxt[1000001], cnt = 0;
ull						   value[1000001];
int						   base = 131;
ull						   mod  = 212370440130137957ll;
int						   Hash(string s)
{
	int len = s.length();
	ull ans = 0;
	for (int i = 0; i < len; i++) ans = (ans * base + (ull)s[i]) % mod + P;
	return ans;
}
int _cnt = 0;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		f = 1;
		string _;
		cin >> _;
		ull m = Hash(_);
		int x = m % P;
		for (int p = head[x]; p != 0; p = nxt[p])
		{
			if (value[p] == m)
			{
				_cnt++;
				f = 0;
				break;
			}
		}
		if (f)
		{
			cnt++;
			value[cnt] = m;
			nxt[cnt]   = head[x];
			head[x]	= cnt;
		}
	}
    cout << n - _cnt << endl;
	return 0;
}
