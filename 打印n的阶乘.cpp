#include<stdio.h>
int main()
{
  int n = 1;
  int i = 1;
  int num = 1;
  while(1)
    {
      scanf("%d",&n);
      if(n == 0)
      printf("%d\n",n);
      else 
      {
        do
          {
            num = num * i;
            i++;
          }
        while(i<=n);
        printf("%d\n",num);
      }
    }
    return 0;
}