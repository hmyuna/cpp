#include <bits/stdc++.h>
using namespace std;
struct BigNum
{
	int len, s[9999];
	BigNum()
	{
		memset(s, 0, sizeof(s));
		len = 1;
	}
	BigNum operator=(const char *num)
	{
		len = strlen(num);
		for (int i = 0; i < len; ++i)
			s[i] = num[len - i - 1] - '0';
		return *this;
	}
	BigNum operator=(const int num)
	{
		char a[9999];
		sprintf(a, "%d", num);
		*this = a;
		return *this;
	}
	BigNum(const int num)
	{
		*this = num;
	}
	BigNum(const char *num)
	{
		*this = num;
	}
	BigNum operator+(const BigNum &a)
	{
		BigNum c;
		c.len = max(len, a.len) + 1;
		for (int i = 0, x = 0; i < c.len; ++i)
		{
			c.s[i] = s[i] + a.s[i] + x;
			x = c.s[i] / 10;
			c.s[i] = c.s[i] % 10;
		}
		if (c.s[c.len - 1] == 0)
			--c.len;
		return c;
	}
	BigNum operator*(const BigNum &x)
	{
		BigNum c;
		c.len = len + x.len;
		for (int i = 0; i < len; ++i)
			for (int j = 0; j < x.len; ++j)
			{
				c.s[i + j] += s[i] * x.s[j];
				c.s[i + j + 1] += c.s[i + j] / 10;
				c.s[i + j] %= 10;
			}
		if (c.s[c.len - 1] == 0)
			--c.len;
		return c;
	}
};
ostream &operator<<(ostream &out, const BigNum &x)
{
	for (int i = x.len - 1; i >= 0; --i)
		cout << x.s[i];
	return out;
}
istream &operator>>(istream &in, BigNum &x)
{
	char num[9999];
	in >> num;
	x = num;
	return in;
}
int n;
BigNum ans = 0, t = 1;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i = i + 1)
	{
		BigNum _ = i;
		t = t * _;
		ans = ans + t;
	}
	cout << ans << endl;
}