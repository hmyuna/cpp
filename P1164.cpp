#include<bits/stdc++.h>
using namespace std;
int v[10001],f[10001];
int m, n;
int main(){
    cin >> n >> m;
    f[0] = 1;
    for(int i = 1; i <= n; i++)    
        cin >> v[i];
    for(int i = 1; i <= n; i++)
        for(int j = m; j >= v[i]; j--)
            f[j]+=f[j-v[i]];
    cout<<f[m]<<endl;
    return 0;
}
