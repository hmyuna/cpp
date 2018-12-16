#include <bits/stdc++.h>
using namespace std;
int l, m, ans_s1, ans_s2;
int main(){
    cin >> l >> m;
    ans_s2 = ((1 + l) * (1 + m) * l * m) / 4;
    for(int i = 0; i <= min(l, m); i++){
        ans_s1 += (l - i) * (m - i);
    }
    cout << ans_s1 << " " << ans_s2 - ans_s1 << endl;
    return 0;
}
