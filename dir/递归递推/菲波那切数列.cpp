#include <stdio.h>
int Fibonacci(int n)
{
 if( n == 1 || n == 2) // 递归结束的条件，求前两项
  return 1;
 else
  return Fibonacci(n-1)+Fibonacci(n-2); // 如果是求其它项，先要求出它前面两项，然后做和。
}
int main()
{
 int n;
 
 printf("please input n: ");
 scanf("%d",&n);
 printf("Result: %d\n",Fibonacci(n));
 return 0;
}
