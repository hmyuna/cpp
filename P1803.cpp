#include <bits/stdc++.h>
using namespace std;
struct competition
{
	int left, right;
};
bool cmp(competition a, competition b){
	if(a.right < b.right) return 1;
	if(a.right > b.right) return 0;
	if(b.left > a.left) return 0;
	else return 0;
}
competition a[1000001];
int n;
int ans = 0;
int time_end = -1;
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i].left >> a[i].right;
	}
	sort(a + 1, a + 1 + n, cmp);
	for(int i = 1; i <= n; i++){
		if(time_end <= a[i].left) {
			ans++;
			time_end = a[i].right;
		}
	}
	cout << ans << endl;
	return 0;
}