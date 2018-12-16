#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int data[6][6]={{0,0,0,0,0,0},{0,13,11,10,4,7},{0,13,10,10,8,5},{0,5,9,7,7,4},{0,15,12,10,11,5},{0,10,11,8,8,4}};
int max1=0,g[10],f[10];
bool p[6]={0};
int go(int step,int t)                   // step是第几个人，t是之前已得的效益
{  
   for (int i=1;i<=5;i++)
    if (!p[i])                                    //判断第i项工作没人选择
     { 
        f[step]=i;                             //第step个人，就选第i项工作
        p[i]=1;                                  //标记第i项工作被人安排了
        t+=data[step][i];                 //计算效益值
        if (step<5) go(step+1,t);
            else if (t>max1)              //保存最佳效益值
             {
               max1=t;
               for (int j=1;j<=5;j++)
                 g[j]=f[j];                     //保存最优效益下的工作选择方案
             }
        t-=data[step][i];                 //回溯
        p[i]=0;
     }
}
int main()
{
  go(1,0);                                                  //从第1个人，总效益为0开始
  for (int i=1;i<=5;i++)
    cout<<char(64+i)<<":J"<<g[i]<<setw(3);  //输出各项工作安排情况
  cout<<endl;
  cout<<"supply:"<<max1<<endl;                 //输出最佳效益值
}



