#include <bits/stdc++.h>
using namespace std;
int n, m, a[100001];
bool judge(int x)
{
	int tot = 1;
	int num = 1;
	for (int i = 2; i <= n; i++)
		if (a[i] - a[num] >= x)
		{
			tot++;
			num = i;
		}
	if (tot >= m)
		return true;
	else
		return false;
}
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	int l = 0, r = a[n];
	while(l + 3 < r){
		int mid = (l + r) / 2;
		if(judge(mid)){
			l = mid;
		}
		else
		{
			r = mid;
		}
	}
	for(int i = r; i >= l; i--){
		if(judge(i)){
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}