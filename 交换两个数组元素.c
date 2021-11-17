#include <stdio.h>
void reve(arr[],brr[],sz)//交换
{
	int i = 0;
	for(i =0;i < sz;i++)
	{
		int amp = 0;
		amp = arr[i];
		arr[i] = brr[i];
		brr[i] = amp;
	}
}
void print(int arr[],int sz)//打印
{
	int i = 0;
	for(i=0;i < sz;i++)
	{
		printf("%2d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int brr[] = {10,9,8,7,6,5,4,3,2,1};
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr,sz);
	print(brr,sz);
	reve(arr,brr,sz);
	print(arr,sz);
	print(brr,sz);
	return 0;
}
