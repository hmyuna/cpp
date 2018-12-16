#include <bits/stdc++.h>
using namespace std;
int n;
int gcd(int x)
{
	int ans = 0;
	for (int i = 1; i <= x / 2; i++) {
		if (x % i == 0)
			ans += i;
	}
	return ans;
}
int main()
{
	scanf("%d", &n);
	for (int i = n; i; i++) {
		if (gcd(i) != gcd(gcd(i)) && gcd(gcd(i)) == i) {
			printf("%d %d\n", i, gcd(i));
			return 0;
		}
	}
	return 0;
}
