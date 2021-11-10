#include <stdio.h>
int main()
{
	int a = 10;
	int b = a >> 1;
	printf("%d %d\n",a,b);
	a = -1;
	 b = a >> 1;
	printf("%d %d\n",a,b);
	return 0;
}
