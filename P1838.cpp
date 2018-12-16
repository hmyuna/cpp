#include <bits/stdc++.h>
using namespace std;
int qb[10]={6,6,6,6,6,6,6,6,6,6},t=-1;
string s;
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        qb[int(s[i])-48]=t;
        t=-t;
    }
    if(qb[1]==-1&&qb[2]==qb[1]&&qb[3]==qb[2])cout<<"xiaoa wins.\n";
    else if(qb[1]==1&&qb[2]==qb[1]&&qb[3]==qb[2])cout<<"uim wins.\n";
    else if(qb[4]==1&&qb[5]==qb[4]&&qb[6]==qb[4])cout<<"uim wins.\n";
    else if(qb[4]==-1&&qb[5]==qb[4]&&qb[6]==qb[4])cout<<"xiaoa wins.\n";
    else if(qb[7]==-1&&qb[7]==qb[8]&&qb[7]==qb[9])cout<<"xiaoa wins.\n";
    else if(qb[7]==1&&qb[7]==qb[8]&&qb[7]==qb[9])cout<<"uim wins.\n";
    else if(qb[1]==1&&qb[5]==qb[1]&&qb[9]==qb[1])cout<<"uim wins.\n";
    else if(qb[1]==-1&&qb[2]==qb[1]&&qb[3]==qb[2])cout<<"xiaoa wins.\n";
    else if(qb[3]==-1&&qb[5]==qb[3]&&qb[3]==qb[7])cout<<"xiaoa wins.\n";
    else if(qb[3]==-1&&qb[5]==qb[3]&&qb[3]==qb[7])cout<<"uim wins.\n";
    else if(qb[1]==-1&&qb[4]==qb[1]&&qb[7]==-1)cout<<"xiaoa wins.\n";
    else if(qb[1]==1&&qb[4]==qb[1]&&qb[7]==1)cout<<"uim wins.\n";
    else if(qb[2]==1&&qb[5]==qb[2]&&qb[8]==1)cout<<"uim wins.\n";
    else if(qb[2]==-1&&qb[5]==qb[2]&&qb[8]==-1)cout<<"xiaoa wins.\n";
    else if(qb[3]==-1&&qb[6]==qb[3]&&qb[9]==-1)cout<<"xiaoa wins.\n";
    else if(qb[3]==1&&qb[6]==qb[1]&&qb[9]==1)cout<<"uim wins.\n";
    else cout<<"drew.\n";
    return 0;
}
