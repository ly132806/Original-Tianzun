#include<stdio.h>
int main()
{
    int atr[10];
    int i = 0;
    int sum = 0;
    for(i=0;i<10;++i)
      {
          printf("i=%d\n",i);
          printf("hello\n");
         // printf("请输入art[i]=");
          scanf("%d\n",&atr[i]);
         
          if(sum<atr[i])
          sum=atr[i];
    printf("当前atr[i]=%d\n",atr[i]);
          
          };
      printf("%d\n",sum);
    return 0;
    }