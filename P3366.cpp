#include <bits/stdc++.h>
using namespace std;
int head[5001], nxt[400001], ed[400001], value[400001], cnt = 0;
int used[5001], dis[5001], n, m, x, y, z;
long long mst = 0;
void addedge(int a, int b, int c)
{
    cnt++;
    value[cnt] = c;
    ed[cnt] = b;
    nxt[cnt] = head[a];
    head[a] = cnt;
}
int main()
{
    vector<int> tmp;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y >> z;
        addedge(x, y, z);
        addedge(y, x, z);
    }
    memset(dis, 0x7f, sizeof(dis));
    memset(used, 1, sizeof(used));
    dis[1] = 0;
    cnt = 0;
    for (int _ = 1; _ <= n; _++) {
        int u = 0;
        for (int i = 1; i <= n; i++) {
            if (dis[i] < dis[u] && used[i]) {
                u = i;
            }
        }
        used[u] = 0;
        mst += dis[u];
        cnt++;
        for (int p = head[u]; p != 0; p = nxt[p]) {
            int v = ed[p];
            if (value[p] < dis[v] && used[v]) {
                dis[v] = value[p];
            }
        }
    }
    if (cnt != n - 1)
        cout << mst;
    else
        cout << "orz";
    return 0;
}
