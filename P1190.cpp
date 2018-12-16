#include <bits/stdc++.h>
using namespace std;
int s[100001], ans;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    int t = m + 1;
    while (t <= n + m)
    {
        for (int i = 1; i <= m; i++) 
        {
            s[i]--;
            if (s[i] == 0)
            {
                s[i] = s[t];
                t++;
            }
        }
        ans++; 
    }
    cout << ans;
    return 0;
}