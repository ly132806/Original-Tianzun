#include <stdio.h>
	void xu(int *arr,int m)
	{
		int i = 0;
		for(i = 0;i < m - 1;i++)
		{
			int j = 0;
			for(j = 0;j < m - 1 - i;j++)
			{
				if(arr[j] > arr[j+1])
				{
					int amp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = amp;
				}
			}
			
			
		}
	}
int main()
{

	int arr[] = {9,8,7,6,5,44,4,3,2,1,0};
	int max = 0;
	max = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n",max);
	xu(arr,max);
	int i = 0;
	for(i = 0;i < max;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}
