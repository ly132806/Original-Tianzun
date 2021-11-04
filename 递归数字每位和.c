#include <stdio.h>
int Digitsum(int num)
{
	int sum = 0;
	if(num<10)
	{
		return sum = sum + num;
	}
	else
return sum = num % 10 + Digitsum(num/10);
}

int main()
{
	int num = 0;
	scanf("%d",&num);
	printf("%d",Digitsum(num));
	return 0;
}
