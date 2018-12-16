#include<bits/stdc++.h>
using namespace std;
int n,i;
int a[10001];
void prime(int x)
{
    int k=x;
    for(int i=2;i<=x;i++)
        if(k==1) break;
        else
            while(k%i==0) {a[i]++;k/=i;}
}
int main()
{
    cin>>n;
    for(i=2;i<=n;i++) prime(i);
    for(i=2;i<=10001;i++) if(a[i]) cout<<i<<" "<<a[i]<<endl;
}
