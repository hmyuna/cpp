#include <bits/stdc++.h>
using namespace std;
int n, used[15], ans[15];
int dfs(int x){
    if(x == n + 1){
        cout << ans[1];
        for(int i = 2; i <= n; i++) printf(" %d",ans[i]);
        cout << endl;
        return 0;
    }
    for(int i = 1; i <= n; i++){
        if(!used[i]){
            used[i] = 1;
            ans[x] = i;
            dfs(x + 1);
            used[i] = 0;
        }
    }
    return 0;
}
int main(){
    cin >> n;
    memset(used, 0, sizeof(used));
    dfs(1);
    return 0;
}
