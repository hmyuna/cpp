#include <bits/stdc++.h>
using namespace std;
map<int, int> used;
int n, m, ans, a[100001], b[100001];
int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int t;
    for(int i = 1; i <= m; i++){
        cin >> b[i];
        used[b[i]] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(used[a[i]] == 1)
            cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}