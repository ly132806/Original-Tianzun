#include<stdio.h>
int main()
{
    int n = 1;
    int j = 1;
    int num = 0;
    for(n=1;n<10;n++)
    {
        j*=n;
        num+=j;
    }
    printf("%d",num);
	return 0;
}
