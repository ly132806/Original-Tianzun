#include <stdio.h>
int jie(int n)
{
	
	if(n > 1)
	{
		n = jie(n-1) * n;
		//return n;
		//jie(n-1);
	}
	//int m = 1;
	return n;
}
int main()
{
	int n = 6;
	scanf("%d",&n);
	printf("%d",jie(n));
	return 0;
}
