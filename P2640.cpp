#include <bits/stdc++.h>
using namespace std;
int flag = 1;
int prime[100001], is_not_pr[100001], tot = 0;
int get_list(int a){
	is_not_pr[1] = 1;
	for(int i = 2; i <= a; i++){
		if(!is_not_pr[i]) prime[++tot] = i;
		for(int j = 1; j <= tot && i * prime[j] <= a; j++){
			is_not_pr[i * prime[j]] = 1;
			if(i % prime[j] == 0) break;
		}
	}
	return 1;
}
int n, k;
int main(){
	#ifdef LOCAL
	freopen("P2640.in", "r", stdin);
	#endif
	get_list(100001);
	cin >> n >> k;
	for(int i = 2; i <= n - k; i++){
		if(is_not_pr[i] == 0 && is_not_pr[i + k] == 0){
			cout << i << " " << i + k << endl;
			flag = 0;
		}
	}
	if(flag) cout << "empty" << endl;
	return 0;
}