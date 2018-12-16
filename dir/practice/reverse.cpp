#include <stdio.h>
void Reverse(int , int );
int main()
{
	int len;
	scanf("%d", &len);
    Reverse(len, 0);
    return 0;
}
void Reverse(int len, int t)
{
    char c;
    scanf("%c",&c);
    if(t++ < len)
    {
        Reverse(len, t);
        printf("%c",c);
    }
}
