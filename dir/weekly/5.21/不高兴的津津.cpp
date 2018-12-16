#include <bits/stdc++.h>
using namespace std;
int Max, a, b, ind;
int main(){
    for(int i = 1; i <= 7; i++) {
        scanf("%d %d", &a, &b);
        if(Max < a + b){
            Max = a + b;
            ind = i;
        }
    }
    if(Max > 8) cout << ind << endl;
    else cout << 0 << endl;
    return 0;
}
