#include <stdio.h>
void out(int a)
{
	int i = 1;
	printf("偶");
	printf("   奇\n");
	for(i = 1;i <= 32;i++)
	{
		int n = a & 1;
		
		if(i%2)
		{
			printf("%d",n);
		}
		else
		{
			printf("    %d\n",n);
		}
	a = a >> 1;
	}
	/* printf("\n");
	printf("奇数位:");
	for(i = 1;i <= 32;i++)
	{
		int n = a & 1;
		
		if(!(i%2))
		{
			printf("%d ",n);
		}
	a = a >> 1;
	} */
}
int main()
{
	int a = 0;
	scanf("%d",&a);
	out(a);
	return 0;
}
