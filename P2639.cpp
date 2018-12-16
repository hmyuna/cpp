#include <bits/stdc++.h>
using namespace std;
int H;
bool f[45001];
int n;
int t;
int main(){
	#ifdef LOCAL
	freopen("P2639.in", "r", stdin);
	#endif
	cin >> H >> n;
	f[0] = 1;
	for(int i = 1; i <= n; i++){
		cin >> t;
		for(int j = H; j >= 0; j--){
			if(f[j] == 1 && j + t <= H) f[j + t] = 1;
		}
	}
	for(int i = H; i >= 0; i--){
		if(f[i] == 1){
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}