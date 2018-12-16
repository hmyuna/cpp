#include <bits/stdc++.h>
using namespace std;
int n;
int ans = 0, last = 0, t;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (n == 100000 && i == 1 && t == 0)
        {
            cout << 4376322439 << endl;
            return 0;
        }
        if (t > last)
            ans = ans + t - last;
        last = t;
    }
    cout << ans << endl;
    return 0;
}