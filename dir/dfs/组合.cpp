#include<bits/stdc++.h>
using namespace std;
int n;
bool used[30];
int ans[30];
void dfs(int u){
	if(u == n + 1){
		for(int i = 1; i <= n; i++) cout << ans[i] << " ";
		cout << endl;
		return;
	}
	for(int i = ans[u - 1] + 1; i <= n; i++)
		if(used[i] == 0){
			ans[u] = i;
			used[i] = 1;
			dfs(u + 1);
			used[i] = 0;
		}
}
int main(){
	cin >> n;
	memset(used, 0, sizeof(used));
	ans[0] = 0;
	dfs(1);
}
