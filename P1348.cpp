#include <bits/stdc++.h>
using namespace std;
int S, E, ans = 0;
int main()
{
    cin >> S >> E;
    for (int i = S; i <= E; i++)
        if (i % 4 == 0 || i % 2 != 0)
            ans++;
    cout << ans << endl;
    return 0;
}