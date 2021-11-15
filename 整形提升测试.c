#include <stdio.h>
int main()
{
	char a = 1;
	printf("%u\n",sizeof(a));
	printf("%u\n",sizeof(+a));
	printf("%u\n",sizeof(-a));
	printf("%u\n",sizeof(!a));
	short s = 5;
	printf("%d\n",sizeof(s=a+3));
	printf("%u\n",sizeof(+s));
	s = (++a)+(++a)+(++a);
	printf("%d\n",a);
	printf("%d\n",s);
	return 0;
}
