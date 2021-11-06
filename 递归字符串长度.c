#include <stdio.h>
int my_strlen(char *arr)
{
	if(*arr != '\0')
	{
		return 1 + my_strlen(arr+1);;
	}
	else
	return 0;
}
int main()
{
	char arr[] = "asdfg";
	printf("%d",my_strlen(arr));
	return 0;
}