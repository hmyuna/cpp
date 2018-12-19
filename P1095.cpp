#include <bits/stdc++.h>
using namespace std;
int f[300001]; //表示f
int m, s, t;
int mo;
int main()
{
	cin >> m >> s >> t;
	mo = m;
	for (int i = 1; i <= t; i++)
	{
		if (mo >= 10)
			f[i] = f[i - 1] + 60, mo -= 10;
		else
			f[i] = f[i - 1], mo += 4;
	}
	for (int i = 1; i <= t; i++)
	{
		f[i] = max(f[i], f[i - 1] + 17);
		if(f[i] >= s){
			cout << "Yes" << endl
				 << i << endl;
			return 0;
		}
	}
	cout << "No" << endl
		 << f[t] << endl;
	return 0;
}