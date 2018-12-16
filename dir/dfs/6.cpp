#include <bits/stdc++.h>
using namespace std;
bool used[7];
int ans[7];
int maxans[7];
int tot = 0;
int Max = 0;
int data[6][6] = {{0, 0, 0, 0, 0, 0}, {0, 13, 11, 10, 4, 7}, {0, 13, 10, 10, 8, 5}, {0, 5, 9, 7, 7, 4}, {0, 15, 12, 10, 11, 5}, {0, 10, 11, 8, 8, 4}};
void dfs(int u){
	if(u == 6){
		if(tot > Max) {
		Max = tot;
		for(int i = 1; i <= 6; i++) maxans[i] = ans[i];
	}
		return;
	}
	for(int i = 1; i <= 5; i++){
		if(used[i] == 0){
			ans[u] = i;
			tot += data[u][i];
			used[i] = 1;
			dfs(u + 1);
			used[i] = 0;
			tot -= data[u][i];
		}
	}
}
int main(){
	dfs(1);
	for(int i = 1; i <= 5; i++){
		cout << (char)('A' + i - 1) << " : J" << maxans[i] << endl;
	}
	cout << Max << endl;
	return 0;
}


