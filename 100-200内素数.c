#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int a = 0;
	for(i = 101;i < 200;i+=2)
	{
		int n = 0;
		int s = 1;
		for(n = 2;n <= sqrt(i);n++)
		{
			if(i % n == 0)
			{
				//printf("shi=%d",i);
				s = 0;
				break;
			}
			//else printf("%d ",i);
		}
		if(s == 1)
		{
			printf("%d ",i);
			a++;
		}
	}
	printf("\n共有素数%d",a);
	return 0;
}
