#include <bits/stdc++.h>
using namespace std;
int  L, R, T;
char a[1001];
bool f = 0;
int  Get(void)
{
	memset(a, 0, sizeof(a));
	char _;
	_		= getchar();
	int len = 1;
	while (_ != '\n')
	{
		a[len++] = _;
		_		 = getchar();
	}
	return len - 1;
}
bool comp()
{
	cout << 0 << endl;
	return 1;
}
int main()
{
	cin >> L >> R >> T;
	getchar();
	for (int i = 1; i <= T; i++)
	{
		f	 = 1;
		int l = Get();
		if (a[1] == '0' && l == 1) { f = 1; }
		else if (a[1] == '-')
		{
			if (a[2] < '1' || a[2] > '9')
			{
				cout << 1 << endl;
				f = 0;
			}
			for (int j = 3; j <= l; j++)
			{
				if (a[j] > '9' || a[j] < '0')
				{
					cout << 1 << endl;
					f = 0;
				}
			}
		}
		else
		{
			if (a[1] < '1' || a[1] > '9')
			{
				cout << 1 << endl;
				f = 0;
			}
			for (int j = 2; j <= l; j++)
			{
				if (a[j] > '9' || a[j] < '0')
				{
					cout << 1 << endl;
					f = 0;
				}
			}
		}
		if(f == 1)
		{
			int Ans;
			sscanf(a + 1, "%d", &Ans);
			if (Ans >= L && Ans <= R)
			{
				cout << 0 << endl;
				continue;
			}
			else
			{
				cout << 2 << endl;
				continue;
			}
		}
	}
	return 0;
}