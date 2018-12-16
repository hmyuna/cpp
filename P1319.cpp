#include <bits/stdc++.h>
using namespace std;
int cur = 0, n, sum = 0, t, f = 0;
int main(){
	cin >> n;
	while (scanf("%d", &t) == 1) {
		while(t){
			if(sum % n == 0) {
				if(f == 0) f = 1;
				else cout << endl;
			}
			cout << cur;
			t--, sum++;
		}
		cur = 1 - cur;
	}
	return 0;
}
