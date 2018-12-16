#include <bits/stdc++.h>
using namespace std;
long long Abs(long long t){
    if(t < 0) return -t;
    else return t;
}
long long a[100001], n, s1, s2, p1, ans, m;
long long Left, Right;
long long lastdt = -1;
void getSCORE(void){
    Left = 0,Right = 0;
    for(int i = 1; i < m; i++){
        Left += (long long) a[i] * Abs(i - m);
    }
    for(int i = m + 1; i <= n; i++){
        Right += (long long) a[i] * Abs(i - m);
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("U51942.in", "r", stdin);
    #endif
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cin >> m >> p1 >> s1 >> s2;
    a[p1] += s1;
    getSCORE();
    long long dt = Abs(Left - Right);
    Left += s2 * (m - 1) + s2;
    for(int i = 1; i <= n; i++){
        if(i <= m) Left -= s2;
        if(i > m) Right += s2;
        long long nowdt = Abs(Left - Right);
        if(lastdt > nowdt || lastdt == -1) lastdt = nowdt, ans = i;
    }
    cout << ans << endl;
    return 0;
}