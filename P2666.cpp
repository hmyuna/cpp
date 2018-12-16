#include<bits/stdc++.h>
using namesapce std;
int n, ans = 0;
void dfs(int x,int s){
    if(x == 4)if(s == n) ans++; else;
    else for(int i = 0; i <= sqrt(n); i++) dfs(x + 1, s + i * i);
}
int main(){
    scanf("%d", &n);
    dfs(0, 0); 
    printf("%d", ans); 
    return 0;
}
