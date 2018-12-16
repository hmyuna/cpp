#include <bits/stdc++.h>
using namespace std;
int num[100];
char a[101];
int len;
int t;
int maxn = -1, minn = 101;
int main()
{
	cin >> a;
	len = strlen(a);
	memset(num, 0, sizeof(num));
	for (int i = 0; i < len; i++) {
		num[a[i] - 'a']++;
	}
	for (int i = 0; i <= 26; i++) {
		if (maxn < num[i])
			maxn = num[i];
		if (minn > num[i] && num[i] != 0)
			minn = num[i];
	}
	t = maxn - minn;
	if (t == 0 || t == 1) {
		cout << "No Answer" << endl;
		cout << 0 << endl;
		return 0;
	}
	for (int i = 2; i <= sqrt(t); i++) {
		if (t % i == 0) {
			cout << "No Answer" << endl;
			cout << 0 << endl;
			return 0;
		}
	}
	cout << "Lucky Word" << endl;
	cout << t << endl;
	return 0;
}
