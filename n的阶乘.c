#include <stdio.h>
#include <math.h>
int jie(int a)
{
	if(a <= 1)
	{
		return 1;
	}
	else
	{
		return jie(a-1)*jie(a-2);
	}
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	printf("%d",jie(n));
	return 0;
}
