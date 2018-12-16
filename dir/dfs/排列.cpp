#include <bits/stdc++.h>
using namespace std;
int n, r;
int num[1000];
bool used[1000];
int ans[1000];
void dfs(int u){
	if(u == r + 1){
		for(int i = 1; i <= r; i++) cout << ans[i] << " ";
		cout << endl;
		return;
	}
	for(int i = 1; i <= n; i++){
		if(used[i] == 0){
			ans[u] = i;
			used[i] = 1;
			dfs(u + 1);
			used[i] = 0;
		}
	}
}
int main(){
	cin >> n >> r;
	for(int i = 1; i <= n; i++) scanf("%d", &num[i]);
	dfs(1);
	return 0;
}


