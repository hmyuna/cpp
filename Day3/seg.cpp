#include <bits/stdc++.h>
#define MAXN 5000010
using namespace std;

int       n, m;
long long a[MAXN];

struct Node
{
    long long l, r, value, tag;
    Node *    left, *right;
    Node(int t, int p, long long v, Node* a, Node* b)
    {
        l     = t;
        r     = p;
        value = v;
        left  = a;
        right = b;
        tag   = 0;
    }
} * root;

void pushdown(Node* cur)
{
    if (cur->left)
    {
        cur->left->tag += cur->tag;
        cur->right->tag += cur->tag;
    }
    cur->tag = 0;
}

Node* build(int l, int r)
{
    if (l == r) return new Node(l, r, a[l], 0, 0);
    int   m    = (l + r) >> 1;
    Node *left = build(l, m), *right = build(m + 1, r);
    return new Node(l, r, left->value + right->value, left, right);
}
long long find(int l, int r, Node* cur)
{
    cur->value += (cur->r - cur->l + 1) * cur->tag;
    pushdown(cur);
    if (l == cur->l && r == cur->r) return cur->value;
    int m = (cur->l + cur->r) >> 1;
    if (l > m) return find(l, r, cur->right);
    if (r <= m)
        return find(l, r, cur->left);
    else
        return find(l, m, cur->left) + find(m + 1, r, cur->right);
}
void modify(int l, int r, long long v, Node* cur)
{
    if (cur->l == l && cur->r == r)
    {
        cur->tag += v;
        return;
    }
    cur->value += v * (r - l + 1);
    int m = (cur->l + cur->r) >> 1;
    if (r <= m)
        modify(l, r, v, cur->left);
    else if (l > m)
        modify(l, r, v, cur->right);
    else
    {
        modify(l, m, v, cur->left);
        modify(m + 1, r, v, cur->right);
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    root = build(1, n);
    for (int i = 1; i <= m; i++)
    {
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            int x, y, k;
            cin >> x >> y >> k;
            modify(x, y, k, root);
        }
        else
        {
            int x, y;
            cin >> x >> y;
            cout << find(x, y, root) << endl;
        }
    }
    return 0;
}