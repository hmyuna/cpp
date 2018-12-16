#include <bits/stdc++.h>
using namespace std;
int t;
long long a, b;
int YES = 0;
int p = 0;
int F(int a)
{
	int t = sqrt(a);
	if (t * t == a)
		return 1;
	return 0;
}
int main()
{
	cin >> t;
	//	cout << F(9) << " " << F(1) << endl;
	for (int _ = 1; _ <= t; _++) {
		cin >> a >> b;
		YES = 0;
		for (long long i = a; i <= b; i++) {
			if (F(i) == 1 && i % 2 == 1)
				YES = (YES + 1) % 2;
		}
		if (YES % 2 == 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
