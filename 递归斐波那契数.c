#include <stdio.h>
//#include <math.h>
fib(int a)
{
	//int b = 0;
	if(a <= 2)
	{
		return 1;
	}
	else
	{
		return fib(a-1)+fib(a-2);
	}
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int art = fib(n);
	printf("%d",art);
	return 0;
}
