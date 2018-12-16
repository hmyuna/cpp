#include<bits/stdc++.h>
using namespace std;
int v[111][111],e[111][111];
int main()
{
    int m,n,x,y;
    cin>>n>>m>>x>>y;
    for(int i=1;i<=x;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int j=x1;j<=x2;j++)
          for(int z=y1;z<=y2;z++)
          {
            v[j][z]++;
            e[j][z]=i;
          }
    }
    for(int i=1;i<=y;i++)
    {
        int x1,y1;
        cin>>x1>>y1;
        if(v[x1][y1])  cout<<"Y "<<v[x1][y1]<<" "<<e[x1][y1]<<endl;
        else  cout<<"N";
    }
    return 0;
}
