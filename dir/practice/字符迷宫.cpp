#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
};
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int ans = 1;
char g[1001][1001];
bool used[30];
queue <Point> q;
int n, m;
int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> g[i][j];
    Point s;
    s.x = 1;
    s.y = 1;
    q.push(s);
    memset(used, 0, sizeof(used));
    used[g[s.x][s.y] - 'a'] = 1;
    while(!q.empty()){
        Point u = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            Point v;
            v.x = u.x + dx[i];
            v.y = u.y + dy[i];
            if(v.x >= 1 && v.x <= n && v.y >= 1 && v.y <= m && !used[g[v.x][v.y] - 'a']){
                q.push(v);
                ans++;
                used[g[v.x][v.y] - 'a'] = 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
