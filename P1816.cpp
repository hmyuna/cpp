#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int   l, r, value;
    Node *left, *right;
    Node(int t, int p, int v, Node* a, Node* b)
    {
        l     = t;
        r     = p;
        value = v;
        left  = a;
        right = b;
    }
} * root;

int n, m;
int a[100001];

Node* build(int l, int r)
{
    if (l == r) return new Node(l, r, a[l], 0, 0);
    int   m    = (l + r) >> 1;
    Node *left = build(l, m), *right = build(m + 1, r);
    return new Node(l, r, min(left->value, right->value), left, right);
}

int find(int l, int r, Node* cur)
{
    if (l <= cur->l && cur->r <= r) return cur->value;
    int m = (cur->l + cur->r) >> 1;
    if (l > m)
        return find(l, r, cur->right);
    else if (r <= m)
        return find(l, r, cur->left);
    else
        return min(find(l, m, cur->left), find(m + 1, r, cur->right));
}

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++) { cin >> a[i]; }
    root = build(1, m);
    for (int i = 1; i <= n; i++)
    {
        int L, R;
        cin >> L >> R;
        cout << find(L, R, root) << " ";
    }
    cout << endl;
    return 0;
}