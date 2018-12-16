#include <bits/stdc++.h>
using namespace std;
int n, m, a[1001];
int l, r, mid, t;
int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> a[i];
	l = 0, r = m;
	while(l < r){
		mid = (l + r) / 2;
		t = 0;
		for(int i = 0; i < n; i++){
			if(a[i] >= mid) t++;
		}
		if(t > n / 2) l = mid;
		else r = mid;
	}
	for(int i = l; i <= r; i++){
		t = 0;
		for(int j = 1; j <= n; j++){
			if(a[j] >= i) t++;
		}
		if(t == n / 2) {
			cout << i << endl;
			return 0;
		}
	}
	cout << 
	return 0;
}
/*
5
1 3 4 2 5
*/
/*
3
*/
