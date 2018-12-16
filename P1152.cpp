#include <bits/stdc++.h>
using namespace std;
int a[1001], n, t, last;
int main(){
    cin >> n;
    cin >> last;
    for(int i = 2; i <= n; i++){
        cin >> t;
        if(abs(last - t) > n){
            cout << "Not jolly" << endl;
            return 0;
        }
        if(a[abs(last - t)] == 1){
            cout << "Not jolly" << endl;
            return 0;
        }
        a[abs(last - t)]++;
        last = t;
    }
    cout << "Jolly" << endl;
    return 0;
}
