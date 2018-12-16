#include <bits/stdc++.h>
using namespace std;
int n, k;
int solve(int n, int k){
	if(n == k || k == 1) return 1;
	return solve(n - 1, k - 1) + k * solve(n - 1, k);
}
int main(){
	cin >> n >> k;
	cout << solve(n, k);
	return 0;
}
