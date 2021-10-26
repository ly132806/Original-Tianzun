#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int j = 1;
    int left = 0;
    int zh = sizeof(arr) / sizeof(arr[0]);
    int right = zh-1;
   // printf("%d\n",zh);
    while(left <= right)
    {
        int mid = (right + left)/2;
        if(arr[mid] > j)
        right = mid - 1;
        else if(arr[mid] < j)
        left = mid + 1;
        else
        {
        printf("找到了下标是%d",mid);
        break;
        }
    }
    if(left> right)
    printf("没找到");
  //  printf("%d",sizeof(arr));
	return 0;
	}