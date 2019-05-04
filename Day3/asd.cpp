#include <bits/stdc++.h>
#define MAXN 10
using namespace std;

int n, m, a[MAXN];

struct Node
{
    int   l, r, value, tag;
    Node *left, *right;
    Node(int t, int p, int v, Node* a, Node* b)
    {
        l     = t;
        r     = p;
        value = v;
        left  = a;
        right = b;
        tag   = 0;
    }
} * root;

void push_up(Node* cur)
{
    cur->value = cur->left->value + cur->right->value;
}

void push_down(Node* cur)
{
    cur->left->tag += cur->tag;
    cur->right->tag += cur->tag;
    cur->left->value += cur->tag * (cur->left->r - cur->left->l + 1);
    cur->right->value += cur->tag * (cur->right->r - cur->right->l + 1);
    cur->tag = 0;
}

Node* build(int l, int r)
{
    if (l == r) return new Node(l, r, a[l], 0, 0);
    int   m    = (l + r) >> 1;
    Node *left = build(l, m), *right = build(m + 1, r);
    return new Node(l, r, left->value + right->value, left, right);
}

void modify(int l, int r, int v, Node* cur)
{
    if (cur->l <= l && r <= cur->r)
    {
        cur->value += v * (cur->r - cur->l + 1);
        cur->tag += v;
        return;
    }
    push_down(cur);
    int m = (cur->l + cur->r) >> 1;
    if (l > m)
        modify(l, r, v, cur->right);
    else if (r <= m)
        modify(l, r, v, cur->left);
    else
    {
        modify(l, m, v, cur->left);
        modify(m + 1, r, v, cur->right);
    }
}

int find(int l, int r, Node* cur)
{
    if (l <= cur->l && cur->r <= r) { return cur->value; }
    int m = (cur->l + cur->r) >> 1;
    push_down(cur);
    if (l > m)
        return find(l, r, cur->right);
    else if (r <= m)
        return find(l, r, cur->left);
    else
        return find(l, m, cur->left) + find(m + 1, r, cur->right);
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++) { cin >> a[i]; }
    root = build(1, n);
    cout << root->value << endl;
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