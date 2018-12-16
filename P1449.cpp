#include <bits/stdc++.h>
using namespace std;
char s;
stack<double> S;
int now = 0;
int main()
{
	while (1)
	{
		scanf("%c", &s);
		if(s == '@')
			break;
		if (s >= '0' && s <= '9')
		{
			now = now * 10 + s - '0';
			continue;
		}
		if (s == '.')
		{
			S.push(now);
			now = 0;
			continue;
		}
		int u, v;
		u = S.top();
		S.pop();
		v = S.top();
		S.pop();
		if (s == '+')
		{
			S.push(v + u);
		}
		else if (s == '-')
		{
			S.push(v - u);
		}
		else if (s == '*')
		{
			S.push(v * u);
		}else {
			S.push(v * 1.0 / u);
		}
	}
	printf("%.0lf", S.top());
	return 0;
}
