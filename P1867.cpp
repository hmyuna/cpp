#include<bits/stdc++.h>
using namespace std;
int n;
double x = 10, a, b;
int sum = 0;
int k = 0;
int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%lf%lf", &a, &b);
        x -= a;
        if(x > 10)x = 10;
        if(x <= 0)break;
        else sum += b;
    }
    while(sum >= (1 << k)){
        sum -= (1 << k);
        k++;
    }
    printf("%d ", k);
    printf("%d", sum);
}
