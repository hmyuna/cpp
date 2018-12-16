#include <bits/stdc++.h>
using namespace std;
int main(){
    string st;
    int i, len;
    getline(cin, st);
    len = st.size();
    for(i = 0; i < len; i++){
        if(st[i] >= 'a' && st[i] <= 'z')
            st[i] = st[i] - 'a' + 'A';
    }
    cout << st << endl;
    return 0;
}
