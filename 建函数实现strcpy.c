#include <stdio.h>
#include <assert.h>
char * my_strcay(char *arr,const  char *brr)
{
	assert(*arr != NULL);
	assert(*brr != NULL);
	char * ret = arr;
	while(*arr++ = *brr++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "a,b,c,d,e,f,g,h,i,j,k,l,m,n)";
	char arr2[] = "hallo";
	//my_strcay(arr1 ,arr2);
	printf("%s",my_strcay(arr1 ,arr2));
	return 0;
}
