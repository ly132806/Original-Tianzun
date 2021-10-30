#include<stdio.h>
int main()
{
    int num = 0;
    while(1)
    {
        printf("请输入您的年龄:");
        scanf("%d",&num);
        if(num<18)
        printf("少年\n");
        else if(num >=18 && num <40)
        printf("青年\n");
        else if(num >= 40 && num < 60)
        printf("壮年\n");
        else if(num >= 60 && num <90)
        printf("老年\n");
        else
        printf("老寿星\n");
    }
    return 0;
}
