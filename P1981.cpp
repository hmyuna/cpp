#include <bits/stdc++.h>
using namespace std;
long long shu, sum = 0, cj;
char ch = 0, xg;
bool tf = true;
int main()
{
	while (tf)
	{
		scanf("%lld", &shu);
		tf = scanf("%c", &xg) == 1 ? true : false;
		if (ch == 0)
			cj = shu;
		if (ch == '+')
			sum = (sum + cj) % 10000, cj = shu;
		if (ch == '*')
			cj = (cj * shu) % 10000;
		if (!tf)
			sum = (sum + cj) % 10000;
		ch = xg;
	}
	printf("%lld", sum);
	return 0;
}