#include <bits/stdc++.h>
using namespace std;
int cmp(int a, int b){
	return a > b;
}
int tall[20001], b, n, ans = 0;
int main(){
	cin >> n >> b;
	for(int i = 1; i <= n; i++){
		cin >> tall[i];
	}
	sort(tall + 1, tall + 1 + n, cmp);
	while(b > 0){
		b -= tall[++ans];
	}
	cout << ans << endl;
	return 0;
}
