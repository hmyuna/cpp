#include<bits/stdc++.h>
int jz;
char n[1005];
int main(){
    scanf("%d%s",&jz, n);
    for(int i = 0, j = strlen(n) - 1; i < strlen(n); i++, j--) {
        if(i != 0 && n[i] != '0') printf("+");
        if(n[i] != '0') printf("%c*%d^%d", n[i], jz, j);
    }
    return 0;
}
