#include <bits/stdc++.h>
using namespace std;
double a[2501], f[2501];
int n;
int main(){
	freopen("fence.in", "r", stdin);
	freopen("fence.out", "w", stdout);
	cin >> n;
	a[0] = 1;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	f[0] = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] != 0) {
			f[i] = 1.0 * f[i - 1];
			continue;
		}
		f[i] = f[i - 1] + 1.0;
		for(int j = 1; j < i; j++){
			if(a[j] == 0){
				f[i] = min(1.0 * f[i], f[j - 1] + 1.0 * sqrt(i - j + 1));
			}
		}
	}
	printf("%.3lf\n", f[n]); 
	return 0;
} 
