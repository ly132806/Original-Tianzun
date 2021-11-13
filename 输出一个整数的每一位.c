#include <stdio.h>
int main()
{
	int n = 1;
	//int  m =0;
	scanf("%d",&n);
	do
	{
		//m = n % 10;
		printf("%d ",n % 10);
		n = n / 10;
	}while(n);
	return 0;
}
		
	
	

