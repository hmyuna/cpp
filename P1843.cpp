#include <bits/stdc++.h>
using namespace std;

priority_queue<int> q;

int main()
{
	int t = 0, i, j, k, m, n, a, b;
	scanf("%d%d%d", &n, &a, &b);
	for (i = 1; i <= n; i++) {
		scanf("%d", &k);
		q.push(k);
	}
	t += a;
	k = q.top();
	q.pop();
	k -= b;
	q.push(k);
	while (true) {
		k = q.top();
		q.pop();
		if (k - t <= 0) {
			printf("%d", t / a);
			break;
		}
		t += a;
		k -= b;
		q.push(k);
	}
	return 0;
}
