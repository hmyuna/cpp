#include <bits/stdc++.h>
using namespace std;

class shudu
{
 int i,j;
 int b[9][9],answer[9][9];
 int a[9];
 public:
  shudu()
  {
   i = 0;j = 0;
   for(i=0;i<9;i++)
    a[i] = i+1;
  }
void shiftarray(int a[9]);
void creatsudo();
};
void shudu::shiftarray(int a[9])
{
 int tmp = a[0];
 for(i=1;i<9;i++)
  a[i-1] = a[i];
 a[8] = tmp;
}
void print(int array[9][9])
{
 cout<<"++++++print the array+++++++"<<endl;
 int i,j;
  for(i=0;i<9;i++)
  {for(j=0;j<9;j++)
    cout<<array[i][j]<<" ";
  cout<<endl;
  }
  cout<<"++++++end print++++++\n";
  
}
void swap(int &a,int &b)
{
 int tmp;
 tmp = a;
 a = b;
 b = tmp;
}
void shudu::creatsudo()
{
 cout<<"Now I will create a math array"<<endl;
 srand(time(0));
 
 int m,c[9]={0};
 int tmpi,tmpj;
 for(j=0;j<9;j++)
 {
 for(i=0;i<9;i++)
  b[j][i] =a[i];
 shiftarray(a);
 }//init the array that satisfy the array sudo asked

 for(i=0;i<4;i++)
 { tmpi = rand()%9;
   tmpj = rand()%9;
   for(j=0;j<9;j++)
    swap(b[j][tmpi],b[j][tmpj]);
 }
 //chang col
 for(i=0;i<4;i++)
 { tmpi = rand()%9;
   tmpj = rand()%9;
   for(j=0;j<9;j++)
   {
    swap(b[tmpi][j],b[tmpj][j]);
  
   }
 }
//chang row
//print the array that generate
 for(i=0;i<9;i++)
  for(j=0;j<9;j++)
   answer[i][j] = b[i][j];
  for(i=0;i<9;i++)
  for(j=0;j<4;j++)
  {
   tmpi = rand()%9;
    b[i][tmpi] = 0;
   //swap two number
  }

  for(i=0;i<9;i++)
  for(j=0;j<9;j++)
 {
  if(b[i][j]==0)
   cout<<"# ";
   else cout<<b[i][j]<<" ";
   //swap two number
  if(j==8)
   cout<<"\n";
 }
  cout<<" if you want to know the answer ,you can type #"<<endl;
  char p;
  cin>>p;
  if(p =='#')
   print(answer);
  else return ;
}
int main()

{

shudu a;

a.creatsudo();

}