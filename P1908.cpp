#include <bits/stdc++.h>
using namespace std;
int a[500001], t[500001], n;
unsigned long long tot;
void merge_sort(int ll, int rr)
{
    int mid, i, j, k;
    if (ll == rr)
        return;
    mid = (ll + rr) / 2;
    merge_sort(ll, mid);
    merge_sort(mid + 1, rr);
    i = ll;
    j = mid + 1;
    k = ll;
    while (i <= mid && j <= rr)
    {
        if (a[i] <= a[j])
        {
            t[k++] = a[i++];
        }
        else
        {
            tot += mid - i + 1;
            t[k++] = a[j++];
        }
    }
    while (i <= mid)
        t[k++] = a[i++];
    while (j <= rr)
        t[k++] = a[j++];
    for (int i = ll; i <= rr; i++)
        a[i] = t[i];
}
int main()
{
    scanf("%d", &n);
    memset(a, 0, sizeof(a));
    memset(t, 0, sizeof(t));
    tot = 0;
    for (int i = 1; i <= n; i++)
        scanf("%d", a + i);
    merge_sort(1, n);
    cout << tot << endl;
}