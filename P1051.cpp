#include <bits/stdc++.h>
using namespace std;
int n;

struct Per
{
    string name;
    int qi, ban, lun;
    char ganbu, xibu;
} a[101];
int qian[101];
string maxName;
int maxmoney = 0;
int sum = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].name >>
            a[i].qi >>
            a[i].ban >>
            a[i].ganbu >>
            a[i].xibu >>
            a[i].lun;
        Per tmp = a[i];
        if (tmp.qi > 80 && tmp.lun != 0)
            qian[i] += 8000;

        if (tmp.qi > 85 && tmp.ban > 80)
            qian[i] += 4000;

        if (tmp.qi > 90)
            qian[i] += 2000;

        if (tmp.qi > 85 && tmp.xibu == 'Y')
            qian[i] += 1000;

        if (tmp.ban > 80 && tmp.ganbu == 'Y')
            qian[i] += 850;
    }
    for (int i = 1; i <= n; i++)
    {
        sum += qian[i];
        if (qian[i] > maxmoney)
        {
            maxmoney = qian[i];
            maxName = a[i].name;
        }
    }
    cout << maxName << endl
         << maxmoney << endl
         << sum << endl;
    return 0;
}