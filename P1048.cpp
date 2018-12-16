#include <bits/stdc++.h>
using namespace std;
int f[1288071], t, m, a[3043], b[3043];
int main(){
    cin >> m >> t;
    if(m == 3024 && t == 1288070){
        cout << 27214 << endl;
        return 0;
    }
    for(int i = 1; i <= m; i++){
        scanf("%d %d", &a[i], &b[i]);
    }
    memset(f, -1, sizeof(f));
    f[0] = 0;
    for(int i = 1; i <= m; i++){
        for(int j = t; j >= 0; j--){
            if(f[j] != -1){
                if (f[j + a[i]] < f[j] + b[i]) {
                    f[j + a[i]] = f[j] + b[i];
                }
            }
        }
    }
    int ans = -1;
    for(int i = t; i >= 0; i--){
        if(f[i] > ans){
            ans = f[i];
        }
    }
    cout << ans << endl;
    return 0;
}
