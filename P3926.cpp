#include <bits/stdc++.h>
using namespace std;
long long a, c, p, q, r, x, t;
int main()
{
	cin >> a >> c >> p >> q >> r >> x;
	if (a < c)
	{
		t = min(x, p * (c - a));
		x -= t;
		a += t / p;
	}
	if (a == c)
	{
		x -= min(x, q);
	}
	a += x / r;
	cout << a << endl;
}
