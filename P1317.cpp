#include <bits/stdc++.h>
using namespace std;
int a[1001], n, b[1001], t = 0, ans = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
        if (b[i] != b[i + 1])
            a[++t] = b[i];
    for (int i = 2; i < t; i++) {
        if (a[i] < a[i - 1] && a[i] < a[i + 1]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
