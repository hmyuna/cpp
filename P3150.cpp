#include<bits/stdc++.h>
int i;
int main(){
    scanf("%*d");
    while(scanf("%d", &i) == 1)
    	printf((i & 1 ? "zs wins\n" : "pb wins\n"));
    return 0;
}
