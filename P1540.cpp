#include <bits/stdc++.h>
using namespace std;
queue <int> q;
bool used[1001];
int n, m, ans = 0;
int main(int argc, char const *argv[])
{
	cin >> m >> n;
	for(int i = 1; i <= n; i++){
		int t;
		cin >> t;
		if(used[t] == 0){
			ans++;
			if((int)q.size() == m){
				int ___;
				___ = q.front();
				q.pop();
				used[___] = 0;
			}
			q.push(t);
			used[t] = 1;
		}
	}
	cout << ans << endl;
	return 0;
}