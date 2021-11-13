#include <stdio.h>
int count(int n)
{
	int coun = 0;
	int i = 32;
	while(i)
	{
		if(n & 1 == 1)
		{
			coun++;
		}
		n = n >> 1;
		i--;
	}
	return coun;
}
int main()
{
	int m = 0;
	int n = 0;
	int c = 0;
	scanf("%d %d",&m,&n);
	c =m ^ n;
	//printf("%d\n",c);
	printf("%d\n",count(c));//打印n中1个数
	return 0;
}
