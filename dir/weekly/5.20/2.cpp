#include <bits/stdc++.h>
using namespace std;
int n, m, ans = 0;
int gcd(int x, int y){
	if(y == 0) return x;
	return gcd(y, x % y);
}
int main(){
	cin >> n >> m;
	for(int i = 1; i <= sqrt(m * n); i++){
		if((m * n) % i == 0 && gcd(i, m * n / i) == n) ans++;
	}
	cout << 2 * ans << endl;
	return 0;
}
