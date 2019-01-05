#include <bits/stdc++.h>
using namespace std;
int ans = 1, n, last, tmp, Max = -1;
int main() {
	cin >> n;
	last = -1;
	for(int i = 1; i <= n; i++){
		cin >> tmp;
		if(tmp > last){
			ans++;
			if(ans > Max) Max = ans;
		}else{
			ans = 1;
		}
		last = tmp;
	}
	cout << Max << '\n';
	return 0;
}
