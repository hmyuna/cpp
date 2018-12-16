#include <iostream>
#include <cstdio>
using namespace std;
int a[5003], f[5003], c[5003], v[5003];
int main()
{
    int s, d, m, n, z;
    cin >> s >> d;
    int b = d / s;
    cin >> n >> z;
    for (int i = 1; i <= z; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i] >> v[i];
        c[i] = a[c[i]] * b;
    }
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j >= c[i]; j--)
        {
            f[j] = max(f[j - c[i]] + v[i], f[j]);
        }
    }
    cout << f[m] << endl;
}