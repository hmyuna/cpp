#include<bits/stdc++.h>
using namespace std;
int n, t;
char s[30];
int main(){
    cin >> n;
    for(int _ = 1; _ <= n; _++){
        int n, ans = 0;
        cin >> n;
        for(int i = 1; i <= n; i++){
            sprintf(s, "%d", i);
            if(strchr(s,'7') == NULL) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
