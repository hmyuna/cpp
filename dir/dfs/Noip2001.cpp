#include <bits/stdc++.h>
using namespace std;
int n, k, ans;
int Ans[1000];
void dfs(int u, int last, int tot){
	if(u == k + 1 && tot == 0){
		ans++;
		cout << n << " = " << Ans[1];
		for (int i = 2; i <= k; i++)
		{
			cout << " + " << Ans[i];
		}
		cout << endl;
		return ;
	}
	for(int i = last; i <= tot; i++){
		Ans[u] = i;
		dfs(u + 1, i, tot - i);
	}
}
int main(){
	cin >> n >> k;
	dfs(1, 1, n);
	cout << ans << endl;
	return 0;
}


