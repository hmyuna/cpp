#include <cstdio>
#include <string.h>
#include <iostream>
using namespace std;
const int maxn = 100005;
int a[maxn];
int f[maxn];
int ans = 0;
int main()
{
    int n = 0;
    int l, r, mid;
    while (scanf("%d", &a[++n]) != EOF)
        ;
    n--;
    f[0] = 11111111;
    for (int i = 1; i <= n; i++)
    {
        if (f[ans] >= a[i])
        {
            f[ans + 1] = a[i];
            ans++;
        }
        else
        {
            l = 0;
            r = ans;
            while (l < r)
            {
                mid = (l + r) / 2;
                if (f[mid] >= a[i])
                    l = mid + 1;
                else
                {
                    r = mid;
                }
            }
            if (l != 0)
                f[l] = a[i];
        }
    }
    cout << ans << endl;
    memset(f, -1, sizeof(f));
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (f[ans] < a[i])
        {
            f[ans + 1] = a[i];
            ans++;
        }
        else
        {
            l = 0;
            r = ans;
            while (l < r)
            {
                mid = (l + r) / 2;
                if (f[mid] >= a[i])
                    r = mid;
                else
                {
                    l = mid + 1;
                }
            }
            f[l] = a[i];
        }
    }
    cout << ans << endl;
}