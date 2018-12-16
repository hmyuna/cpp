#include <bits/stdc++.h>
using namespace std;
int x, y, t;
int t1, t2, t3, t4, ans = 0;
bool q[300][300];
int main(){
	cin >> x >> y >> t;
	for(int i = 1; i <= t; i++){
		scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
		ans += abs((t3 - t1 + 1) * (t4 - t2 + 1));
		for(int i = t1; i <= t3; i++){
			for(int j = t2; j <= t4; j++) {
				if(q[i][j] == 1) ans--;
				q[i][j] = 1;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
