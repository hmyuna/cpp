#include<bits/stdc++.h>
using namespace std;
int f[1001], b[1001], a[1001][1001];
int n, m, p;
int main(){
	cin >> n >> m >> p;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
	for(int i = 1; i <= n; i++)
		scanf("%d", &b[i]);


	for(int i = 1; i <= m; i++)
		f[i] = -1000000000;


	for(int i = 1; i <= m; i++)
		for(int j = 1;j <= n; j++){
			int x = min(i, p);
			int y = j - 1;//获取起点
			if(y == 0) y = n;//若是最后的，连接n, 1
			int ans = a[y][i];
			for(int k = 1; k <= x; k++){
				f[i] = max(f[i - k] - b[y] + ans, f[i]);//转移

				if(y == 1) y = n;
				else y--;

				ans += a[y][i - k];
			}
		}
	cout << f[m] << endl;
	return 0;
}
