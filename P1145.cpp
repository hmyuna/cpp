#include <bits/stdc++.h>
using namespace std;
int i, flag, k, m, begin;
int check(int T)
{
	int ans = (begin + m - 1) % T;
	if (ans >= k)
	{
		begin = ans;
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	scanf("%d", &k);
	m = k;
	while (!flag)
	{
		flag = 1;
		begin = 0;
		for (i = 0; i < k; i++)
		{
			if (!check(2 * k - i))
			{
				flag = 0;
				break;
			}
		}
		m++;
	}
	printf("%d", m - 1);
	return 0;
}