#include<stdio.h>
#include<string.h>
int main()
{
   char arr[] = "abc";
   char arr1[] = {'a','b','c','\0'};
   printf("%s %s\n",arr,arr1);
   printf("%d",strlen(arr1));
    return 0;
    
}