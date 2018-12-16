#include <bits/stdc++.h>
using namespace std;
double sum;
int n;
long long t[1001];
double ans;
int main()
{
	cin >> n;
	int T___;
	for (int i = 1; i <= n; i++)
	{
		cin >> T___;
		t[i] = T___ * 1001 + i;
	}
	sort(t + 1, t + 1 + n);
	for (int j = 1; j <= n; j++)
	{
		cout << t[j] % 1001 << " ";
		sum += t[j] / 1001 * (n - j);
	}
	cout << endl;
	ans = sum * 1.0 / n;
	printf("%0.2lf", ans);
	return 0;
}