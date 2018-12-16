#include<bits/stdc++.h>
using namespace std;
int k, n, m, f;
int a[30010], b[30010];
double t;
int main(){
    cin >> k >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    for(int i = 1; i <= n; i++){
        if(a[i] == 0 && b[i] > 0){
            cout << i << " ";
            f = 1;
        }
        else{
            if(a[i] != 0)  t = k / a[i];
            if(b[i] * t >= m){
                cout << i << " ";
                f = 1;
            }
        }
    }
    if(f == 0) cout << -1;
    return 0;
}
