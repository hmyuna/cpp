#include <iostream>
#define lb() i & -i
using namespace std;
int n, m, tree[500001];
void add(int x, int k)
{
	for (int i = x; i <= n; i += lb())
		tree[i] += k;
}
int find(int x)
{
	int sum = 0;
	for (int i = x; i; i -= lb())
		sum += tree[i];
	return sum;
}
int main()
{
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		add(i, a);
	}
	for (int i = 1; i <= m; i++)
	{
		int t, x, y;
		cin >> t >> x >> y;
		if (t == 1)
			add(x, y);
		else
			cout << find(y) - find(x - 1) << endl;
	}
	return 0;
}