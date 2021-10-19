#include <stdio.h>
#include <math.h>
void add(*p)
{
	(*p)++;
}
int main()
{
	int num =0;
	add(&num);
	printf("%d\n",num);
	add(&num);
	printf("%d\n",num);
	add(&num);
	printf("%d\n",num);
	return 0;
}
