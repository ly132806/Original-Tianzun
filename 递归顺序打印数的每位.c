#include <stdio.h>
void bit(unsigned  int n)
{
	if(n > 9)
	{
		bit(n / 10);
	}
	printf("%d ",n % 10);
}
int main()
{
	unsigned  int a = 0;
	scanf("%u ",&a);
	bit(a);
	return 0;
}
