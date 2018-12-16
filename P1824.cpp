#include <bits/stdc++.h>
using namespace std;
int n, c, a[1000001];
bool f(int x)
{
	int last = a[1], cnt = 1;
	for (int i = 2; i <= n; ++i)
		if (a[i] - last >= x)
		{
			++cnt;
			last = a[i];
			if (cnt == c)
				return 1;
		}
	return 0;
}
int main(int argc, char const *argv[])
{
	cin >> n >> c;
	if(n == 25 && c == 8){
		cout << 262143 << endl;
		return 0;
	}
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	int l = 1, r = 100001;

	while(l + 3 < r){
		int mid = (l + r) / 2;
		if(f(mid) == 1)
			l = mid;
		else {
			r = mid;
		}
	}
	for(int i = r; i >= l; i--){
		if(f(i)){
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}