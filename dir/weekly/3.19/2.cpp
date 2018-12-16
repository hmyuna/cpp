#include <bits/stdc++.h>
using namespace std;
int ans[1001][1001], n, x, y, tmp = 1;
int main(int argc, char const *argv[]) {
	cin >> n;
	memset(ans, 0, sizeof(ans));
	ans[x = 1][y = n] = tmp;
	while (tmp < n * n) {
		while(x + 1 <= n && ans[x + 1][y] == 0) ans[++x][y] = ++tmp;
		while(y - 1 >= 1 && ans[x][y - 1] == 0) ans[x][--y] = ++tmp;
		while(x - 1 >= 1 && ans[x - 1][y] == 0) ans[--x][y] = ++tmp;
	 	while(y + 1 <= n && ans[x][y + 1] == 0) ans[x][++y] = ++tmp;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			printf("%3d ", ans[i][j]);
		}
		cout << endl;
	}
	return 0;
}
