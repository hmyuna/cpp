#include <bits/stdc++.h>
using namespace std;
int used[100001] = {}, ans = 0, n, a[100001];
int main(){
	cin >> n;
	for(int i = 1; i < n + 1; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			for(int k = 1; k <= n; k++){
				if(a[i] + a[j] == a[k] && used[k] == 0){
					ans++;
					used[k] = 1;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
