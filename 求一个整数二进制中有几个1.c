#include <stdio.h>
int main()
{
	int a = 3892;
	int count = 0;
	int n = 32;
	while(n)
	{
		if(a & 1 == 1)
			{
				count++;
			}
		a = a >> 1;
		n--;
	}
	printf("%d\n",count);
	return 0;
}
