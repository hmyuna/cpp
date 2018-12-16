#include <bits/stdc++.h>
using namespace std;
struct Point{
    int s, b;
};
int n;
queue <Point> q;
Point a[11];
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i].s >> a[i].b;
    }
    q.push(a[1]);
    return 0;
}
