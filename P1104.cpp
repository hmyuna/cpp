#include <bits/stdc++.h>
using namespace std;
struct Per
{
    int y, m, d;
    string name;
} t[101];
int n;
bool cmp(Per a, Per b){
    if(a.y < b.y){
        return 1;
    }
    if(a.y > b.y){
        return 0;
    }
    if(a.m < b.m){
        return 1;
    }
    if(a.m > b.m){
        return 0;
    }
    if(a.d < b.d){
        return 1;
    }
    if(a.d > b.d){
        return 0;
    }
    return 1;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i].name >> t[i].y >> t[i].m >> t[i].d;
    }
    stable_sort(t + 1, t + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
    {
        cout << t[i].name << endl;
    }
    return 0;
}