#include <stdio.h>
#include <math.h>
void jiaohuan(*pa,*pb)
{
	int z = 0;
	z =*pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;
	jiaohuan(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
