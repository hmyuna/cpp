#include <stdio.h>
#include <windows.h>
int main()
{ 
   
   int n;
   int i;
   int fn_1,fn_2;
   printf("please input n=");
   scanf("%d",&n); //输入任意n值
   int fn=0;
   if(n==1)
     fn=3; //初始化当n=1和n=2时的临界条件 
   else if(n==2)
     fn=7;
   else{ 
     fn_1=7;
     fn_2=3;
     for(i=3;i<=n;i++)
     {
        fn=2*fn_1+fn_2; //当n>=3时fn的通式 
        fn_2=fn_1;//更新fn_1和fn_2的值 
        fn_1=fn;
     }
   }
   printf("一共有%d种走法！\n",fn);  //输出结果
   return 0;
}
