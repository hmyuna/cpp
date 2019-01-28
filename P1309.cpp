#include <bits/stdc++.h>
using namespace std;
int n, r, q;
struct Node
{
    int score, ind;
};
Node a[2000005];
int w[2000005];
bool cmp(Node a, Node b)
{
    if(a.score == b.score) return a.ind < b.ind;
    return a.score > b.score;
}
int main()
{
    cin >> n >> r >> q;
    for(int i = 1; i <= 2 * n; i++)
    {
        cin >> a[i].score;
        a[i].ind = i;
    }
    for(int i = 1; i <= 2 * n; i++)
    {
        cin >> w[i];
    }
    sort(a + 1, a + 2 * n + 1, cmp);
    for(int _ = 1; _ <= r; _++)
    {
        for(int i = 1; i <= n; i++)
        {
            if(w[a[2 * i - 1].ind] < w[a[2 * i].ind]) a[2 * i].score++;
            else a[2 * i - 1].score++;
        }
        sort(a + 1, a + 2 * n + 1, cmp);
    }
    cout << a[q].ind << endl;
    return 0;
}