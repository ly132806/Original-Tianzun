#include <stdio.h>
int main()
{
	int a = 1,b = 2,c = 2;
	while(a < b < c)
	{
		int t;
		t = a;
		a = b;
		b = t;
		c--;
		printf("%d %d %d " ,a,b,c);
		
	}
	return 0;
}
