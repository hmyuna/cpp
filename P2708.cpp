#include <bits/stdc++.h>
using namespace std;
string a;
int ans;
int main()
{
    cin >> a;
    ans = a.length() - 1;
    for (int i = 1; i < (int)a.length(); i++) {
        if (a[i] == a[i - 1])
            ans--;
    }
    if (a[a.length() - 1] == '0')
        ans++;
    cout << ans << endl;
    return 0;
}
