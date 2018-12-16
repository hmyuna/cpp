#include <bits/stdc++.h>
using namespace std;
int used[21];
int ans[21];
int a;
int isprime(int n){
	if(n == 1) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
void dfs(int n){
	if(n == a + 1) {
		if(isprime(ans[a] + ans[1])){
			for(int i = 1; i <= a; i++) cout << ans[i] << " ";
	 		cout << endl;
		}
		return;
	}
	for(int i = 1; i <= a; i++){
		if(used[i] == 0 && isprime(i + ans[n-1])){
			used[i] = 1;
			ans[n] = i;
			dfs(n + 1);
			used[i] = 0;
		}
	}
}
int main(){
	cin >> a;
	memset(used, 0, sizeof(used));
	/*for(int i = 1; i <= a; i++){
		ans[1] = i;
		used[i] = 1;
		dfs(2);
		used[i] = 0;
	}*/
	ans[1] = 1;
	used[1] = 1;
	dfs(2);
	return 0;
} 
