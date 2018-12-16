#include <bits/stdc++.h>
using namespace std;
int n, a[100001], ans = 0;
priority_queue<int, vector<int>, greater<int> > q;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		q.push(a[i]);
	}
	while (1) {
		if (q.size() == 1)
			break;
		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();
		ans += a + b;
		int c = a + b;
		q.push(c);
	}
	cout << ans << endl;
	return 0;
}
