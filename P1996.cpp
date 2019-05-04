#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1 << 20;
#define reg register

struct Queue
{
	int l, r;
	int q[MAXN];
	Queue() : l(1), r(0) {}
	inline void pop()
	{
		l++;
	}
	inline void push(int a)
	{
		q[++r & (MAXN - 1)] = a;
	}
	inline int front()
	{
		return q[l & (MAXN - 1)];
	}
	inline bool empty()
	{
		return l > r;
	}
} q;
int n, m;
int main()
{
	cin >> n >> m;
	for (reg int i = 1; i <= n; i++) { q.push(i); }
	while (!q.empty())
	{
		for (reg int i = 1; i <= m - 1; i++)
		{
			int _ = q.front();
			q.pop();
			q.push(_);
		}
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
	return 0;
}