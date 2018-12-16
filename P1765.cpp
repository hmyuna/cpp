#include <bits/stdc++.h>
using namespace std;
int num[26] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
string a;
int ans;
int main(){
    getline(cin, a);
    for(int i = 0; i <= a.length() - 1; i++){
        if(a[i] == ' ') ans++;
        if(a[i] >= 'a' && a[i] <= 'z') ans += num[a[i] - 'a'];
    }
    cout << ans <<endl;
    return 0;
}