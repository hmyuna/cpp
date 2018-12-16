#include <bits/stdc++.h>
using namespace std;
int n, t, last;
bool L = 0;
int ans = 1;
int main(){
    cin >> n >> t;
    last = t;
    while(--n){
        last = t;
        cin >> t;
        if(t == last)
            continue;
        if((t < last) ^ L)
            ans++, L = t < last;
    }
    cout << ans << endl;
    return 0;
}