#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int ind, rank, w;
};
Node a[20001];
int e[11];
int n, k;
int cmp_index(Node a, Node b)
{
    if(a.ind < b.ind) return 1;
    else return 0;
}
int cmp_w(Node a, Node b)
{
    if(a.w > b.w) return 1;
    if(a.w < b.w) return 0;
    if(a.ind < b.ind) return 1;
    else return 0;
}
void get_rank(){
    sort(a + 1, a + n + 1, cmp_w);
    for(int i = 1; i <= n; i++)
    {
        a[i].rank = i;
    }
    sort(a + 1, a + n + 1, cmp_index);
}
int main()
{
    cin >> n >> k;
    for(int i = 1; i <= 10; i++)
    {
        cin >> e[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].w;
        a[i].ind = i;
    }
    get_rank();
    for(int i = 1; i <= n; i++){
        a[i].w += e[(a[i].rank - 1) % 10 + 1];
    }
    get_rank();
    sort(a + 1, a + n + 1, cmp_w);
    for(int i = 1; i <= k; i++){
        cout << a[i].ind << " ";
    }
    cout << endl;
    return 0;
}