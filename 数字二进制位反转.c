#include <stdio.h>
unsigned  int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int n = 0;
	for(i = 0;i < 31;i++)
	{
		n |= value;
		//int k = value & 1;
		//n |= k;
		n <<= 1;
		//printf("%d",n);
		value >>= 1;
	}
	return n;
}
int main()
{
	unsigned int value = 0;
	scanf("%u",&value);
	//reverse_bit(value);
	printf("%u\n",reverse_bit(value));
	//printf("%d\n",sizeof(unsigned int));
	return 0;
}
