#include <bits/stdc++.h>
using namespace std;
int				 father[20001];
map<string, int> M;
int				 find(int a)
{
	if (father[a] == a) return a;
	return father[a] = find(father[a]);
}
void Union(int a, int b)
{
	int fa = find(a), fb = find(b);
	father[fa] = fb;
}
int n, m, k, cur = 1;
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		string t;
		cin >> t;
		if (M[t] == 0) M[t] = cur++;
		father[M[t]] = M[t];
	}
	for (int i = 1; i <= m; i++)
	{
		string t1, t2;
		cin >> t1 >> t2;
		Union(M[t1], M[t2]);
	}
	cin >> k;
	for (int i = 1; i <= k; i++)
	{
		string t1, t2;
		cin >> t1 >> t2;
		if (find(M[t1]) == find(M[t2]))
			cout << "Yes." << endl;
		else
			cout << "No." << endl;
	}
	return 0;
}