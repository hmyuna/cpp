#include <bits/stdc++.h>
using namespace std;
int Max = -1, ans, n, t, t1;
int main(){
	cin >> n;
	cin >> t1;
	for(int i = 2; i <= n; i++){
		scanf("%d", &t);
		if(t - t1 == 1) ans++;
		else if(Max < ans){
			Max = ans;
			ans = 0;
		}else{
			ans = 0;
		}
		t1 = t;
	}
	cout << Max + 1 <<endl;
	return 0;
}
