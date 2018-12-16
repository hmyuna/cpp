#include <bits/stdc++.h>
using namespace std;
int n, a[101];
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j != i) a[j] = 1 - a[j];
        }
        for(int j = 1; j <= n; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
