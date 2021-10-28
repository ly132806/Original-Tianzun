#include <stdio.h>
int func(int a)
{
	int b = 0;
	switch(a)
	{
		case 1: b = 30;
		break;
		case 2: b = 20;
		case 3: b = 5;
		default: b = 0;
	}
	return b;
}
int main()
{
	printf("%d",func(1));
	return 0;
}
