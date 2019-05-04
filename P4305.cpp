#include <bits/stdc++.h>
using namespace std;
bool HaHa[10000001];
int  t;
int  main()
{
	cin >> t;
	for (int _ = 1; _ <= t; _++)
	{
		memset(HaHa, 0, sizeof(HaHa));
		int a;
		scanf("%d", &a);
		for (int __ = 1; __ <= a; __++)
		{
			int ___;
			scanf("%d", &___);
			if (HaHa[___] == 0) cout << ___ << " ";
			HaHa[___] = 1;
		}
		cout << endl;
	}
	return 0;
}