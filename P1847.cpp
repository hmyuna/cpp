#include <bits/stdc++.h>
using namespace std;
int n, m, x1[10001], tt1[10001], x2[10001], y2[10001], x[10001], y[10001], d[2001], p[2001];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    cin>>x1[i]>>tt1[i]>>x2[i]>>y2[i];
    for(int i=1;i<=m;i++)
    cin>>x[i]>>y[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[j]>=x1[i]&&x[j]<=x2[i]&&y[j]>=tt1[i]&&y[j]<=y2[i])
            d[j]++,p[j]=i;
        }
    }
    for(int i=1;i<=m;i++)
    {
        if(d[i]==0){cout<<"NO"<<endl;continue;}
        cout<<"YES "<<d[i]<<" "<<p[i]<<endl; 
    }
}
