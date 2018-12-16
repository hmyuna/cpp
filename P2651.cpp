#include <bits/stdc++.h>
using namespace std;
int a1, a2, a, n, f = 1, t;
int main(){
	cin >> t;
	for(int _ = 1; _ <= t; _++){
		f = 1;
		cin >> n;
		cin >> a1 >> a2;
		a2 /= __gcd(a1, a2);
		for(int i = 3; i <= n; i++){
			cin >> a;
			a2 /= __gcd(a, a2);
			if(a2 == 1 && f) {
				cout << "Yes" << endl;
				f = 0;
			}
		}
		if(f) cout << "No" << endl;
	}
	return 0;
}