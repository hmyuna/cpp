#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[1200];
	scanf("%s", &s);
	int  l = strlen(s);
	int  i = 0, t = 0, k = 0, x = 0, y = 0;
	char c;
	while (i < l)
	{
		if (s[i] == '=')
		{
			i = i + 1;
			t = 1;
		}
		if (s[i] == '-')
		{
			i = i + 1;
			k = 1;
		}
		if (s[i] == '+') i = i + 1;
		int f = 0;
		while (s[i] >= '0' && s[i] <= '9')
		{
			f = f * 10 + s[i] - '0';
			i = i + 1;
		}
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			c = s[i];
			i = i + 1;
			if (f == 0) f = 1;
			if ((k + t) % 2 == 0)
				x = x + f;
			else
				x = x - f;
			k = 0;
		}
		else
		{
			if ((k + t) % 2 == 0)
				y = y - f;
			else
				y = y + f;
			k = 0;
		}
	}
	double ans = y * 1.000 / x;
	if (ans == 0) ans = -ans;
	printf("%c=%.3lf\n", c, ans);
	return 0;
}
