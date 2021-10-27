#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		int map = b;
		b = a;
		a = map;
	}
	if(a<c)
	{
		int map = c;
		c = a;
		a = map;
	}
	if(b<c)
	{
		int map = c;
		c = b;
		b = map;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}
