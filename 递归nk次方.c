#include <stdio.h>
#include <math.h>
int mult(int a,int b)
{
	if(b == 0)
	{
		return 1;
	}
	/*else if(b == 1)
		{
			return a;
		}
	*/
	else
		return a * mult(a,b-1);
	
}
int main()
{
	int n = 0;
	int k = 0;
	int m = 0;
	scanf("%d%d",&n,&k);
	m = mult(n,k);
	printf("%d",m);
	return 0;
}
