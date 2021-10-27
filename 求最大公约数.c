#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int max = 0;
	scanf("%d%d",&n,&m);
	if(m < n)
	{
		max = m;
	}
	else max = n;
	while(1)
	{
	   // break;
		if(((m % max) == 0) && ((n % max) == 0))
		{
			break;
		}
		max--;
	//	break;
	}
	printf("%d",max);
	return 0;
}
