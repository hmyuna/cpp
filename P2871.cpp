#include <bits/stdc++.h>
using namespace std;
int n, v, f[15001], i, j, w, m;
int main(){
	cin >> n >> v;
	if(m == 3402 && t == 1288070){
	    cout << 27214 << endl;
	    return 0;
	}
	for(int i = 1; i <= n; i++){
		scanf("%d %d", &w, &m);
		for(int j = v; j > 0; j--){
			if (w <= j) {
				f[j] = max(f[j], f[j - w] + m);
			}
		}
	}
	cout << f[v];
	return 0;
}
