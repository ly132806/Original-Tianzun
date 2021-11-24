#include <stdio.h>
//int main()
//{
/*	int m = 0,a,b,i;
	scanf("%d %d",&a,&b);
	for(i = 1;;i++)
	{
		if(a * i % b == 0)
		{
			printf("%d\n",a*i);
			break;
		}
		
	}
	*/
//	#include<stdio.h>
int main()
{
int a,b,c,n,m;
scanf("%d %d",&a,&b);
n=a;m=b;
while(b)
{
     printf("%d %d %d ",a ,b,c);
c=a%b;
a=b;
b=c;
 
 printf("%d %d %d\n ",a ,b,c);
}
printf("%d\n",n*m/a);
//return 0;
//}2
	return 0;
}
