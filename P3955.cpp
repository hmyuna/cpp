#include <bits/stdc++.h>
using namespace std;
long long b[1001], x[1001], tmp[1001], Size[1001];
int n, q;
int main()
{
    cin >> n >> q;
    for (int i = 1; i <= 1001; i++)
        tmp[i] = 1;
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    sort(b, b + n + 1);
    for (int i = 1; i <= q; i++)
    {
        cin >> Size[i] >> x[i];
        for (int j = 1; j <= Size[i]; j++)
            tmp[i] *= 10;
    }
    for (int i = 1; i <= q; i++)
    {
        for (int j = 1; j <= n; j++)
            if (b[j] % tmp[i] == x[i])
            {
                cout << b[j] << endl;
                break;
            }
            else if (j == n)
            {
                cout << "-1" << endl;
                break;
            }
    }
}