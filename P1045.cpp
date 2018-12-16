#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100001;
struct BigNum
{
	int len, s[MAXN];
	BigNum()
	{
		memset(s, 0, sizeof(s));
		len = 1;
	}
	BigNum(int num) { *this = num; }
	BigNum(const char *num) { *this = num; }
	BigNum operator=(const int num)
	{
		char s[MAXN];
		sprintf(s, "%d", num);
		*this = s;
		return *this;
	}
	BigNum operator=(const char *num)
	{
		for (int i = 0; num[i] == '0'; num++)
			;
		len = strlen(num);
		for (int i = 0; i < len; i++)
			s[i] = num[len - i - 1] - '0';
		return *this;
	}
	BigNum operator+(const BigNum &b) const
	{
		BigNum c;
		c.len = 0;
		for (int i = 0, g = 0; g || i < max(len, b.len); i++)
		{
			int x = g;
			if (i < len)
				x += s[i];
			if (i < b.len)
				x += b.s[i];
			c.s[c.len++] = x % 10;
			g = x / 10;
		}
		return c;
	}
	BigNum operator+=(const BigNum &b)
	{
		*this = *this + b;
		return *this;
	}
	void clean()
	{
		while (len > 1 && !s[len - 1])
			len--;
	}
	BigNum operator*(const BigNum &b)
	{
		BigNum c;
		c.len = len + b.len;
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < b.len; j++)
			{
				c.s[i + j] += s[i] * b.s[j];
			}
		}
		for (int i = 0; i < c.len; i++)
		{
			c.s[i + 1] += c.s[i] / 10;
			c.s[i] %= 10;
		}
		c.clean();
		return c;
	}
	BigNum operator*=(const BigNum &b)
	{
		*this = *this * b;
		return *this;
	}
	BigNum operator-(const BigNum &b)
	{
		BigNum c;
		c.len = 0;
		for (int i = 0, g = 0; i < len; i++)
		{
			int x = s[i] - g;
			if (i < b.len)
				x -= b.s[i];
			if (x >= 0)
				g = 0;
			else
			{
				g = 1;
				x += 10;
			}
			c.s[c.len++] = x;
		}
		c.clean();
		return c;
	}
	BigNum operator-=(const BigNum &b)
	{
		*this = *this - b;
		return *this;
	}
	BigNum operator/(const BigNum &b)
	{
		BigNum c, f = 0;
		for (int i = len - 1; i >= 0; i--)
		{
			f = f * 10;
			f.s[0] = s[i];
			while (f >= b)
			{
				f -= b;
				c.s[i]++;
			}
		}
		c.len = len;
		c.clean();
		return c;
	}
	BigNum operator/=(const BigNum &b)
	{
		*this = *this / b;
		return *this;
	}
	BigNum operator%(const BigNum &b)
	{
		BigNum r = *this / b;
		r = *this - r * b;
		r.clean();
		return r;
	}
	BigNum operator%=(const BigNum &b)
	{
		*this = *this % b;
		return *this;
	}
	bool operator<(const BigNum &b)
	{
		if (len != b.len)
			return len < b.len;
		for (int i = len - 1; i != -1; i--)
		{
			if (s[i] != b.s[i])
				return s[i] < b.s[i];
		}
		return false;
	}
	bool operator>(const BigNum &b)
	{
		if (len != b.len)
			return len > b.len;
		for (int i = len - 1; i != -1; i--)
		{
			if (s[i] != b.s[i])
				return s[i] > b.s[i];
		}
		return false;
	}
	bool operator==(const BigNum &b)
	{
		return !(*this > b) && !(*this < b);
	}
	bool operator!=(const BigNum &b)
	{
		return !(*this == b);
	}
	bool operator<=(const BigNum &b)
	{
		return *this < b || *this == b;
	}
	bool operator>=(const BigNum &b)
	{
		return *this > b || *this == b;
	}
	string str() const
	{
		string res = "";
		for (int i = 0; i < len; i++)
			res = char(s[i] + '0') + res;
		return res;
	}
};

istream &operator>>(istream &in, BigNum &x)
{
	string s;
	in >> s;
	x = s.c_str();
	return in;
}

ostream &operator<<(ostream &out, const BigNum &x)
{
	out << x.str();
	return out;
} //使用减法时必须a > b;
BigNum b, p, k;
BigNum Pow(BigNum b, BigNum p, BigNum k)
{
	BigNum result = 1;
	if (k == 1)
	{
		return 0;
	}
	result = 1;
	while (p != 0)
	{
		if (p % 2 == 1)
		{
			result = result * b % k;
		}
		p /= 2;
		b = b * b % k;
	}
	return result;
}
int main()
{
	cin >> p;
	b = 2;
	BigNum t = 1;
	for(int i = 1; i <= 500; i++){
		t *= 10;
	}
	cout << Pow(b, p, t) - 1;
	return 0;
}