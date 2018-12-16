#include <bits/stdc++.h>
using namespace std;
int n, m;

struct Person
{
    int num, score;
} a[10001];
bool cmp(Person x, Person y)
{
    if (x.score > y.score)
        return 1;
    else if (x.score < y.score)
        return 0;
    else if (x.num < y.num)
        return 1;
    else
        return 0;
}
int ans = 0;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].num >> a[i].score;
    }
    sort(a + 1, a + 1 + n, cmp);
    int Score = a[(int)(m * 1.5)].score;
    cout << Score << " ";
    for (int i = 1; i <= n; i++)
    {
        if (a[i].score >= Score)
            ans++;
    }
    cout << ans << endl;
    for (int i = 1; i <= n; i++)
    {
        if (a[i].score >= Score)
            cout << a[i].num << " " << a[i].score << endl;
    }
    return 0;
}