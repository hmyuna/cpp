#include <bits/stdc++.h>
using namespace std;
int n;
int a[101], x[101];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> x[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j)
				continue;
			if(a[i] + x[i] == a[j] && a[j] + x[j] == a[i]){
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
