#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strlen(const char *arr)
{
	assert(*arr != NULL);
	int n = 0;
	while(*arr++ != '\0')
	{
		n++;
	}
	return n;
}
int main()
{
	char arr[] = "ffghgfdydcf";
	printf("%d\n",my_strlen(arr));
	return 0;
}
