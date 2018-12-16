#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
struct color{    //没必要用结构体  开始想复杂了 数组就OK
   char aa;
   int bb;
}q[10];
int num=0,s;
int sss=0;      //同意颜色顺序下排序数
void dfs(int a,int b,int c)          //a表示已用颜色  b表示已放格子数  c表示是否要放空格
{
    if(a==num&&b==s)//满足条件
        {
            sss++;
            return;
        }
    if(b>s)//放的大于格子数
        return;
    if(c!=1)
	    dfs(a+1,b+q[a].bb,1); //放空格
	dfs(a,b+1,0);//不放
}
int main()
{
    int i,j;
    int sum;
    int ss=0;
    char a;
    int b;
    scanf("%d",&s);
    while(cin>>a&&a!='Q')
    {
        scanf("%d",&b);
        ss=ss+b;
        int t=0;
        for(i=0;i<num;i++)
          {
              if(q[i].aa==a)
                {
                    q[i].bb+=b;
                    t=1;
                }
          }
          if(t==0)
          {
              q[num].aa=a;
              q[num++].bb=b;
          }
    }//输入 + 预处理
    int per=1;
    for(i=1;i<=num;i++)
        per=per*i;
    if(s-ss-num+1<=0)         //格子不够
        cout<<0<<endl;
    else
    {
        dfs(0,0,0);//搜索
        cout<<sss*per<<endl;
		/*注意同意颜色归到一起
		暴力搜索出一种颜色顺序下的所有顺序
		再将它乘上N种颜色的排列数N！
		即可得到总排列数
		*/
    }
    return 0;
}
