#include <stdio.h>
void init(int arr[],int sz)
{
	int i = 0;
	for(i = 0;i < sz;i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[],int sz)
{
	int i = 0;
	for(i=0;i < sz;i++)
	{
		printf("%2d ",arr[i]);
	}
	printf("\n");
}
void reverse(int arr[],int sz)
{
	int i = 0;
	--sz;
	 for(i = 0;i <= (sz / 2);i++)
	 {
	 	int jamp = 0;
	 	int s = sz - i;
	 	//printf("%d %d\n",i,s);
	 	jamp = arr[s];
	 	arr[s] = arr[i];
	 	arr[i] = jamp;
	 }
}
int main()
{
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr,sz);
	reverse(arr,sz);//交换数组元素位置
	print(arr,sz);
	init(arr,sz);//数组元素全部置零.
	print(arr,sz);//打印每个数组元素。
	return 0;
}
