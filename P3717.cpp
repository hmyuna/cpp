#include<bits/stdc++.h>
using namespace std;
int x[10001], y[10001];
bool a[10001][10001];
int m, n, r;
int main(){
    cin >> n >> m >> r;
    int ans = 0;
    for(int _ = 1; _ <= m; _++)
    {
		cin >> x[_] >> y[_];
	    for(int i = 1; i <= n; i++)
		    for(int j = 1; j <= n; j++){
		        double t = sqrt((x[_] - i) * (x[_] - i) + (y[_] - j) * (y[_] - j));
		        if(t <= r) a[i][j] = 1;
		    }
    }
    for(int i = 1; i <= n; i++)
    	for(int j = 1; j <= n; j++)
    		if(a[i][j] == 1) ans++;
    cout << ans;
    return 0;
}
