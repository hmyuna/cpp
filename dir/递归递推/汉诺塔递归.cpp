#include <stdio.h>  
 
int i=1;
void move(int n,char from,char to) 
{printf("第%d步:将%d号盘子%c---->%c\n",i++,n,from,to);  
}  
void hanoi(int n,char from,char denpend_on,char to)
{  
    if (n==1)  
    move(1,from,to);
    else  
    {  
      hanoi(n-1,from,to,denpend_on);
      move(n,from,to);              
      hanoi(n-1,denpend_on,from,to);
    }  
}  
int main()  
{  
     printf("请输入盘子的个数:\n");  
     int n;  
     scanf("%d",&n);  
     char x='A',y='B',z='C';  
     printf("盘子移动情况如下:\n");  
     hanoi(n,x,y,z);
	 return 0 ;  
}
