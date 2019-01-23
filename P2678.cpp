#include <bits/stdc++.h>
using namespace std;
int l, n, m;
int d[500001];
int Left, Right, mid;
int check(int x){
    int tot = 0;
    int i = 0;
    int now = 0;
    while (i < n + 1){
        i++;
        if (d[i] - d[now] < x)
            tot++;
        else
            now = i;
    }
	return tot;
}
int main()
{
	cin >> l >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> d[i];
	}
	d[n + 1] = l;
	Left = 0, Right = l;
	while (Left + 3 < Right) {
		mid = (Left + Right) / 2;
		if (check(mid) <= m) {
			Left = mid;
		}
		else {
			Right = mid;
		}
	}
	for (int i = Right; i >= Left; i--) {
		if (check(i) <= m) {
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
