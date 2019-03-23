#include <bits/stdc++.h>
using namespace std;
string a[1001];
int n;
void dfs(char x)
{
    if(x == '*') return;
    cout << x;
    for(int i = 1; i <= n; i++)
    {
        if(a[i][0] == x)
        {
            dfs(a[i][1]);
            dfs(a[i][2]);
        }
    }
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    dfs(a[1][0]);
    return 0;
}
