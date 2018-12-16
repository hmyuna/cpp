#include <bits/stdc++.h>
using namespace std;
int s;
int a[1001];
int f[1001];
void B(){
	for(int i = 1; i <= 1001; i++){
		int t = 0;
		for(int j = 1; j < i; j++){
			if(i % j == 0) t += j;
		}
		a[i] = t;
	}
}
int main(){
	B();
	cin >> s;
	memset(f, -1, sizeof(f));
	f[0] = 0;
	for(int i = 1; i <= 1001; i++){
		for(int j = s; j >= 0; j--){
			if(f[j] != -1 && j + i <= s) f[j + i] = max(f[j] + a[i], f[j + i]);
		}
	}
	int ans = - 1;
	for(int i = 1; i <= s; i++){
		ans = max(ans, f[i]);
	}
	cout << ans << endl;
	return 0;
}