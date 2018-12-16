#include <bits/stdc++.h>
using namespace std;
int f[200001], v, n, a[31], ans = -1;
int main(){
    cin >> v >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    memset(f, -1, sizeof(f));
    f[0] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = v; j >= a[i]; j--){
            f[j] = max(f[j - a[i]] + a[i], f[j]);
            if(f[j] == v){
            	cout << 0 << endl;
            	return 0;
			}else if(f[j] > ans) ans = f[j];
        }
    }
    cout << v - ans << endl;
    return 0;
}
/*
24
6
8
3
12
7
9
7
*/
