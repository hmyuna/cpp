#include <bits/stdc++.h>
using namespace std;
int l, r, ans = 0;
int solve(int n) {
	int tmp = 0;
	while (n) {
		if(n % 10 == 2){
			tmp++;
		}
		n /= 10;
	}
	return tmp;
}
int main(int argc, char const *argv[]) {
	scanf("%d %d", &l, &r);
	for(int i = l; i <= r; i++){
		ans += solve(i);
	}
	cout << ans << endl;
	return 0;
}
