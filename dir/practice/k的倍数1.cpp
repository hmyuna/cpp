#include <stdio.h>
int comp(int i, int k){
	int ans = i;
	if(i % k != 0)
	ans += k - (i % k);
	return ans;
}
int main (){
	int l, r, k;
	scanf("%d%d%d", &l, &r, &k);
	int ans = 0;
	ans += l % k == 0 ? 1 : 0;
	ans += r % k == 0 ? 1 : 0;
	l = comp(l, k);
	r = comp(r, k);
	ans += (r - l) / k;
	printf("%d", ans);
	return 0;
}
