#include <bits/stdc++.h>
using namespace std;
int n;
int total = 0;
int ans[1000];
void dfs(int u, int last, int tot){
	if(tot == 0){
		if(last == n) return ;
		total++;
		cout << n << " = " << ans[1];
		for(int i = 2; i < u; i++){
			cout << " + " << ans[i];
		}
		cout << endl;
		return;
	}
	for(int i = last; i <= tot; i++){
		ans[u] = i;
		dfs(u + 1, i, tot - i);
	} 
}
int main(){
	cin >> n;
	dfs(1, 1, n);
	cout << "total = " << total << endl;
	return 0;
}


