#include <bits/stdc++.h>
using namespace std;
int a[10000001], n, t;
int main(){
    cin >> n;
    memset(a, 0, sizeof(a));
    for(int i = 1; i <= n; i++){
        cin >> t;
        a[t]++;
    }
    for (int i = 1; i <= 10000001; i++) {
        if(a[i] == 1) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
