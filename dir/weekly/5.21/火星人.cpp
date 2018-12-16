#include<bits/stdc++.h>
using namespace std;
int a[10005], n, m;
int main(){
    scanf("%d%d", &n, &m);
    for(int i = 0;i < n; i++)
		scanf("%d", &a[i]);//读入
    while(m--) next_permutation(a,a + n);//加上m（遍历全排列）
    for(int i = 0; i < n - 1; i++) printf("%d ",a[i]);
	printf("%d",a[n - 1]);
    return 0;
}
