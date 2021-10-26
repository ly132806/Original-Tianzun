#include<stdio.h>
int main()
{
    int n=1,num=0;
    while(n<=10)
    {
        int i=1,j = 1;
        while(i<=n)
        {
            j *= i;
            i++;
        }
        num += j;
        n++;
    }
    printf("%d",num);
    return 0;
}