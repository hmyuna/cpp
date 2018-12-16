#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int a, b;
int main()
{
    cin >> a >> b;
    ans += (a * 2 / b);
    if ((a * 2) % b != 0)
        ans++;
    ans += (a * 5 / b);
    if ((a * 5) % b != 0)
        ans++;
    ans += (a * 8 / b);
    if ((a * 8) % b != 0)
        ans++;
    cout << ans << endl;
    return 0;
}