#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	char s[1200];//·½³Ì 
	scanf("%s",s);//¶ÁÈë 
	int l=strlen(s);//·½³Ì³¤¶È 
	int i=0/*Ñ­»·±äÁ¿*/,t=0/*µÈÓÚ±ê¼Ç*/,k=0/*¼õ·¨±ê¼Ç*/,x=0,y=0;
	char c;
	while (i<l)
	{
		if (s[i]=='=')//ÕÒµ½µÈÓÚ 
		{
			i++;//ÏòºóËÑ 
			t=1;//·¢ÏÖµÈÓÚ 
		}
		if (s[i]=='-')
		{
			i++;//ÏòºóËÑ 
			k=1;//¼õ·¨ 
		}
		if (s[i]=='+') i++;//¼Ó·¨ 
		int f=0;//Êý×Ö»òÏµÊý 
		while (s[i]>='0' && s[i]<='9')//ÊÇÊý×Ö 
			f=f*10+s[i++]-'0';//´æÈë 
		if (s[i]>='a' && s[i]<='z')//Î´ÖªÊý 
		{
			c=s[i++];//Ìø¹ý²¢»ñÈ¡Î´ÖªÊýÃû³Æ 
			if ( (k+t)%2 ==0 ) x+=f;//¶¼Ã»ËÑµ½£¨=¡¢-£© 
			else x-=f;//ÓÐ=»ò- 
			k=0;
		}
		else
		{
			if ( (k+t)%2 ==0 ) y-=f;//¶¼Ã»ËÑµ½£¨=¡¢-£© 
			else y+=f;//ÓÐ=»ò- 
			k=0;
		}
	}
	double ans=y*1.000/x;//´ð°¸ 
	printf("%c=%.3lf\n",c,ans);//Êä³ö 
	return 0;
}
