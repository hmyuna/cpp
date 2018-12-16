#include <bits/stdc++.h>
using namespace std;
int n, m;
int findans(int n, int m){
    if(n == 0) return m;
    if(m == 0) return n % 3;
    return findans(n - 1, m) - findans(n, m - 1) + findans(n - 1, m - 1);
}
int main(){
    /*for(int i = 0; i <= 6; i++){
        for(int j = 0; j <= 5; j++){
            cout << setw(5) << findans(j, i);
        }


        cout << endl;
    }*/
    int a;
    cin >> a;
    cout << a << endl;
    return 0;
}
