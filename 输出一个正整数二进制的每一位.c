#include <stdio.h>
void pri(int n)
{
	if(n != 0)
	{
		int k =0;
		k = n & 1;
		pri(n >> 1);
		printf("%d ",k);
		
	}
	//
	
}
int main()
{
	int n = 1;
	//int  m =0;
	scanf("%d",&n);
	if( n != 0)
	{
		pri(n);
	}
	else
	{
		printf("%d\n",0);
	}
	return 0;
}
		
	
	

