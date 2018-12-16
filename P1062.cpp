#include <bits/stdc++.h>
using namespace std;
int k, n;
unsigned long long ans;
int num[100001], len = 0;
int main()
{
	cin >> k >> n;
	while (n) {
		num[len++] = n % 2;
		n /= 2;
	}
	for (int i = 0; i < len; i++) {
		ans += (unsigned long long)pow(k, i) * num[i];
	}
	cout << ans << endl;
	return 0;
}
//0001111
//0123456
