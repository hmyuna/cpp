#include <bits/stdc++.h>
using namespace std;
string t, Maxt = "";
int Max = 0;
int n;
int STRMIN(string a, string b)
{
    if (a.size() < b.size())
        return 1;
    if (a.size() > b.size())
        return 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
            continue;
        if (a[i] < b[i])
            return 1;
        if (a[i] > b[i])
            return 0;
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (STRMIN(Maxt, t))
        {
            Maxt = t;
            Max = i;
        }
    }
    cout << Max << endl
         << Maxt << endl;
    return 0;
}