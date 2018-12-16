#include <bits/stdc++.h>
using namespace std;
bool a[1000005];
int maxx1, maxx2, minns = 0x7fffffff, maxxe = 0;
int main()
{
    memset(a, false, sizeof(a));
    int n, x, y, s1 = 0, s2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x < minns)
            minns = x;
        if (y > maxxe)
            maxxe = y;
        for (int i = x; i < y; i++)
            a[i] = true;
    }
    for (int i = minns; i < maxxe; i++)
    {
        if (a[i] == true)
        {
            s1++;
            if (s1 > maxx1)
                maxx1 = s1;
        }
        else
            s1 = 0;
        if (a[i] == false)
        {
            s2++;
            if (s2 > maxx2)
                maxx2 = s2;
        }
        else
            s2 = 0;
    }
    cout << maxx1 << " " << maxx2 << "\n";
    return 0;
}