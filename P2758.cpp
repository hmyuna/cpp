#include <bits/stdc++.h>
using namespace std;
char a[2005], b[2005];
int  f[2010][2010];
int  main()
{
    scanf("%s%s", a + 1, b + 1);
    for (int i = 1; i <= 2005; i++)
    {
        f[i][0] = i;
        f[0][i] = i;
    }
    for (int i = 1; i <= strlen(a + 1); i++)
    {
        for (int j = 1; j <= strlen(b + 1); j++)
        {
            if (a[i] == b[j])
                f[i][j] = f[i - 1][j - 1];
            else
                f[i][j] = min(min(f[i - 1][j] + 1, f[i][j - 1] + 1),
                              f[i - 1][j - 1] + 1);
        }
    }
    cout << f[strlen(a + 1)][strlen(b + 1)] << endl;
}